#ifndef CAN_BUS_H
#define CAN_BUS_H

#include "Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939_Enums/Enum_Send_Status.h"
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
#include <QSerialPort>
void QT_USB_set_serial_handler(QSerialPort* serial_port);
extern "C" {
#endif

ENUM_J1939_STATUS_CODES QT_USB_Transmit(uint32_t ID, uint8_t data[], uint8_t DLC);
void QT_USB_Get_ID_Data(uint32_t *ID, uint8_t data[], bool* is_new_message);

#ifdef __cplusplus
}

#endif

#endif // CAN_BUS_H
