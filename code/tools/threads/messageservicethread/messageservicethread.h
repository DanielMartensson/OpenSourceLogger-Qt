#ifndef MESSAGESERVICETHREAD_H
#define MESSAGESERVICETHREAD_H

#include <QObject>
#include <QThread>
#include "../../../tools/opensaej1939/Open_SAE_J1939/Open_SAE_J1939.h"
#include "code/tools/usb/usb.h"
#include "code/tools/database/database.h"

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
    int16_t getAnalogDifferentialInput(int index);
    float getInputCapture(int index);
    int16_t getEncoderInput(int index);
    uint16_t getPWMControl(int index);
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
    bool digitalInput[DI_LENGTH] = {false};
    uint16_t analogSingleInput[ADC_LENGTH] = {0};
    int16_t analogDifferentialInput[DADC_LENGTH] = {0};
    float inputCapture[IC_LENGTH] = {0};
    int16_t encoderInput[ENCODER_LENGTH] = {0};
    uint16_t pwmControl[PWM_LENGTH] = {0};
    uint16_t analogSingleOutput[DAC_LENGTH] = {0};
    uint16_t generalValveCommandExtendedFlow[GENERAL_VALVE_LENGTH];
    uint8_t auxiliaryValveCommandStandardFlow[AUXILIARY_VALVE_LENGTH] = {0};

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
