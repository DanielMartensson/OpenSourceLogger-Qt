/*
 * SAE_J1939-21_Application_Layer.h
 *
 *  Created on: 14 juli 2021
 *      Author: Daniel Mårtensson
 */

#ifndef SAE_J1939_21_TRANSPORT_LAYER_SAE_J1939_21_TRANSPORT_LAYER_H_
#define SAE_J1939_21_TRANSPORT_LAYER_SAE_J1939_21_TRANSPORT_LAYER_H_

/* Layers */
#include "Window/Main/UI/UI_tools/Communication/J1939/Hardware/CAN_Network/CAN_Network.h"
#include "Window/Main/UI/UI_tools/Communication/J1939/Open_SAE_J1939/Structs.h"
#include "Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-71_Application_Layer/Application_Layer.h"
#include "Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-73_Diagnostics_Layer/Diagnostics_Layer.h"
#include "Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-81_Network_Management_Layer/Network_Management_Layer.h"
#include "Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939_Enums/Enum_Control_Byte.h"
#include "Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939_Enums/Enum_DM1_DM2.h"
#include "Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939_Enums/Enum_DM14_DM15.h"
#include "Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939_Enums/Enum_Group_Function_Value.h"
#include "Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939_Enums/Enum_NAME.h"
#include "Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939_Enums/Enum_PGN.h"
#include "Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939_Enums/Enum_Send_Status.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Acknowledgement */
void SAE_J1939_Read_Acknowledgement(J1939 *j1939, uint8_t SA, uint8_t data[]);
ENUM_J1939_STATUS_CODES SAE_J1939_Send_Acknowledgement(J1939 *j1939, uint8_t DA, uint8_t control_byte, uint8_t group_function_value, uint32_t PGN_of_requested_info);

/* Request */
void SAE_J1939_Read_Request(J1939 *j1939, uint8_t SA, uint8_t data[]);
ENUM_J1939_STATUS_CODES SAE_J1939_Send_Request(J1939* j1939, uint8_t DA, uint32_t PGN_code);

/* Transport Protocol Connection Management */
void SAE_J1939_Read_Transport_Protocol_Connection_Management(J1939 *j1939, uint8_t SA, uint8_t data[]);
ENUM_J1939_STATUS_CODES SAE_J1939_Send_Transport_Protocol_Connection_Management(J1939 *j1939, uint8_t DA, uint8_t control_byte, uint16_t total_message_size, uint8_t number_of_packages, uint32_t PGN_of_the_packeted_message);

/* Transport Protocol Data Transfer */
void SAE_J1939_Read_Transport_Protocol_Data_Transfer(J1939 *j1939, uint8_t SA, uint8_t data[]);
ENUM_J1939_STATUS_CODES SAE_J1939_Send_Transport_Protocol_Data_Transfer(J1939 *j1939, uint8_t DA, uint8_t data[], uint16_t total_message_size, uint8_t number_of_packages);

#ifdef __cplusplus
}
#endif

#endif /* SAE_J1939_21_TRANSPORT_LAYER_SAE_J1939_21_TRANSPORT_LAYER_H_ */
