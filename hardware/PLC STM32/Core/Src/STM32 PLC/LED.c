/*
 * LED.c
 *
 *  Created on: Jun 13, 2021
 *      Author: Daniel Mårtensson
 */

#include "Functions.h"

static void LED(uint8_t binary[]);

/* Select a program number between 0 and 31 e.g 5-bit. 0 is no program activated */
void STM32_PLC_LED(uint8_t binary_value){
	uint8_t binary[5];
	binary[4] = binary_value >> 4;
	binary[3] = (binary_value >> 3) & 0b01;
	binary[2] = (binary_value >> 2) & 0b001;
	binary[1] = (binary_value >> 1) & 0b0001;
	binary[0] = binary_value & 0b0001;
	LED(binary);
}

static void LED(uint8_t binary[]) {
	HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, binary[0]);
	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, binary[1]);
	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, binary[2]);
	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, binary[3]);
	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, binary[4]);
}
