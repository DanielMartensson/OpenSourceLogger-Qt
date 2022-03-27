/*
 * Encoder.c
 *
 *  Created on: Jun 13, 2021
 *      Author: Daniel Mårtensson
 */

#include "Functions.h"

static TIM_HandleTypeDef* tim4_handle;
static TIM_HandleTypeDef* tim19_handle;

void STM32_PLC_Encoder(TIM_HandleTypeDef* htim4, TIM_HandleTypeDef* htim19) {
	/* Encoder - Prescaler does not effect encoder */
	if(HAL_TIM_Encoder_Start(htim4, TIM_CHANNEL_ALL) != HAL_OK)
		Error_Handler();
	if(HAL_TIM_Encoder_Start(htim19, TIM_CHANNEL_ALL) != HAL_OK)
		Error_Handler();

	/* Save */
	tim4_handle = htim4;
	tim19_handle = htim19;
}


uint16_t STM32_PLC_Encoder_Get_Raw(uint8_t i) {
	if(i == 0)
		return __HAL_TIM_GET_COUNTER(tim4_handle);
	else
		return __HAL_TIM_GET_COUNTER(tim19_handle);
}
