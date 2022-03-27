/*
 * Analog_Input.c
 *
 *  Created on: Jun 13, 2021
 *      Author: Daniel Mårtensson
 */

#include "Functions.h"

static int16_t SDADC1_Single[9];
static int16_t SDADC2_Single[3];
static int16_t SDADC3_Differential[5];
static SDADC_HandleTypeDef* handler_sdadc1;
static SDADC_HandleTypeDef* handler_sdadc2;
static SDADC_HandleTypeDef* handler_sdadc3;

void STM32_PLC_Analog_Input(TIM_HandleTypeDef* htim12, TIM_HandleTypeDef* htim13, SDADC_HandleTypeDef* hsdadc1, SDADC_HandleTypeDef* hsdadc2, SDADC_HandleTypeDef* hsdadc3) {
	/*
	 * For TIM12, TIM13
	 * Timer clock: 48 Mhz
	 * Prescaler: 99
	 * Counter: 48000 (0xbb80)
	 * Update frequency: 10 Hz
	 */
	HAL_TIM_OC_Start(htim13, TIM_CHANNEL_1); /* TIM13 Channel 1 is trigger source for SDADC1 */
	HAL_TIM_OC_Start(htim12, TIM_CHANNEL_1); /* TIM12 Channel 1 is trigger source for SDADC2 */
	HAL_TIM_OC_Start(htim12, TIM_CHANNEL_2); /* TIM12 Channel 2 is trigger source for SDADC3 */
	if (HAL_SDADC_CalibrationStart(hsdadc1, SDADC_CALIBRATION_SEQ_3) != HAL_OK)
		Error_Handler();
	if (HAL_SDADC_PollForCalibEvent(hsdadc1, HAL_MAX_DELAY) != HAL_OK)
		Error_Handler();
	if (HAL_SDADC_CalibrationStart(hsdadc2, SDADC_CALIBRATION_SEQ_3) != HAL_OK)
		Error_Handler();
	if (HAL_SDADC_PollForCalibEvent(hsdadc2, HAL_MAX_DELAY) != HAL_OK)
		Error_Handler();
	if (HAL_SDADC_CalibrationStart(hsdadc3, SDADC_CALIBRATION_SEQ_3) != HAL_OK)
		Error_Handler();
	if (HAL_SDADC_PollForCalibEvent(hsdadc3, HAL_MAX_DELAY) != HAL_OK)
		Error_Handler();
	if(HAL_SDADC_InjectedStart_DMA(hsdadc1, (uint32_t*)SDADC1_Single, 9) != HAL_OK)
		Error_Handler();
	if(HAL_SDADC_InjectedStart_DMA(hsdadc2, (uint32_t*)SDADC2_Single, 3) != HAL_OK)
		Error_Handler();
	if(HAL_SDADC_InjectedStart_DMA(hsdadc3, (uint32_t*)SDADC3_Differential, 5) != HAL_OK)
		Error_Handler();


	/* Save */
	handler_sdadc1 = hsdadc1;
	handler_sdadc2 = hsdadc2;
	handler_sdadc3 = hsdadc3;

}

void STM32_PLC_Analog_Input_Get_Gain(uint8_t sdadc, uint8_t configuration_index[]) {
	switch(sdadc){
	case 1:
		configuration_index[0] = (handler_sdadc1->Instance->CONF0R >> 20) & 0b111; /* Bits 22:20 GAIN0[2:0]: */
		configuration_index[1] = (handler_sdadc1->Instance->CONF1R >> 20) & 0b111;
		configuration_index[2] = (handler_sdadc1->Instance->CONF2R >> 20) & 0b111;
		break;
	case 2:
		configuration_index[0] = (handler_sdadc2->Instance->CONF0R >> 20) & 0b111; /* Bits 22:20 GAIN0[2:0]: */
		configuration_index[1] = (handler_sdadc2->Instance->CONF1R >> 20) & 0b111;
		configuration_index[2] = (handler_sdadc2->Instance->CONF2R >> 20) & 0b111;
		break;
	case 3:
		configuration_index[0] = (handler_sdadc3->Instance->CONF0R >> 20) & 0b111; /* Bits 22:20 GAIN0[2:0]: */
		configuration_index[1] = (handler_sdadc3->Instance->CONF1R >> 20) & 0b111;
		configuration_index[2] = (handler_sdadc3->Instance->CONF2R >> 20) & 0b111;
		break;
	}
}

void STM32_PLC_Analog_Input_Set_Gain(uint8_t sdadc, uint8_t configuration_index, uint8_t gain, bool save_to_flash) {
	/* Initial selection */
	SDADC_HandleTypeDef *hsdadc;
	int16_t *DMA_address;
	uint8_t DMA_length;
	switch(sdadc){
	case 1:
		hsdadc = handler_sdadc1;
		DMA_length = 9;
		DMA_address = SDADC1_Single;
		break;
	case 2:
		hsdadc = handler_sdadc2;
		DMA_length = 3;
		DMA_address = SDADC2_Single;
		break;
	case 3:
		hsdadc = handler_sdadc3;
		DMA_length = 5;
		DMA_address = SDADC3_Differential;
		break;
	default:
		hsdadc = handler_sdadc1;
		DMA_length = 9;
		DMA_address = SDADC1_Single;
		break;
	}

	/* Stop SDADC with DMA */
	if(HAL_SDADC_InjectedStop_DMA(hsdadc) != HAL_OK)
		Error_Handler();

	/* 0: Check if SDADC is ready */
	if(hsdadc->State != HAL_SDADC_STATE_READY)
		Error_Handler();

	/* 1: Enter init-mode for the control register */
	hsdadc->Instance->CR1 |= SDADC_CR1_INIT;
	uint32_t tickstart = HAL_GetTick();
	bool isAtInitMode = true;
	/* Wait for INITRDY bit on SDADC_ISR */
	while ((hsdadc->Instance->ISR & SDADC_ISR_INITRDY) == (uint32_t) RESET) {
		if ((HAL_GetTick() - tickstart) > 200) {
			isAtInitMode = false;
		}
	}

	/* 2: If init mode, then set gain and offset registers */
	gain = gain & 0b111; /* Only make sure that we don't implement larger then value 0b111 */
	if(isAtInitMode){
		switch(configuration_index){
		case SDADC_CONF_INDEX_0:
			hsdadc->Instance->CONF0R &=  ~(0b111 << 20); /* Clear */
			hsdadc->Instance->CONF0R |= gain << 20; /* Bits 22:20 GAIN0[2:0]: */
			if(save_to_flash)
				STM32_PLC_Flash_Set_ADC_Gain_For_Configuration_Index_0(sdadc, gain);
			break;
		case SDADC_CONF_INDEX_1:
			hsdadc->Instance->CONF1R &=  ~(0b111 << 20); /* Clear */
			hsdadc->Instance->CONF1R |= gain << 20;
			if(save_to_flash)
				STM32_PLC_Flash_Set_ADC_Gain_For_Configuration_Index_1(sdadc, gain);
			break;
		case SDADC_CONF_INDEX_2:
			hsdadc->Instance->CONF2R &=  ~(0b111 << 20); /* Clear */
			hsdadc->Instance->CONF2R |= gain << 20;
			if(save_to_flash)
				STM32_PLC_Flash_Set_ADC_Gain_For_Configuration_Index_2(sdadc, gain);
			break;
		}
	}

	/* 3: Leave init-mode for the control register */
	hsdadc->Instance->CR1 &= ~(SDADC_CR1_INIT);


	/* Start ADC again */
	if (HAL_SDADC_CalibrationStart(hsdadc, SDADC_CALIBRATION_SEQ_3) != HAL_OK)
		Error_Handler();
	if (HAL_SDADC_PollForCalibEvent(hsdadc, HAL_MAX_DELAY) != HAL_OK)
		Error_Handler();
	if(HAL_SDADC_InjectedStart_DMA(hsdadc, (uint32_t*)DMA_address, DMA_length) != HAL_OK)
		Error_Handler();
}

/* Get raw ADC0 to ADC11 */
uint16_t STM32_PLC_Analog_Input_ADC_Get_Raw(uint8_t i) {
	int16_t value = 0;
	switch (i) {
	case 0:
		value = SDADC1_Single[6];
		break;
	case 1:
		value = SDADC1_Single[5];
		break;
	case 2:
		value = SDADC1_Single[4];
		break;
	case 3:
		value = SDADC1_Single[3];
		break;
	case 4:
		value = SDADC1_Single[8];
		break;
	case 5:
		value = SDADC1_Single[7];
		break;
	case 6:
		value = SDADC1_Single[2];
		break;
	case 7:
		value = SDADC1_Single[1];
		break;
	case 8:
		value = SDADC1_Single[0];
		break;
	case 9:
		value = SDADC2_Single[2];
		break;
	case 10:
		value = SDADC2_Single[1];
		break;
	case 11:
		value = SDADC2_Single[0];
		break;
	}
	return value + 0x8000;
}

/* Get raw DADC0 to DADC4 */
int16_t STM32_PLC_Analog_Input_DADC_Get_Raw(uint8_t i) {
	int16_t value = 0;
	switch(i){
	case 0:
		value = SDADC3_Differential[4];
		break;
	case 1:
		value = SDADC3_Differential[3];
		break;
	case 2:
		value = SDADC3_Differential[2];
		break;
	case 3:
		value = SDADC3_Differential[1];
		break;
	case 4:
		value = SDADC3_Differential[0];
		break;
	}
	return value;
}
