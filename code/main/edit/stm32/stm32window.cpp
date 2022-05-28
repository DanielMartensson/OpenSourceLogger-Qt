#include "stm32window.h"
#include "ui_stm32window.h"
#include <QMessageBox>

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


STM32Window::STM32Window(QWidget *parent, MessageServiceThread *messageServiceThread) :
    QWidget(parent),
    ui(new Ui::STM32Window),
    messageServiceThread(messageServiceThread)
{
    ui->setupUi(this);

    /* Send signals from STM32 window to message service thread */
    connect(this, &STM32Window::signalSetAnalogInputGainToSTM32PLC, messageServiceThread, &MessageServiceThread::slotSetAnalogInputGainToSTM32PLC);
    connect(this, &STM32Window::signalSetPWMPrescalerToSTM32PLC, messageServiceThread, &MessageServiceThread::slotSetPWMPrescalerToSTM32PLC);
    connect(this, &STM32Window::signalAskAnalogInputGainsFromSTM32, messageServiceThread, &MessageServiceThread::slotAskAnalogInputGainsFromSTM32);
    connect(this, &STM32Window::signalAskPWMPrescalersFromSTM32PLC, messageServiceThread, &MessageServiceThread::slotAskPWMPrescalersFromSTM32);

    /* Send signals from message service thread to STM32 window */
    connect(messageServiceThread, &MessageServiceThread::signalSendAnalogGains, this, &STM32Window::slotSendAnalogGains);
    connect(messageServiceThread, &MessageServiceThread::signalSendPWMPrescalers, this, &STM32Window::slotSendPWMPrescalers);


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
