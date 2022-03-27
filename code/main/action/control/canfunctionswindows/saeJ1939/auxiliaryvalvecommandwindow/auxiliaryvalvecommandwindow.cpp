#include "auxiliaryvalvecommandwindow.h"
#include "ui_auxiliaryvalvecommandwindow.h"

AuxiliaryValveCommandWindow::AuxiliaryValveCommandWindow(QWidget *parent, J1939 *j1939, MessageServiceThread *messageServiceThread, CallPeriodThread *callPeriodThread) :
    QWidget(parent),
    ui(new Ui::AuxiliaryValveCommandWindow),
    j1939(j1939),
    callPeriodThread(callPeriodThread)
{
    ui->setupUi(this);

    /* Send signals from this window to message service thread */
    connect(this, &AuxiliaryValveCommandWindow::signalSendCanBusMessageToSTM32PLC, messageServiceThread, &MessageServiceThread::slotSendCanBusMessageToSTM32PLC);

    /* Send auxiliary valve command signals to message service thread */
    connect(this, &AuxiliaryValveCommandWindow::signalSetAuxiliaryValveCommandStandardFlow, messageServiceThread, &MessageServiceThread::slotSetAuxiliaryValveCommandStandardFlow);


}

AuxiliaryValveCommandWindow::~AuxiliaryValveCommandWindow()
{
    delete ui;
}

void AuxiliaryValveCommandWindow::showEvent(QShowEvent *event)
{
    Q_UNUSED(event)

    /* Connect the thread so we can send signals to the thread to this window */
    connect(callPeriodThread, &CallPeriodThread::signalCallFunction, this, &AuxiliaryValveCommandWindow::slotSendValveCommandInSlowPeriods);

    /* Start the thread with a period time */
    connect(this, &AuxiliaryValveCommandWindow::signalSetCallPeriodThreadActive, callPeriodThread, &CallPeriodThread::slotSetCallPeriodThreadActive);
    emit signalSetCallPeriodThreadActive(true, 10);
}

void AuxiliaryValveCommandWindow::closeEvent(QCloseEvent *event)
{
    Q_UNUSED(event)

    /* Disconnect the thread so we can send signals to the thread to this window */
    disconnect(callPeriodThread, &CallPeriodThread::signalCallFunction, this, &AuxiliaryValveCommandWindow::slotSendValveCommandInSlowPeriods);

    /* Stop the thread with a period time */
    emit signalSetCallPeriodThreadActive(false, 10);
    disconnect(this, &AuxiliaryValveCommandWindow::signalSetCallPeriodThreadActive, callPeriodThread, &CallPeriodThread::slotSetCallPeriodThreadActive);
}

void AuxiliaryValveCommandWindow::slotSendValveCommandInSlowPeriods()
{
    /*
     * According to ISO 11783 standard for axuiliary valve command.
     * Each valve need to go into center if the valuve does not get any messages in a certain time called time out.
     */
    switch(index){
    case 0:
        if(ui->enableValve0CheckBox->isChecked())
            shapeAuxiliaryValveCommandStandardFlowMessage(ui->valve0VerticalSlider->value(), index);
        break;
    case 1:
        if(ui->enableValve1CheckBox->isChecked())
            shapeAuxiliaryValveCommandStandardFlowMessage(ui->valve1VerticalSlider->value(), index);
        break;
    case 2:
        if(ui->enableValve2CheckBox->isChecked())
            shapeAuxiliaryValveCommandStandardFlowMessage(ui->valve2VerticalSlider->value(), index);
        break;
    case 3:
        if(ui->enableValve3CheckBox->isChecked())
            shapeAuxiliaryValveCommandStandardFlowMessage(ui->valve3VerticalSlider->value(), index);
        break;
    case 4:
        if(ui->enableValve4CheckBox->isChecked())
            shapeAuxiliaryValveCommandStandardFlowMessage(ui->valve4VerticalSlider->value(), index);
        break;
    case 5:
        if(ui->enableValve5CheckBox->isChecked())
            shapeAuxiliaryValveCommandStandardFlowMessage(ui->valve5VerticalSlider->value(), index);
        break;
    case 6:
        if(ui->enableValve6CheckBox->isChecked())
            shapeAuxiliaryValveCommandStandardFlowMessage(ui->valve6VerticalSlider->value(), index);
        break;
    case 7:
        if(ui->enableValve7CheckBox->isChecked())
            shapeAuxiliaryValveCommandStandardFlowMessage(ui->valve7VerticalSlider->value(), index);
        break;
    case 8:
        if(ui->enableValve8CheckBox->isChecked())
            shapeAuxiliaryValveCommandStandardFlowMessage(ui->valve8VerticalSlider->value(), index);
        break;
    case 9:
        if(ui->enableValve9CheckBox->isChecked())
            shapeAuxiliaryValveCommandStandardFlowMessage(ui->valve9VerticalSlider->value(), index);
        break;
    case 10:
        if(ui->enableValve10CheckBox->isChecked())
            shapeAuxiliaryValveCommandStandardFlowMessage(ui->valve10VerticalSlider->value(), index);
        break;
    case 11:
        if(ui->enableValve11CheckBox->isChecked())
            shapeAuxiliaryValveCommandStandardFlowMessage(ui->valve11VerticalSlider->value(), index);
        break;
    case 12:
        if(ui->enableValve12CheckBox->isChecked())
            shapeAuxiliaryValveCommandStandardFlowMessage(ui->valve12VerticalSlider->value(), index);
        break;
    case 13:
        if(ui->enableValve13CheckBox->isChecked())
            shapeAuxiliaryValveCommandStandardFlowMessage(ui->valve13VerticalSlider->value(), index);
        break;
    case 14:
        if(ui->enableValve14CheckBox->isChecked())
            shapeAuxiliaryValveCommandStandardFlowMessage(ui->valve14VerticalSlider->value(), index);
        break;
    case 15:
        if(ui->enableValve15CheckBox->isChecked())
            shapeAuxiliaryValveCommandStandardFlowMessage(ui->valve15VerticalSlider->value(), index);
        break;
    }

    /* Increase */
    if(index >= 15)
        index = 0;
    else
        index++;
}


void AuxiliaryValveCommandWindow::shapeAuxiliaryValveCommandStandardFlowMessage(int value, int valveNumber)
{
    /* Send the SAE J1939 message */
    uint8_t valveState;
    if(value > 1)
        valveState = VALVE_STATE_EXTEND;
    else if(value < -1)
        valveState = VALVE_STATE_RETRACT;
    else
        valveState = VALVE_STATE_NEUTRAL;

    uint8_t standardFlow = std::abs(value);
    ISO_11783_Send_Auxiliary_Valve_Command(j1939, valveNumber, standardFlow, FAIL_SAFE_MODE_BLOCKED, valveState);

    /* Send it to logging thread */
    auxiliaryValveCommandStandardFlow[valveNumber] = standardFlow;
    emit signalSetAuxiliaryValveCommandStandardFlow(auxiliaryValveCommandStandardFlow);

    /* Send event signal for transmitting the message via USB to STM32 PLC */
    emit signalSendCanBusMessageToSTM32PLC();
}

void AuxiliaryValveCommandWindow::on_valve0VerticalSlider_valueChanged(int value)
{
    /* This is just a value change listener so we can send values in continuous time - else the valve will be very jumpy */
    shapeAuxiliaryValveCommandStandardFlowMessage(value, 0);
}


void AuxiliaryValveCommandWindow::on_valve1VerticalSlider_valueChanged(int value)
{
    shapeAuxiliaryValveCommandStandardFlowMessage(value, 1);
}


void AuxiliaryValveCommandWindow::on_valve2VerticalSlider_valueChanged(int value)
{
    shapeAuxiliaryValveCommandStandardFlowMessage(value, 2);
}


void AuxiliaryValveCommandWindow::on_valve3VerticalSlider_valueChanged(int value)
{
    shapeAuxiliaryValveCommandStandardFlowMessage(value, 3);
}


void AuxiliaryValveCommandWindow::on_valve4VerticalSlider_valueChanged(int value)
{
    shapeAuxiliaryValveCommandStandardFlowMessage(value, 4);
}


void AuxiliaryValveCommandWindow::on_valve5VerticalSlider_valueChanged(int value)
{
    shapeAuxiliaryValveCommandStandardFlowMessage(value, 5);
}


void AuxiliaryValveCommandWindow::on_valve6VerticalSlider_valueChanged(int value)
{
    shapeAuxiliaryValveCommandStandardFlowMessage(value, 6);
}


void AuxiliaryValveCommandWindow::on_valve7VerticalSlider_valueChanged(int value)
{
    shapeAuxiliaryValveCommandStandardFlowMessage(value, 7);
}


void AuxiliaryValveCommandWindow::on_valve8VerticalSlider_valueChanged(int value)
{
    shapeAuxiliaryValveCommandStandardFlowMessage(value, 8);
}


void AuxiliaryValveCommandWindow::on_valve9VerticalSlider_valueChanged(int value)
{
    shapeAuxiliaryValveCommandStandardFlowMessage(value, 9);
}


void AuxiliaryValveCommandWindow::on_valve10VerticalSlider_valueChanged(int value)
{
    shapeAuxiliaryValveCommandStandardFlowMessage(value, 10);
}


void AuxiliaryValveCommandWindow::on_valve11VerticalSlider_valueChanged(int value)
{
    shapeAuxiliaryValveCommandStandardFlowMessage(value, 11);
}


void AuxiliaryValveCommandWindow::on_valve12VerticalSlider_valueChanged(int value)
{
    shapeAuxiliaryValveCommandStandardFlowMessage(value, 12);
}


void AuxiliaryValveCommandWindow::on_valve13VerticalSlider_valueChanged(int value)
{
    shapeAuxiliaryValveCommandStandardFlowMessage(value, 13);
}


void AuxiliaryValveCommandWindow::on_valve14VerticalSlider_valueChanged(int value)
{
    shapeAuxiliaryValveCommandStandardFlowMessage(value, 14);
}


void AuxiliaryValveCommandWindow::on_valve15VerticalSlider_valueChanged(int value)
{
    shapeAuxiliaryValveCommandStandardFlowMessage(value, 15);
}

