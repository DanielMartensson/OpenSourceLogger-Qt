/*
 * SAE_J1939_DM15.c
 *
 *  Created on: 14 juli 2021
 *      Author: Daniel Mårtensson
 */

#include "Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-73_Diagnostics_Layer/Diagnostics_Layer.h"

/*
 * Send a memory response. This will be sent after a DM14 memory request
 * PGN: 0x00D800 (55296)
 */
ENUM_J1939_STATUS_CODES SAE_J1939_Send_Response_DM15(J1939 *j1939, uint8_t DA, uint16_t number_of_allowed_bytes, uint8_t status, uint32_t EDC_parameter, uint8_t EDCP_extention, uint16_t seed) {
	uint32_t ID = (0x18D8 << 16) | (DA << 8) | j1939->this_ECU_address;
	uint8_t response_data[8];
	response_data[0] = number_of_allowed_bytes;
	response_data[1] = (number_of_allowed_bytes >> 3) | (0b1 << 4) | (status << 1) | 0b1;	 /* bit 5 and 1 are reserved */
	response_data[2] = EDC_parameter;
	response_data[3] = EDC_parameter >> 8;
	response_data[4] = EDC_parameter >> 16;
	response_data[5] = EDCP_extention;
	response_data[6] = seed;
	response_data[7] = seed >> 8;
	return CAN_Send_Message(ID, response_data, 0); 											 /* 0 ms delay */
}

/*
 * Store the DM15 information about other ECU (This is actually the response after DM14 request according to J1939 standard)
 * PGN: 0x00D800 (55296)
 */
void SAE_J1939_Read_Response_DM15(J1939 *j1939, uint8_t SA, uint8_t data[]) {
	j1939->from_other_ecu_dm.dm15.number_of_allowed_bytes = (data[1] >> 3) | data[0];
	j1939->from_other_ecu_dm.dm15.status = (data[1] >> 1) & 0b0000111;
	j1939->from_other_ecu_dm.dm15.EDC_parameter = (data[4] << 16) | (data[3] << 8) | data[2];
	j1939->from_other_ecu_dm.dm15.EDCP_extention = data[5];
	j1939->from_other_ecu_dm.dm15.seed = (data[7] << 8) | data[6];
	j1939->from_other_ecu_dm.dm15.from_ecu_address = SA;
}

