/*
 * SAE_J1939_Commanded_Address.c
 *
 *  Created on: 14 juli 2021
 *      Author: Daniel Mårtensson
 */

#include "Window/Main/UI/UI_tools/Communication/J1939/SAE_J1939/SAE_J1939-81_Network_Management_Layer/Network_Management_Layer.h"

/*
 * Send commanded address to another ECU
 * PGN: 0x00FED8 (65240)
 */
ENUM_J1939_STATUS_CODES SAE_J1939_Send_Commanded_Address(J1939 *j1939, uint8_t DA, uint8_t new_ECU_address, uint32_t identity_number, uint16_t manufacturer_code, uint8_t function_instance, uint8_t ECU_instance, uint8_t function, uint8_t vehicle_system, uint8_t arbitrary_address_capable, uint8_t industry_group, uint8_t vehicle_system_instance) {
	/* Multiple messages - Use Transport Protocol Connection Management BAM */
	uint8_t number_of_packages = 2;
	uint8_t total_message_size = 9;
	uint8_t data[9];
	data[0] = identity_number;
	data[1] = identity_number >> 8;
	data[2] = (identity_number >> 16) |  (manufacturer_code << 5);
	data[3] = manufacturer_code >> 3;
	data[4] = (function_instance << 3) | ECU_instance;
	data[5] = function;
	data[6] = vehicle_system << 1;
	data[7] = (arbitrary_address_capable << 7) | (industry_group << 4) | vehicle_system_instance;
	data[8] = new_ECU_address;							/* New address of the ECU we are sending to*/
	ENUM_J1939_STATUS_CODES status = SAE_J1939_Send_Transport_Protocol_Connection_Management(j1939, DA, CONTROL_BYTE_TP_CM_BAM, total_message_size, number_of_packages, PGN_COMMANDED_ADDRESS);
	if(status != STATUS_SEND_OK)
		return status;
	status = SAE_J1939_Send_Transport_Protocol_Data_Transfer(j1939, DA, data, total_message_size, number_of_packages);
	if(status == STATUS_SEND_OK) {
		/* Send to all ECU that the address DA unused */
		SAE_J1939_Send_Address_Delete(j1939, 0xFF, DA);
		/* According to J1939 standard, request for Address Claimed (broadcast) must be sent after a Commanded Address so we can get back the new ECU address */
		SAE_J1939_Send_Request(j1939, 0xFF, PGN_ADDRESS_CLAIMED);
	}
	return status;
}

/*
 * Read the commanded address from another ECU. Will always be called from Transport Protocol Data Transfer due to 9 bytes of data
 * PGN: 0x00FED8 (65240)
 */
void SAE_J1939_Read_Commanded_Address(J1939 *j1939, uint8_t data[]) {
	j1939->this_name.identity_number = ((data[2] & 0b00011111) << 16) | (data[1] << 8) | data[0];
	j1939->this_name.manufacturer_code = (data[3] << 3) | (data[2] >> 5);
	j1939->this_name.function_instance = data[4] >> 3;
	j1939->this_name.ECU_instance = data[4] & 0b00000111;
	j1939->this_name.function = data[5];
	j1939->this_name.vehicle_system = data[6] >> 1;
	j1939->this_name.arbitrary_address_capable = data[7] >> 7;
	j1939->this_name.industry_group = (data[7] >> 4) & 0b0111;
	j1939->this_name.vehicle_system_instance = data[7] & 0b00001111;
	j1939->this_ECU_address = data[8]; 						/* New address of this ECU */
}
