#include "stm32window.h"
#include "ui_stm32window.h"
#include <QMessageBox>

/* Analog input */
#define SDADC_1_PERIPHERAL "1"
#define SDADC_2_PERIPHERAL "2"
#define SDADC_3_PERIPHERAL "3"
#define SDADC_CONF_INDEX_0 "Index 0"
#define SDADC_CONF_INDEX_1 "Index 1"
#define SDADC_CONF_INDEX_2 "Index 2"
#define SDADC_GAIN_0_5 "0.5x"
#define SDADC_GAIN_1 "1x"
#define SDADC_GAIN_2 "2x"
#define SDADC_GAIN_4 "4x"
#define SDADC_GAIN_8 "8x"
#define SDADC_GAIN_16 "16x"
#define SDADC_GAIN_32 "32x"
#define PWM_PERIPHERAL_0_3 "0-3"
#define PWM_PERIPHERAL_4_7 "4-7"
#define SDADC_GAIN_0_5_BINARY 0b111
#define SDADC_GAIN_1_BINARY 0b0
#define SDADC_GAIN_2_BINARY 0b1
#define SDADC_GAIN_4_BINARY 0b10
#define SDADC_GAIN_8_BINARY 0b11
#define SDADC_GAIN_16_BINARY 0b100
#define SDADC_GAIN_32_BINARY 0b101

/* Alarm */
#define Monday "Monday"
#define Tuesday "Tuesday"
#define Wednesday "Wednesday"
#define Thursday "Thursday"
#define Friday "Friday"
#define Saturday "Saturday"
#define Sunday "Sunday"


STM32Window::STM32Window(QWidget *parent, MessageServiceThread *messageServiceThread) :
    QWidget(parent),
    ui(new Ui::STM32Window),
    messageServiceThread(messageServiceThread)
{
    ui->setupUi(this);

    /* Send signals from STM32 window to message service thread */
    connect(this, &STM32Window::signalSetAnalogInputGainToSTM32PLC, messageServiceThread, &MessageServiceThread::slotSetAnalogInputGainToSTM32PLC);
    connect(this, &STM32Window::signalSetPWMPrescalerToSTM32PLC, messageServiceThread, &MessageServiceThread::slotSetPWMPrescalerToSTM32PLC);
    connect(this, &STM32Window::signalSetDateTimeToSTM32PLC, messageServiceThread, &MessageServiceThread::slotSetDateTimeToSTM32PLC);
    connect(this, &STM32Window::signalSetAlarmAToSTM32PLC, messageServiceThread, &MessageServiceThread::slotSetAlarmAToSTM32PLC);
    connect(this, &STM32Window::signalSetAlarmBToSTM32PLC, messageServiceThread, &MessageServiceThread::slotSetAlarmBToSTM32PLC);
    connect(this, &STM32Window::signalAskAnalogInputGainsFromSTM32, messageServiceThread, &MessageServiceThread::slotAskAnalogInputGainsFromSTM32);
    connect(this, &STM32Window::signalAskPWMPrescalersFromSTM32PLC, messageServiceThread, &MessageServiceThread::slotAskPWMPrescalersFromSTM32);
    connect(this, &STM32Window::signalAskDateTimeFromSTM32PLC, messageServiceThread, &MessageServiceThread::slotAskDateTimeFromSTM32PLC);
    connect(this, &STM32Window::signalAskAlarmAFromSTM32PLC, messageServiceThread, &MessageServiceThread::slotAskAlarmAFromSTM32PLC);
    connect(this, &STM32Window::signalAskAlarmBFromSTM32PLC, messageServiceThread, &MessageServiceThread::slotAskAlarmBFromSTM32PLC);

    /* Send signals from message service thread to STM32 window */
    connect(messageServiceThread, &MessageServiceThread::signalSendAnalogGains, this, &STM32Window::slotSendAnalogGains);
    connect(messageServiceThread, &MessageServiceThread::signalSendPWMPrescalers, this, &STM32Window::slotSendPWMPrescalers);
    connect(messageServiceThread, &MessageServiceThread::signalSendDateTime, this, &STM32Window::slotSendDateTime);
    connect(messageServiceThread, &MessageServiceThread::signalSendAlarmA, this, &STM32Window::slotSendAlarmA);
    connect(messageServiceThread, &MessageServiceThread::signalSendAlarmB, this, &STM32Window::slotSendAlarmB);


    /* Analog input gain */
    ui->sdadcPeripheralComboBox->addItem(SDADC_1_PERIPHERAL);
    ui->sdadcPeripheralComboBox->addItem(SDADC_2_PERIPHERAL);
    ui->sdadcPeripheralComboBox->addItem(SDADC_3_PERIPHERAL);
    ui->sdadcConfigurationIndexComboBox->addItem(SDADC_CONF_INDEX_0);
    ui->sdadcConfigurationIndexComboBox->addItem(SDADC_CONF_INDEX_1);
    ui->sdadcConfigurationIndexComboBox->addItem(SDADC_CONF_INDEX_2);
    ui->sdadcGainComboBox->addItem(SDADC_GAIN_0_5);
    ui->sdadcGainComboBox->addItem(SDADC_GAIN_1);
    ui->sdadcGainComboBox->addItem(SDADC_GAIN_2);
    ui->sdadcGainComboBox->addItem(SDADC_GAIN_4);
    ui->sdadcGainComboBox->addItem(SDADC_GAIN_8);
    ui->sdadcGainComboBox->addItem(SDADC_GAIN_16);
    ui->sdadcGainComboBox->addItem(SDADC_GAIN_32);

    /* PWM prescaler */
    ui->pwmPeripheralComboBox->addItem(PWM_PERIPHERAL_0_3);
    ui->pwmPeripheralComboBox->addItem(PWM_PERIPHERAL_4_7);

    /* Alarm B */
    ui->weekDayComboBox->addItems({Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday});
}

STM32Window::~STM32Window()
{
    delete ui;
}

void STM32Window::on_sendPrescalerPushButton_clicked()
{
    /* Send prescaler */
    int transmittedBytes = 0;
    uint16_t prescaler = ui->pwmPrescalerSpinBox->value();
    if(ui->pwmPeripheralComboBox->currentText() == PWM_PERIPHERAL_0_3)
        transmittedBytes = emit signalSetPWMPrescalerToSTM32PLC(0, prescaler);
    if(ui->pwmPeripheralComboBox->currentText() == PWM_PERIPHERAL_4_7)
        transmittedBytes = emit signalSetPWMPrescalerToSTM32PLC(1, prescaler);
    if(transmittedBytes > 0)
        QMessageBox::information(this, "Transmitted", "Prescaler transmitted successfully");
    else
        QMessageBox::warning(this, "Failed", "Prescaler not transmitted");
}


void STM32Window::on_receivePrescalersPushButton_clicked()
{
    int transmittedBytes = emit signalAskPWMPrescalersFromSTM32PLC();
    if(transmittedBytes < 0)
        QMessageBox::warning(this, "Failed", "Prescaler not received");
}


void STM32Window::on_sendInputGainPushButton_clicked()
{
    /* Peripheral */
    uint8_t sdadc = 0;
    if(ui->sdadcPeripheralComboBox->currentText() == SDADC_1_PERIPHERAL)
        sdadc = 1;
    else if(ui->sdadcPeripheralComboBox->currentText() == SDADC_2_PERIPHERAL)
        sdadc = 2;
    else if(ui->sdadcPeripheralComboBox->currentText() == SDADC_3_PERIPHERAL)
        sdadc = 3;

    /* Index */
    uint8_t configurationIndex = 0;
    if(ui->sdadcConfigurationIndexComboBox->currentText() == SDADC_CONF_INDEX_0)
        configurationIndex = 0;
    else if(ui->sdadcConfigurationIndexComboBox->currentText() == SDADC_CONF_INDEX_1)
        configurationIndex = 1;
    else if(ui->sdadcConfigurationIndexComboBox->currentText() == SDADC_CONF_INDEX_2)
        configurationIndex = 2;

    /* Gain */
    uint8_t gain = 0;
    if(ui->sdadcGainComboBox->currentText() == SDADC_GAIN_0_5)
        gain = SDADC_GAIN_0_5_BINARY;
    else if(ui->sdadcGainComboBox->currentText() == SDADC_GAIN_1)
        gain = SDADC_GAIN_1_BINARY;
    else if(ui->sdadcGainComboBox->currentText() == SDADC_GAIN_2)
        gain = SDADC_GAIN_2_BINARY;
    else if(ui->sdadcGainComboBox->currentText() == SDADC_GAIN_4)
        gain = SDADC_GAIN_4_BINARY;
    else if(ui->sdadcGainComboBox->currentText() == SDADC_GAIN_8)
        gain = SDADC_GAIN_8_BINARY;
    else if(ui->sdadcGainComboBox->currentText() == SDADC_GAIN_16)
        gain = SDADC_GAIN_16_BINARY;
    else if(ui->sdadcGainComboBox->currentText() == SDADC_GAIN_32)
        gain = SDADC_GAIN_32_BINARY;

    /* Transmit */
    int transmittedBytes = emit signalSetAnalogInputGainToSTM32PLC(sdadc, configurationIndex, gain);
    if(transmittedBytes > 0)
        QMessageBox::information(this, "Transmitted", "Gain transmitted successfully");
    else
        QMessageBox::warning(this, "Failed", "Gain not transmitted");
}


void STM32Window::on_receiveInputGainsPushButton_clicked()
{
    /* Peripheral */
    uint8_t sdadc = 0;
    if(ui->sdadcPeripheralComboBox->currentText() == SDADC_1_PERIPHERAL)
        sdadc = 1;
    else if(ui->sdadcPeripheralComboBox->currentText() == SDADC_2_PERIPHERAL)
        sdadc = 2;
    else if(ui->sdadcPeripheralComboBox->currentText() == SDADC_3_PERIPHERAL)
        sdadc = 3;

    int transmittedBytes = emit signalAskAnalogInputGainsFromSTM32(sdadc);
    if(transmittedBytes < 0)
        QMessageBox::warning(this, "Failed", "Gains not received");

}

void STM32Window::slotSendAnalogGains(uint8_t analogGain[]){
    ui->sdadcGainConfigurationIndex0LineEdit->setText(translateBinaryGainToTextGain(analogGain[0]));
    ui->sdadcGainConfigurationIndex1LineEdit->setText(translateBinaryGainToTextGain(analogGain[1]));
    ui->sdadcGainConfigurationIndex2LineEdit->setText(translateBinaryGainToTextGain(analogGain[2]));
    QMessageBox::information(this, "Received", "Received gains successfully");
}

void STM32Window::slotSendPWMPrescalers(uint16_t pwmPrescaler[]){
    ui->pwm_0_3_prescalerSpinBox->setValue(pwmPrescaler[0]);
    ui->pwm_4_7_prescalerSpinBox->setValue(pwmPrescaler[1]);
    QMessageBox::information(this, "Received", "Received prescalers successfully");
}

void STM32Window::slotSendDateTime(uint8_t year, uint8_t month, uint8_t date, uint8_t weekDay, uint8_t hour, uint8_t minute){
    Q_UNUSED(weekDay)
    QTime qTime(hour, minute);
    QDate qDate(year + 2000, month, date);
    QDateTime dateTime(qDate, qTime);
    ui->dateTimeEdit->setDateTime(dateTime);
    QMessageBox::information(this, "Received", "Received date time successfully");
}

void STM32Window::slotSendAlarmA(uint8_t date, uint8_t hour, uint8_t minute, uint8_t enabled, uint8_t activated){
    ui->dateAlarmASpinBox->setValue(date);
    QTime qTime(hour, minute);
    ui->alarmATimeEdit->setTime(qTime);
    ui->alarmAEnabledCheckBox->setChecked(enabled);
    ui->alarmAActivatedCheckBox->setChecked(activated);
    QMessageBox::information(this, "Received", "Received alarm A successfully");
    if(activated)
        QMessageBox::warning(this, "Activated", "Alarm A: PWM4 to PWM7 is high. Deactivate the alarm by disabling it.");
}

void STM32Window::slotSendAlarmB(uint8_t weekDay, uint8_t hour, uint8_t minute, uint8_t enabled, uint8_t activated){
    ui->weekDayComboBox->setCurrentIndex(weekDay - 1);
    QTime qTime(hour, minute);
    ui->alarmBTimeEdit->setTime(qTime);
    ui->alarmBEnabledCheckBox->setChecked(enabled);
    ui->alarmBActivatedCheckBox->setChecked(activated);
    QMessageBox::information(this, "Received", "Received alarm B successfully");
    if(activated)
        QMessageBox::warning(this, "Activated", "Alarm B: PWM0 to PWM3 is high. Deactivate the alarm by disabling it.");
}

QString STM32Window::translateBinaryGainToTextGain(uint8_t binaryGain){
    if(SDADC_GAIN_0_5_BINARY == binaryGain)
        return SDADC_GAIN_0_5;
    else if(SDADC_GAIN_1_BINARY == binaryGain)
        return SDADC_GAIN_1;
    else if(SDADC_GAIN_2_BINARY == binaryGain)
        return SDADC_GAIN_2;
    else if(SDADC_GAIN_4_BINARY == binaryGain)
        return SDADC_GAIN_4;
    else if(SDADC_GAIN_8_BINARY == binaryGain)
        return SDADC_GAIN_8;
    else if(SDADC_GAIN_16_BINARY == binaryGain)
        return SDADC_GAIN_16;
    else if(SDADC_GAIN_32_BINARY == binaryGain)
        return SDADC_GAIN_32;
    else
        return "No gain found";
}

void STM32Window::on_receiveDateTimePushButton_clicked()
{
    int transmittedBytes = emit signalAskDateTimeFromSTM32PLC();
    if(transmittedBytes < 0)
        QMessageBox::warning(this, "Failed", "Date time not received");
}


void STM32Window::on_sendDateTimePushButton_clicked()
{
    /* Transmit */
    uint8_t year = ui->dateTimeEdit->date().year() - 2000;
    uint8_t month = ui->dateTimeEdit->date().month();
    uint8_t date = ui->dateTimeEdit->date().day();
    uint8_t weekDay = ui->dateTimeEdit->date().dayOfWeek();
    uint8_t hour = ui->dateTimeEdit->time().hour();
    uint8_t minute = ui->dateTimeEdit->time().minute();
    int transmittedBytes = emit signalSetDateTimeToSTM32PLC(year, month, date, weekDay, hour, minute);
    if(transmittedBytes > 0)
        QMessageBox::information(this, "Transmitted", "Date time transmitted successfully");
    else
        QMessageBox::warning(this, "Failed", "Date time not transmitted");
}


void STM32Window::on_receiveAlarmAPushButton_clicked()
{
    int transmittedBytes = emit signalAskAlarmAFromSTM32PLC();
    if(transmittedBytes < 0)
        QMessageBox::warning(this, "Failed", "Alarm A not received");
}


void STM32Window::on_sendAlarmAPushButton_clicked()
{
    /* Transmit */
    uint8_t hour = ui->alarmATimeEdit->time().hour();
    uint8_t minute = ui->alarmATimeEdit->time().minute();
    uint8_t date = ui->dateAlarmASpinBox->value();
    uint8_t enable = ui->alarmAEnabledCheckBox->isChecked();
    int transmittedBytes = emit signalSetAlarmAToSTM32PLC(date, hour, minute, enable);
    if(transmittedBytes > 0)
        QMessageBox::information(this, "Transmitted", "Alarm A transmitted successfully");
    else
        QMessageBox::warning(this, "Failed", "Alarm A not transmitted");
}


void STM32Window::on_receiveAlarmBPushButton_clicked()
{
    int transmittedBytes = emit signalAskAlarmBFromSTM32PLC();
    if(transmittedBytes < 0)
        QMessageBox::warning(this, "Failed", "Alarm B not received");
}


void STM32Window::on_sendAlarmBPushButton_clicked()
{
    /* Transmit */
    uint8_t hour = ui->alarmBTimeEdit->time().hour();
    uint8_t minute = ui->alarmBTimeEdit->time().minute();
    uint8_t weekDay = ui->weekDayComboBox->currentIndex() + 1;
    uint8_t enable = ui->alarmBEnabledCheckBox->isChecked();
    int transmittedBytes = emit signalSetAlarmBToSTM32PLC(weekDay, hour, minute, enable);
    if(transmittedBytes > 0)
        QMessageBox::information(this, "Transmitted", "Alarm B transmitted successfully");
    else
        QMessageBox::warning(this, "Failed", "Alarm B not transmitted");
}
