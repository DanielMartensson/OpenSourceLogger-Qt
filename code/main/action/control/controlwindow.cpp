#include "controlwindow.h"
#include "ui_controlwindow.h"

ControlWindow::ControlWindow(QWidget *parent, J1939 *j1939, MessageServiceThread *messageServiceThread, LoggingThread *loggingThread, CallPeriodThread *callPeriodThread) :
    QWidget(parent),
    ui(new Ui::ControlWindow),
    messageServiceThread(messageServiceThread),
    loggingThread(loggingThread)
{
    ui->setupUi(this);

    /* Create windows for SAE J1939 */
    componentIdentificationWindow = new ComponentIdentificationWindow(nullptr, j1939, messageServiceThread);
    softwareIdentificationWindow = new SoftwareIdentificationWindow(nullptr, j1939, messageServiceThread);
    eCUidentificationWindow = new ECUidentificationWindow(nullptr, j1939, messageServiceThread);
    saeJ1939NameWindow = new SaeJ1939NameWindow(nullptr, j1939, messageServiceThread);
    auxiliaryValveCommandWindow = new AuxiliaryValveCommandWindow(nullptr, j1939, messageServiceThread, callPeriodThread);
    generalValveCommandWindow = new GeneralValveCommandWindow(nullptr, j1939, messageServiceThread, callPeriodThread);

    /* Create Windows for CAN */
    canTerminalWindow = new CANTerminalWindow(nullptr, messageServiceThread);

    /* Set the protocol combo box */
    ui->canProtocolComboBox->addItems({CAN_FUNCTION, SAE_J1939_FUNCTION, CANOPEN_FUNCTION});

    /* Create the CAN names as default */
    setCANFunctionNames();

    /* Send signal from control window to measurement service thread */
    connect(this, &ControlWindow::signalSetPWMSignal, messageServiceThread, &MessageServiceThread::slotSetPWMSignal);
    connect(this, &ControlWindow::signalSetAnalogSingleOutputSignal, messageServiceThread, &MessageServiceThread::slotSetAnalogSingleOutputSignal);

    /* Send signal from control window to logging thread */
    connect(this, &ControlWindow::signalSetThreadActive, loggingThread, &LoggingThread::slotSetLoggingThreadActive);

}

ControlWindow::~ControlWindow()
{
    delete ui;
}

void ControlWindow::resizeEvent(QResizeEvent *event){
    Q_UNUSED(event)

    /* Get height of the grid for QWidget */
    int h = ui->functionQWidget->height();
    int w = ui->functionQWidget->width();

    componentIdentificationWindow->resize(w, h);
    eCUidentificationWindow->resize(w, h);
    softwareIdentificationWindow->resize(w, h);
    saeJ1939NameWindow->resize(w, h);
    auxiliaryValveCommandWindow->resize(w, h);
    generalValveCommandWindow->resize(w, h);

    /* CAN Windows */
    canTerminalWindow->resize(w, h);
}

void ControlWindow::on_stopLoggingDataPushButton_clicked()
{
    emit signalSetThreadActive(false, ui->sampleTimeSpinBox->value(), ui->showSamplesSpinBox->value());
    ui->stopLoggingDataPushButton->setEnabled(false);
    ui->startLoggingDataPushButton->setEnabled(true);
}


void ControlWindow::on_startLoggingDataPushButton_clicked()
{
    emit signalSetThreadActive(true, ui->sampleTimeSpinBox->value(), ui->showSamplesSpinBox->value());
    emit signalSetAutoScaleAndYAxisLimits(ui->autoYAxisScaleCheckBox->isChecked(), ui->minYAxisDoubleSpinBox->value(), ui->maxYAxisDoubleSpinBox->value());
    ui->stopLoggingDataPushButton->setEnabled(true);
    ui->startLoggingDataPushButton->setEnabled(false);
}


void ControlWindow::on_functionComboBox_currentTextChanged(const QString &arg1)
{

    /* SAE J1939 windows */
    componentIdentificationWindow->close();
    eCUidentificationWindow->close();
    softwareIdentificationWindow->close();
    saeJ1939NameWindow->close();
    auxiliaryValveCommandWindow->close();
    generalValveCommandWindow->close();

    /* CAN Windows */
    canTerminalWindow->close();

    /* SAE J1939 windows */
    if(SAE_J1939_COMPONENT_IDENTIFICATION == arg1){
        componentIdentificationWindow->setParent(ui->functionQWidget);
        componentIdentificationWindow->show();
    }else if(SAE_J1939_ECU_IDENTIFICATION == arg1){
        eCUidentificationWindow->setParent(ui->functionQWidget);
        eCUidentificationWindow->show();
    }else if(SAE_J1939_SOFTWARE_IDENTIFICATION == arg1){
        softwareIdentificationWindow->setParent(ui->functionQWidget);
        softwareIdentificationWindow->show();
    }else if(SAE_J1939_NAME == arg1){
        saeJ1939NameWindow->setParent(ui->functionQWidget);
        saeJ1939NameWindow->show();
    }else if(SAE_J1939_AUXILIARY_VALVE_COMMAND == arg1){
        auxiliaryValveCommandWindow->setParent(ui->functionQWidget);
        auxiliaryValveCommandWindow->show();
    }else if(SAE_J1939_GERNAL_VALVE_COMMAND == arg1){
        generalValveCommandWindow->setParent(ui->functionQWidget);
        generalValveCommandWindow->show();
    }

    /* CAN windows */
    else if(CAN_TERMINAL == arg1){
        canTerminalWindow->setParent(ui->functionQWidget);
        canTerminalWindow->show();

    }
}


void ControlWindow::on_pwm0VerticalSlider_valueChanged(int value)
{
    emit signalSetPWMSignal(0, value);
}


void ControlWindow::on_pwm1VerticalSlider_valueChanged(int value)
{
    emit signalSetPWMSignal(1, value);
}


void ControlWindow::on_pwm2VerticalSlider_valueChanged(int value)
{
    emit signalSetPWMSignal(2, value);
}


void ControlWindow::on_pwm3VerticalSlider_valueChanged(int value)
{
    emit signalSetPWMSignal(3, value);
}


void ControlWindow::on_pwm4VerticalSlider_valueChanged(int value)
{
    emit signalSetPWMSignal(4, value);
}


void ControlWindow::on_pwm5VerticalSlider_valueChanged(int value)
{
    emit signalSetPWMSignal(5, value);
}


void ControlWindow::on_pwm6VerticalSlider_valueChanged(int value)
{
    emit signalSetPWMSignal(6, value);
}


void ControlWindow::on_pwm7VerticalSlider_valueChanged(int value)
{
    emit signalSetPWMSignal(7, value);
}


void ControlWindow::on_analogOutput0VerticalSlider_valueChanged(int value)
{
    emit signalSetAnalogSingleOutputSignal(0, value);
}


void ControlWindow::on_analogOutput1VerticalSlider_valueChanged(int value)
{
    emit signalSetAnalogSingleOutputSignal(1, value);
}


void ControlWindow::on_analogOutput2VerticalSlider_valueChanged(int value)
{
    emit signalSetAnalogSingleOutputSignal(2, value);
}


void ControlWindow::on_canProtocolComboBox_currentTextChanged(const QString &arg1)
{
    ui->functionComboBox->clear();
    if(SAE_J1939_FUNCTION == arg1){
        setSAEJ1939FunctionNames();
    }else if(CANOPEN_FUNCTION == arg1){
        ;
    }else if(CAN_FUNCTION == arg1){
        setCANFunctionNames();
    }
}

void ControlWindow::setSAEJ1939FunctionNames(){
    ui->functionComboBox->clear();
    ui->functionComboBox->addItems({SAE_J1939_COMPONENT_IDENTIFICATION, SAE_J1939_ECU_IDENTIFICATION, SAE_J1939_SOFTWARE_IDENTIFICATION, SAE_J1939_NAME, SAE_J1939_AUXILIARY_VALVE_COMMAND, SAE_J1939_GERNAL_VALVE_COMMAND});
}

void ControlWindow::setCANFunctionNames(){
    ui->functionComboBox->clear();
    ui->functionComboBox->addItems({CAN_TERMINAL});
}

void ControlWindow::on_autoYAxisScaleCheckBox_stateChanged(int arg1)
{
    Q_UNUSED(arg1)
    /* Disable the min and max for Y axis */
    if(ui->autoYAxisScaleCheckBox->isChecked()){
        ui->maxYAxisDoubleSpinBox->setEnabled(false);
        ui->minYAxisDoubleSpinBox->setEnabled(false);
    }else{
        ui->maxYAxisDoubleSpinBox->setEnabled(true);
        ui->minYAxisDoubleSpinBox->setEnabled(true);
    }
}

