#include "messageservicethread.h"
#include "code/tools/opensaej1939/Open_SAE_J1939/Open_SAE_J1939.h"
#include <QMessageBox>

/* For the CAN read callback function */
static uint8_t TX_CAN_BUS_MESSAGE[14] = {0};
static uint8_t RX_CAN_BUS_MESSAGE[14] = {0};

/* Message types for STM32 PLC */
typedef enum{
    SEND_CAN_BUS_MESSAGE_TYPE,
    READ_CAN_BUS_MESSAGE_TYPE,
    SEND_MEASUREMENTS_MESSAGE_TYPE,
    READ_CONTROL_SIGNALS_MESSAGE_TYPE,
    READ_SET_ANALOG_INPUT_GAIN_MESSAGE_TYPE,
    READ_SET_PWM_PRESCALER_MESSAGE_TYPE,
    SEND_BACK_PWM_PRESCALERS_MESSAGE_TYPE,
    SEND_BACK_ANALOG_GAINS_MESSAGE_TYPE,
    READ_SET_DATE_TIME_MESSAGE_TYPE,
    SEND_BACK_DATE_TIME_MESSAGE_TYPE,
    READ_SET_ALARM_A_MESSAGE_TYPE,
    SEND_BACK_ALARM_A_MESSAGE_TYPE,
    READ_SET_ALARM_B_MESSAGE_TYPE,
    SEND_BACK_ALARM_B_MESSAGE_TYPE
}MESSAGE_TYPES;

/* SAE J1939 callback function for sending a message */
void Callback_Function_Send(uint32_t ID, uint8_t DLC, uint8_t data[]){
    TX_CAN_BUS_MESSAGE[0] = CAN_ID_EXT;
    TX_CAN_BUS_MESSAGE[1] = ID >> 24;
    TX_CAN_BUS_MESSAGE[2] = ID >> 16;
    TX_CAN_BUS_MESSAGE[3] = ID >> 8;
    TX_CAN_BUS_MESSAGE[4] = ID;
    TX_CAN_BUS_MESSAGE[5] = DLC;
    for(uint8_t i = 0; i < DLC; i++)
        TX_CAN_BUS_MESSAGE[6+i] = data[i];
};


/* SAE J1939 callback function for reading a message */
void Callback_Function_Read(uint32_t *ID, uint8_t data[], bool *is_new_message){
    /* Check if it's a message for SAE J1939 */
    if(RX_CAN_BUS_MESSAGE[0] == CAN_ID_STD){
        *is_new_message = false;
    }else{
        *ID = (RX_CAN_BUS_MESSAGE[1] << 24) | (RX_CAN_BUS_MESSAGE[2] << 16) | (RX_CAN_BUS_MESSAGE[3] << 8) | RX_CAN_BUS_MESSAGE[4];
        uint8_t DLC = RX_CAN_BUS_MESSAGE[5];
        for(int i = 0; i < DLC; i++)
            data[i] = RX_CAN_BUS_MESSAGE[6+i];
        *is_new_message = true;
    }
};


MessageServiceThread::MessageServiceThread(J1939 *j1939, USB *usb) : j1939(j1939), usb(usb)
{
    /* Send signal from USB to message service thread */
    connect(usb, &USB::signalReadUSBData, this, &MessageServiceThread::slotReadUSBData);

    /* Sett callback functions */
    CAN_Set_Callback_Functions(Callback_Function_Send, Callback_Function_Read);

    /* Connect Message Service Thread to USB */
    connect(this, &MessageServiceThread::signalTransmitUSBData, usb, &USB::slotTransmitUSBData);
}


void MessageServiceThread::run(){
    int counter = 0;
    const int counterLimit = 1000;
    while(true){
        /* A wait statement */
        while(!threadActive){
            msleep(1000);
        }

        /* Send control signals if it not has been done - We are excepting to recieve measurements back */
        if(!hasSentControlSignals || counter > counterLimit){
            sendControlSignalsToSTM32PLC();
            counter = 0;
        }else{
            counter++;
        }

        /* Sleep 1 ms */
        msleep(1);
    }
}


void MessageServiceThread::slotSetPWMSignal(int index, uint16_t value){
    pwmControl[index] = value;
}


void MessageServiceThread::slotSetAnalogSingleOutputSignal(int index, uint16_t value){
    analogSingleOutput[index] = value;
}


void MessageServiceThread::slotReadUSBData(uint8_t data[], uint32_t length){
    /* Check what type of data */
    uint32_t byteIndex = 0;
    while(byteIndex < length){
        uint8_t messageType = data[byteIndex++];
        switch(messageType){
        case SEND_BACK_ANALOG_GAINS_MESSAGE_TYPE:
            byteIndex = readAnalogGainsFromSTM32PLC(data, byteIndex);
            break;
        case SEND_BACK_PWM_PRESCALERS_MESSAGE_TYPE:
            byteIndex = readPWMPrescalersFromSTM32PLC(data, byteIndex);
            break;
        case SEND_MEASUREMENTS_MESSAGE_TYPE:
            byteIndex = readMeasurementsFromSTM32PLC(data, byteIndex);
            break;
        case SEND_CAN_BUS_MESSAGE_TYPE:
            byteIndex = readCanBusMessageFromSTM32PLC(data, byteIndex);
            break;
        case SEND_BACK_DATE_TIME_MESSAGE_TYPE:
            byteIndex = readDateTimeFromSTM32PLC(data, byteIndex);
            break;
        case SEND_BACK_ALARM_A_MESSAGE_TYPE:
            byteIndex = readAlarmAFromSTM32PLC(data, byteIndex);
            break;
        case SEND_BACK_ALARM_B_MESSAGE_TYPE:
            byteIndex = readAlarmBFromSTM32PLC(data, byteIndex);
            break;
        default:
            QMessageBox::warning(nullptr, "USB error in messageservicethread.cpp file", "Missing data in USB communication - Sample time too fast or wrong data sent");
            byteIndex = length;
            slotSetThreadActive(false);
            break;
        }
    }
}


void MessageServiceThread::slotSetThreadActive(bool active){
    threadActive = active;
    hasSentControlSignals = false;
}


int MessageServiceThread::slotSetAnalogInputGainToSTM32PLC(uint8_t sdadc, uint8_t configurationIndex, uint8_t gain){
    QByteArray usbDataRaw;
    usbDataRaw.append(READ_SET_ANALOG_INPUT_GAIN_MESSAGE_TYPE);
    usbDataRaw.append(sdadc);
    usbDataRaw.append(configurationIndex);
    usbDataRaw.append(gain);
    return emit signalTransmitUSBData(usbDataRaw);
}

int MessageServiceThread::slotSetPWMPrescalerToSTM32PLC(uint8_t pwmPeripheral, uint16_t prescaler){
    QByteArray usbDataRaw;
    usbDataRaw.append(READ_SET_PWM_PRESCALER_MESSAGE_TYPE);
    usbDataRaw.append(pwmPeripheral);
    usbDataRaw.append(prescaler >> 8);
    usbDataRaw.append(prescaler);
    return emit signalTransmitUSBData(usbDataRaw);
}

int MessageServiceThread::slotSetDateTimeToSTM32PLC(uint8_t year, uint8_t month, uint8_t date, uint8_t weekDay, uint8_t hour, uint8_t minute){
    QByteArray usbDataRaw;
    usbDataRaw.append(READ_SET_DATE_TIME_MESSAGE_TYPE);
    usbDataRaw.append(year);
    usbDataRaw.append(month);
    usbDataRaw.append(date);
    usbDataRaw.append(weekDay);
    usbDataRaw.append(hour);
    usbDataRaw.append(minute);
    return emit signalTransmitUSBData(usbDataRaw);
}

int MessageServiceThread::slotSetAlarmAToSTM32PLC(uint8_t date, uint8_t hour, uint8_t minute, uint8_t enable){
    QByteArray usbDataRaw;
    usbDataRaw.append(READ_SET_ALARM_A_MESSAGE_TYPE);
    usbDataRaw.append(date);
    usbDataRaw.append(hour);
    usbDataRaw.append(minute);
    usbDataRaw.append(enable);
    return emit signalTransmitUSBData(usbDataRaw);
}

int MessageServiceThread::slotSetAlarmBToSTM32PLC(uint8_t weekDay, uint8_t hour, uint8_t minute, uint8_t enable){
    QByteArray usbDataRaw;
    usbDataRaw.append(READ_SET_ALARM_B_MESSAGE_TYPE);
    usbDataRaw.append(weekDay);
    usbDataRaw.append(hour);
    usbDataRaw.append(minute);
    usbDataRaw.append(enable);
    return emit signalTransmitUSBData(usbDataRaw);
}

int MessageServiceThread::slotAskAnalogInputGainsFromSTM32(uint8_t sdadc){
    /* Ask STM32 */
    QByteArray usbDataRaw;
    usbDataRaw.append(SEND_BACK_ANALOG_GAINS_MESSAGE_TYPE);
    usbDataRaw.append(sdadc);
    return emit signalTransmitUSBData(usbDataRaw);
}

int MessageServiceThread::slotAskPWMPrescalersFromSTM32(){
    /* Ask STM32 */
    QByteArray usbDataRaw;
    usbDataRaw.append(SEND_BACK_PWM_PRESCALERS_MESSAGE_TYPE);
    return emit signalTransmitUSBData(usbDataRaw);
}

int MessageServiceThread::slotAskDateTimeFromSTM32PLC(){
    /* Ask STM32 */
    QByteArray usbDataRaw;
    usbDataRaw.append(SEND_BACK_DATE_TIME_MESSAGE_TYPE);
    return emit signalTransmitUSBData(usbDataRaw);
}

int MessageServiceThread::slotAskAlarmAFromSTM32PLC(){
    /* Ask STM32 */
    QByteArray usbDataRaw;
    usbDataRaw.append(SEND_BACK_ALARM_A_MESSAGE_TYPE);
    return emit signalTransmitUSBData(usbDataRaw);
}

int MessageServiceThread::slotAskAlarmBFromSTM32PLC(){
    /* Ask STM32 */
    QByteArray usbDataRaw;
    usbDataRaw.append(SEND_BACK_ALARM_B_MESSAGE_TYPE);
    return emit signalTransmitUSBData(usbDataRaw);
}

uint32_t MessageServiceThread::readAnalogGainsFromSTM32PLC(uint8_t data[], uint32_t byteIndex){
    analogGain[0] = data[byteIndex++];
    analogGain[1] = data[byteIndex++];
    analogGain[2] = data[byteIndex++];
    emit signalSendAnalogGains(analogGain);
    return byteIndex;
}

uint32_t MessageServiceThread::readPWMPrescalersFromSTM32PLC(uint8_t data[], uint32_t byteIndex){
    pwmPrescaler[0] = (data[byteIndex] << 8) | data[byteIndex + 1];
    byteIndex += 2;
    pwmPrescaler[1] = (data[byteIndex] << 8) | data[byteIndex + 1];
    byteIndex += 2;
    emit signalSendPWMPrescalers(pwmPrescaler);
    return byteIndex;
}

uint32_t MessageServiceThread::readMeasurementsFromSTM32PLC(uint8_t data[], uint32_t byteIndex){
    /* Digital inputs */
    for(int i = 0; i < DI_LENGTH; i++)
        digitalInput[i] = data[byteIndex++];

    /* Analog single inputs */
    for(int i = 0; i < ADC_LENGTH; i++){
        analogSingleInput[i] = (data[byteIndex] << 8) | data[byteIndex + 1];
        byteIndex += 2;
    }

    /* Analog differential inputs */
    for(int i = 0; i < DADC_LENGTH; i++){
        analogDifferentialInput[i] = (data[byteIndex] << 8) | data[byteIndex + 1];
        byteIndex += 2;
    }

    /* Inputs capture */
    for(int i = 0; i < IC_LENGTH; i++){
        uint16_t period = (data[byteIndex] << 8) | data[byteIndex + 1];
        inputCapture[i] = 1.0f/(((float)period)*0.0001f); /* 0.0001 because the input capture clock is at 10 kHz */
        byteIndex += 2;
    }

    /* Encoder inputs */
    for(int i = 0; i < ENCODER_LENGTH; i++){
        encoderInput[i] = (data[byteIndex] << 8) | data[byteIndex];
        byteIndex += 2;
    }

    /* Important to set this to false so we understand that our measurement message has come to us via USB */
    hasSentControlSignals = false;

    return byteIndex;
}

uint32_t MessageServiceThread::readCanBusMessageFromSTM32PLC(uint8_t data[], uint32_t byteIndex){
    RX_CAN_BUS_MESSAGE[0] = data[byteIndex++]; /* IDE */
    RX_CAN_BUS_MESSAGE[1] = data[byteIndex++]; /* ID MSB */
    RX_CAN_BUS_MESSAGE[2] = data[byteIndex++];
    RX_CAN_BUS_MESSAGE[3] = data[byteIndex++];
    RX_CAN_BUS_MESSAGE[4] = data[byteIndex++]; /* ID LSB */
    RX_CAN_BUS_MESSAGE[5] = data[byteIndex++]; /* DLC */
    for(int i = 0; i < RX_CAN_BUS_MESSAGE[5]; i++)
        RX_CAN_BUS_MESSAGE[6+i] = data[byteIndex++]; /* Data */

    /* Listen for CAN bus data - Only one function will proceed to read message */
    Open_SAE_J1939_Listen_For_Messages(j1939);
    /* TODO: Read the CANopen message her as well */

    /* Update the CAN terminal */
    emit signalUpdateCANTerminalWindowWithCANData(RX_CAN_BUS_MESSAGE);

    return byteIndex;
}

uint32_t MessageServiceThread::readDateTimeFromSTM32PLC(uint8_t data[], uint32_t byteIndex){
    /* Get date time */
    uint8_t year = data[byteIndex++];
    uint8_t month = data[byteIndex++];
    uint8_t date = data[byteIndex++];
    uint8_t weekDay = data[byteIndex++];
    uint8_t hour = data[byteIndex++];
    uint8_t minute = data[byteIndex++];

    /* Update */
    emit signalSendDateTime(year, month, date, weekDay, hour, minute);

    return byteIndex;
}

uint32_t MessageServiceThread::readAlarmAFromSTM32PLC(uint8_t data[], uint32_t byteIndex){
    /* Get alarm A */
    uint8_t date = data[byteIndex++];
    uint8_t hour = data[byteIndex++];
    uint8_t minute = data[byteIndex++];
    uint8_t enabled = data[byteIndex++];
    uint8_t activated = data[byteIndex++];

    /* Update */
    emit signalSendAlarmA(date, hour, minute, enabled, activated);

    return byteIndex;
}

uint32_t MessageServiceThread::readAlarmBFromSTM32PLC(uint8_t data[], uint32_t byteIndex){
    /* Get Alarm B */
    uint8_t weekDay = data[byteIndex++];
    uint8_t hour = data[byteIndex++];
    uint8_t minute = data[byteIndex++];
    uint8_t enabled = data[byteIndex++];
    uint8_t activated = data[byteIndex++];

    /* Update */
    emit signalSendAlarmB(weekDay, hour, minute, enabled, activated);

    return byteIndex;
}

void MessageServiceThread::slotSendCanBusMessageToSTM32PLC(){
    /* Create CAN message */
    QByteArray usbDataRaw;
    usbDataRaw.append(READ_CAN_BUS_MESSAGE_TYPE);
    usbDataRaw.append(TX_CAN_BUS_MESSAGE[0]); /* IDE */
    usbDataRaw.append(TX_CAN_BUS_MESSAGE[1]); /* ID MSB */
    usbDataRaw.append(TX_CAN_BUS_MESSAGE[2]);
    usbDataRaw.append(TX_CAN_BUS_MESSAGE[3]);
    usbDataRaw.append(TX_CAN_BUS_MESSAGE[4]); /* ID LSB */
    usbDataRaw.append(TX_CAN_BUS_MESSAGE[5]); /* DLC */
    for(int i = 0; i < TX_CAN_BUS_MESSAGE[5]; i++)
        usbDataRaw.append(TX_CAN_BUS_MESSAGE[6+i]);

    /* Send message */
    emit signalTransmitUSBData(usbDataRaw);

    /* Update the CAN terminal */
    emit signalUpdateCANTerminalWindowWithCANData(TX_CAN_BUS_MESSAGE);

    /* Clear message */
    memset(TX_CAN_BUS_MESSAGE, 0, sizeof(TX_CAN_BUS_MESSAGE));
}

void MessageServiceThread::sendControlSignalsToSTM32PLC(){
    /* Send PWM and analog single output */
    QByteArray usbDataRaw;
    usbDataRaw.append(READ_CONTROL_SIGNALS_MESSAGE_TYPE);
    int pwmSize = sizeof(PWM) / sizeof(PWM[0]);
    for(int i = 0; i < pwmSize; i++){
        usbDataRaw.append(PWM[i] >> 8);
        usbDataRaw.append(PWM[i]);
    }
    int analogSingleOutputSize = sizeof(analogSingleOutput) / sizeof(analogSingleOutput[0]);
    for(int i = 0; i < analogSingleOutputSize; i++){
        usbDataRaw.append(analogSingleOutput[i] >> 8);
        usbDataRaw.append(analogSingleOutput[i]);
    }
    hasSentControlSignals = true;
    emit signalTransmitUSBData(usbDataRaw);
}


uint16_t MessageServiceThread::getPWMPrescaler(int index){
    return pwmPrescaler[index];
}

bool MessageServiceThread::getDigitalInput(int index){
    return digitalInput[index];
}

uint16_t MessageServiceThread::getAnalogSingleInput(int index){
    return analogSingleInput[index];
}

int16_t MessageServiceThread::getAnalogDifferentialInput(int index){
    return analogDifferentialInput[index];
}

float MessageServiceThread::getInputCapture(int index){
    return inputCapture[index];
}

int16_t MessageServiceThread::getEncoderInput(int index){
    return encoderInput[index];
}

uint16_t MessageServiceThread::getPWMControl(int index){
    return PWM[index];
}

uint16_t MessageServiceThread::getAnalogSingleOutput(int index){
    return analogSingleOutput[index];
}

uint16_t MessageServiceThread::getGeneralPurposeValveCommand(int index){
    return generalValveCommandExtendedFlow[index];
}

uint8_t MessageServiceThread::getAuxiliaryValveCommand(int index){
    return auxiliaryValveCommandStandardFlow[index];
}

void MessageServiceThread::slotSetGeneralValveCommandExtendedFlow(uint16_t generalValveCommandExtendedFlow[]){
    memcpy(this->generalValveCommandExtendedFlow, generalValveCommandExtendedFlow, sizeof(this->generalValveCommandExtendedFlow));
}

void MessageServiceThread::slotSetAuxiliaryValveCommandStandardFlow(uint8_t auxiliaryValveCommandStandardFlow[]){
    memcpy(this->auxiliaryValveCommandStandardFlow, auxiliaryValveCommandStandardFlow, sizeof(this->auxiliaryValveCommandStandardFlow));
}
