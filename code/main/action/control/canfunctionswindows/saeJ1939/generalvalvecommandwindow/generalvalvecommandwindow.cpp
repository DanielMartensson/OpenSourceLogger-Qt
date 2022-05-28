#include "generalvalvecommandwindow.h"
#include "ui_generalvalvecommandwindow.h"
#include "code/tools/database/database.h"

GeneralValveCommandWindow::GeneralValveCommandWindow(QWidget *parent, J1939 *j1939, MessageServiceThread *messageServiceThread, CallPeriodThread *callPeriodThread) :
    QWidget(parent),
    ui(new Ui::GeneralValveCommandWindow),
    j1939(j1939),
    callPeriodThread(callPeriodThread)
{
    ui->setupUi(this);

    /* Send signals from this window to message service thread */
    connect(this, &GeneralValveCommandWindow::signalSendCanBusMessageToSTM32PLC, messageServiceThread, &MessageServiceThread::slotSendCanBusMessageToSTM32PLC);

    /* Send signals from general valve command window to message service thread */
    connect(this, &GeneralValveCommandWindow::signalSetGeneralValveCommandExtendedFlow, messageServiceThread, &MessageServiceThread::slotSetGeneralValveCommandExtendedFlow);
}

GeneralValveCommandWindow::~GeneralValveCommandWindow()
{
    delete ui;
}

void GeneralValveCommandWindow::showEvent(QShowEvent *event)
{
    Q_UNUSED(event)

    /* Connect the thread so we can send signals to the thread to this window */
    connect(callPeriodThread, &CallPeriodThread::signalCallFunction, this, &GeneralValveCommandWindow::slotSendValveCommandInSlowPeriods);

    /* Start the thread with a period time */
    connect(this, &GeneralValveCommandWindow::signalSetCallPeriodThreadActive, callPeriodThread, &CallPeriodThread::slotSetCallPeriodThreadActive);
    emit signalSetCallPeriodThreadActive(true, 1000);
}

void GeneralValveCommandWindow::closeEvent(QCloseEvent *event)
{
    Q_UNUSED(event)

    /* Disconnect the thread so we can send signals to the thread to this window */
    disconnect(callPeriodThread, &CallPeriodThread::signalCallFunction, this, &GeneralValveCommandWindow::slotSendValveCommandInSlowPeriods);

    /* Stop the thread with a period time */
    emit signalSetCallPeriodThreadActive(false, 1000);
    disconnect(this, &GeneralValveCommandWindow::signalSetCallPeriodThreadActive, callPeriodThread, &CallPeriodThread::slotSetCallPeriodThreadActive);
}

void GeneralValveCommandWindow::slotSendValveCommandInSlowPeriods()
{
    /*
     * According to ISO 11783 standard for general valve command.
     * Each valve need to go into center if the valuve does not get any messages in a certain time called time out.
     */
    shapeGeneralValueCommandExtendedFlowMessage(ui->extendedFlowDial->value());
}

void GeneralValveCommandWindow::on_extendedFlowDial_valueChanged(int value)
{
    /* This is just a value change listener so we can send values in continuous time - else the valve will be very jumpy */
    shapeGeneralValueCommandExtendedFlowMessage(value);
}

void GeneralValveCommandWindow::shapeGeneralValueCommandExtendedFlowMessage(int value)
{
    /* Send the SAE J1939 message */
    uint8_t valveState;
    if(value > 1)
        valveState = VALVE_STATE_EXTEND;
    else if(value < -1)
        valveState = VALVE_STATE_RETRACT;
    else
        valveState = VALVE_STATE_NEUTRAL;
    uint16_t extendedFlow = std::abs(value);
    uint8_t standardFlow = 0;
    uint8_t DA = ui->destinationEcuAddressSpinBox->value();
    ISO_11783_Send_General_Purpose_Valve_Command(j1939, DA, standardFlow, FAIL_SAFE_MODE_BLOCKED, valveState, extendedFlow);

    /* Send to logging thread */
    uint16_t generalValveCommandExtendedFlow[GENERAL_VALVE_LENGTH] = {extendedFlow};
    emit signalSetGeneralValveCommandExtendedFlow(generalValveCommandExtendedFlow);

    /* Send event signal for transmitting the message via USB to STM32 PLC */
    emit signalSendCanBusMessageToSTM32PLC();
}

