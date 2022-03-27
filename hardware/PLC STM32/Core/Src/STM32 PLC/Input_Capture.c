/*
 * Input_Capture.c
 *
 *  Created on: Aug 7, 2021
 *      Author: Daniel Mårtensson
 */

#include "Functions.h"

#define LENGTH_ARRAY 100
static uint16_t input_capture0[LENGTH_ARRAY] = {0};
static uint16_t input_capture1[LENGTH_ARRAY] = {0};
static TIM_HandleTypeDef* handler_tim17;
static TIM_HandleTypeDef* handler_tim16;

void STM32_PLC_Input_Capture(TIM_HandleTypeDef* htim17, TIM_HandleTypeDef* htim16) {
	/*
	 * Input capture for measuring frequency
	 * For TIM17 and TIM16
	 * Timer clock: 48 Mhz
	 * Prescaler: 4799
	 * Counter: 65535 (0xffff)
	 * Update frequency: 0.1526 Hz (1/0.1526 = 6.5535 seconds)
	 * Example: For every second, it will count 10000
	 * Lowest frequency measurement: 1/(0xFFFF*0.0001) = 0.1526 Hz
	 * Highest frequency measurement: 1/(1*0.0001) = 10000 Hz
	 */
	if(HAL_TIM_IC_Start_DMA(htim16, TIM_CHANNEL_1, (uint32_t*)input_capture1, LENGTH_ARRAY) != HAL_OK)
		Error_Handler();
	if(HAL_TIM_IC_Start_DMA(htim17, TIM_CHANNEL_1, (uint32_t*)input_capture0, LENGTH_ARRAY) != HAL_OK)
		Error_Handler();

	/* Save */
	handler_tim17 = htim17;
	handler_tim16 = htim16;

}

static uint16_t compute_period(uint16_t input_capture[], uint8_t left) {
	/* Find the index - i0 and i1 can never be larger than LENGTH_ARRAY and lower than 0 */
	uint8_t a = 2*LENGTH_ARRAY - left;
	uint8_t i0 = (a - 2) % LENGTH_ARRAY;
	uint8_t i1 = (a - 1) % LENGTH_ARRAY;

	/* Check absolute value */
	if(input_capture[i1] > input_capture[i0])
		return input_capture[i1] - input_capture[i0];
	else if(input_capture[i1] < input_capture[i0])
		return input_capture[i1] + 0xFFFF - input_capture[i0];
	else
		return 0;
}


uint16_t STM32_PLC_Input_Capture_Get_Raw(uint8_t i){
	if(i == 0)
		return compute_period(input_capture0, handler_tim17->hdma[TIM_DMA_ID_CC1]->Instance->CNDTR);
	else
		return compute_period(input_capture1, handler_tim16->hdma[TIM_DMA_ID_CC1]->Instance->CNDTR);
}
