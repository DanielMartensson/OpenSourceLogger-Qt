/*
 * Address_Delete.c
 *
 *  Created on: 20 juli 2021
 *      Author: Daniel Mårtensson
 */

#include "Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-81_Network_Management_Layer/Network_Management_Layer.h"

/*
 * This is not a SAE J1939 standard. It's only for deleting the j1939->ECU_address
 * PGN: 0x000002 (2)
 */
ENUM_J1939_STATUS_CODES SAE_J1939_Send_Address_Delete(J1939 *j1939, uint8_t DA, uint8_t old_ECU_address) {
	/* Delete (other) ECU address in this ECU */
	for(uint8_t i = 0; i < 255; i++){
		if(old_ECU_address == j1939->other_ECU_address[i]){
			j1939->other_ECU_address[i] = 0xFF;
			j1939->number_of_other_ECU--;
		}
	}

	/* Send delete command to other ECU */
	uint32_t ID = (0x0002 << 16) | (DA << 8) | j1939->this_ECU_address;
	uint8_t data[8];
	data[0] = old_ECU_address;
	data[1] = data[2] = data[3] = data[4] = data[5] = data[6] = data[7] = 0xFF;  /*Reserved */
	return CAN_Send_Message(ID, data, 0);
}

/*
 * This is not a SAE J1939 standard. It's only for deleting the j1939->ECU_address
 * PGN: 0x000002 (2)
 */
void SAE_J1939_Read_Address_Delete(J1939 *j1939, uint8_t data[]) {
	uint8_t old_ECU_address = data[0];
	for(uint8_t i = 0; i < 255; i++){
		if(old_ECU_address == j1939->other_ECU_address[i]){
			j1939->other_ECU_address[i] = 0xFF;
			j1939->number_of_other_ECU--;
		}
	}
}
