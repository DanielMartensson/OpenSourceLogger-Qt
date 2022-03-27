#ifndef MESSAGESERVICETHREAD_H
#define MESSAGESERVICETHREAD_H

#include <QObject>
#include <QThread>
#include "../../../tools/opensaej1939/Open_SAE_J1939/Open_SAE_J1939.h"
#include "code/tools/usb/usb.h"
#define MAX_ADC 12
#define MAX_DADC 5
#define MAX_ENCODER 2
#define MAX_INPUT_CAPTURE 2
#define MAX_DIGITAL_INPUT 9
#define MAX_PWM 8
#define MAX_DAC 3
#define MAX_AUXILIARY_VALVE_COMMAND_STANDARD_FLOW 16
#define MAX_GENERAL_PURPOSE_VALVE_COMMAND 1

/* IDE */
#define CAN_ID_STD                  (0x00000000U)  /*!< Standard Id */
#define CAN_ID_EXT                  (0x00000004U)  /*!< Extended Id */

class MessageServiceThread : public QThread
{
    Q_OBJECT
public:
    MessageServiceThread(J1939 *j1939 = nullptr, USB *usb = nullptr);
    void run();
    uint16_t getPWMPrescaler(int index);
    bool getDigitalInput(int index);
    uint16_t getAnalogSingleInput(int index);
    uint16_t getAnalogDifferentialInput(int index);
    float getInputCapture(int index);
    int16_t getEncoderInput(int index);
    uint16_t getPWM(int index);
    uint16_t getAnalogSingleOutput(int index);
    uint16_t getGeneralPurposeValveCommand(int index);
    uint8_t getAuxiliaryValveCommand(int index);

signals:
    int signalTransmitUSBData(QByteArray usbDataRaw);
    void signalSendAnalogGains(uint8_t analogGain[]);
    void signalSendPWMPrescalers(uint16_t pwmPrescaler[]);
    void signalUpdateCANTerminalWindowWithCANData(uint8_t CAN_DATA[]);

public slots:
    void slotSetThreadActive(bool active);
    int slotSetAnalogInputGainToSTM32PLC(uint8_t sdadc, uint8_t configurationIndex, uint8_t gain);
    int slotSetPWMPrescalerToSTM32PLC(uint8_t pwmPeripheral, uint16_t prescaler);
    int slotAskAnalogInputGainsFromSTM32(uint8_t sdadc);
    int slotAskPWMPrescalersFromSTM32();
    void slotSetPWMSignal(int index, uint16_t value);
    void slotSetAnalogSingleOutputSignal(int index, uint16_t value);
    void slotReadUSBData(uint8_t data[], uint32_t length);
    void slotSetGeneralValveCommandExtendedFlow(uint16_t generalValveCommandExtendedFlow[]);
    void slotSetAuxiliaryValveCommandStandardFlow(uint8_t axuiliaryValveCommandStandardFlow[]);
    void slotSendCanBusMessageToSTM32PLC();
private:
    /* Constructor fields */
    J1939 *j1939;
    USB *usb;

    /* Settings fields */
    uint8_t analogGain[3] = {0};
    uint16_t pwmPrescaler[2] = {0};

    /* Measurement fields */
    bool digitalInput[MAX_DIGITAL_INPUT] = {false};
    uint16_t analogSingleInput[MAX_ADC] = {0};
    uint16_t analogDifferentialInput[MAX_DADC] = {0};
    float inputCapture[MAX_INPUT_CAPTURE] = {0};
    int16_t encoderInput[MAX_ENCODER] = {0};
    uint16_t PWM[MAX_PWM] = {0};
    uint16_t analogSingleOutput[MAX_DAC] = {0};
    uint16_t generalValveCommandExtendedFlow[MAX_GENERAL_PURPOSE_VALVE_COMMAND];
    uint8_t auxiliaryValveCommandStandardFlow[MAX_AUXILIARY_VALVE_COMMAND_STANDARD_FLOW] = {0};

    /* Flags */
    bool threadActive;
    bool hasSentControlSignals;

    /* Other functions */
    void sendControlSignalsToSTM32PLC();
    uint32_t readAnalogGainsFromSTM32PLC(uint8_t data[], uint32_t byteIndex);
    uint32_t readPWMPrescalersFromSTM32PLC(uint8_t data[], uint32_t byteIndex);
    uint32_t readMeasurementsFromSTM32PLC(uint8_t data[], uint32_t byteIndex);
    uint32_t readCanBusMessageFromSTM32PLC(uint8_t data[], uint32_t byteIndex);

};

#endif // MESSAGESERVICETHREAD_H
