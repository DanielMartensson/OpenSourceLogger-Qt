/*
 * Flash.c
 *
 *  Created on: 13 feb. 2022
 *      Author: Daniel Mårtensson
 */

#include "Functions.h"

#define ADDR_FLASH_PAGE_127   ((uint32_t)0x0803F800) /* Base address of Page 127, 2 Kbytes */
#define FLASH_LENGTH_DATA 11
static void read_flash(uint16_t data[], uint8_t length);
static void write_flash(uint16_t value, uint8_t overwrite_index);


void STM32_PLC_Flash_Set_ADC_Gain_For_Configuration_Index_0(uint8_t sdadc, uint8_t gain){
	switch(sdadc){
	case 1:
		write_flash(gain, 0);
		break;
	case 2:
		write_flash(gain, 3);
		break;
	case 3:
		write_flash(gain, 6);
		break;
	}
}

void STM32_PLC_Flash_Set_ADC_Gain_For_Configuration_Index_1(uint8_t sdadc, uint8_t gain){
	switch(sdadc){
	case 1:
		write_flash(gain, 1);
		break;
	case 2:
		write_flash(gain, 4);
		break;
	case 3:
		write_flash(gain, 7);
		break;
	}
}

void STM32_PLC_Flash_Set_ADC_Gain_For_Configuration_Index_2(uint8_t sdadc, uint8_t gain){
	switch(sdadc){
	case 1:
		write_flash(gain, 2);
		break;
	case 2:
		write_flash(gain, 5);
		break;
	case 3:
		write_flash(gain, 8);
		break;
	}
}

void STM32_PLC_Flash_Set_PWM_Prescaler_For_PWM_0_3(uint16_t prescaler){
	write_flash(prescaler, 9);
}

void STM32_PLC_Flash_Set_PWM_Prescaler_For_PWM_4_7(uint16_t prescaler){
	write_flash(prescaler, 10);
}


void STM32_PLC_Flash_Get_ADC_Gains_For_SDADC_1(uint8_t *gain_for_configuration_index_0, uint8_t *gain_for_configuration_index_1, uint8_t *gain_for_configuration_index_2){
	uint16_t data[FLASH_LENGTH_DATA];
	read_flash(data, FLASH_LENGTH_DATA);
	*gain_for_configuration_index_0 = data[0];
	*gain_for_configuration_index_1 = data[1];
	*gain_for_configuration_index_2 = data[2];
}

void STM32_PLC_Flash_Get_ADC_Gains_For_SDADC_2(uint8_t *gain_for_configuration_index_0, uint8_t *gain_for_configuration_index_1, uint8_t *gain_for_configuration_index_2){
	uint16_t data[FLASH_LENGTH_DATA];
	read_flash(data, FLASH_LENGTH_DATA);
	*gain_for_configuration_index_0 = data[3];
	*gain_for_configuration_index_1 = data[4];
	*gain_for_configuration_index_2 = data[5];
}

void STM32_PLC_Flash_Get_ADC_Gains_For_SDADC_3(uint8_t *gain_for_configuration_index_0, uint8_t *gain_for_configuration_index_1, uint8_t *gain_for_configuration_index_2){
	uint16_t data[FLASH_LENGTH_DATA];
	read_flash(data, FLASH_LENGTH_DATA);
	*gain_for_configuration_index_0 = data[6];
	*gain_for_configuration_index_1 = data[7];
	*gain_for_configuration_index_2 = data[8];
}

void STM32_PLC_Flash_Get_PWM_Prescalers(uint16_t *prescaler_for_PWM_0_3, uint16_t *prescaler_for_PWM_4_7){
	uint16_t data[FLASH_LENGTH_DATA];
	read_flash(data, FLASH_LENGTH_DATA);
	*prescaler_for_PWM_0_3 = data[9];
	*prescaler_for_PWM_4_7 = data[10];
}

static void read_flash(uint16_t data[], uint8_t length){
	uint32_t address = ADDR_FLASH_PAGE_127;
	for(uint8_t i = 0; i < length; i++){
		data[i] = *(__IO uint16_t*)address;
		address += 2;
	}
}

static void write_flash(uint16_t value, uint8_t overwrite_index){

	/* Create the data */
	uint16_t data[FLASH_LENGTH_DATA];
	read_flash(data, FLASH_LENGTH_DATA);

	/* Overwrite */
	data[overwrite_index] = value;

	/* Unlock */
	HAL_FLASH_Unlock();

	/* Erase */
	FLASH_EraseInitTypeDef eraseInitStruct;
	eraseInitStruct.TypeErase   = FLASH_TYPEERASE_PAGES;
	eraseInitStruct.PageAddress = ADDR_FLASH_PAGE_127;
	eraseInitStruct.NbPages     = 1;
	uint32_t PageError = 0;
	if (HAL_FLASHEx_Erase(&eraseInitStruct, &PageError) != HAL_OK)
		Error_Handler();

	/* Write data */
	uint32_t index = 0;
	for(uint8_t i = 0; i < FLASH_LENGTH_DATA; i++){
		if(HAL_FLASH_Program(FLASH_TYPEPROGRAM_HALFWORD, ADDR_FLASH_PAGE_127 + index, data[i]) != HAL_OK)
			Error_Handler();
		index += 2;
	}

	/* Lock */
	HAL_FLASH_Lock();
}
