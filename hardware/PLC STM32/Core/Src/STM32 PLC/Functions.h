/*
 * Functions.h
 *
 *  Created on: Jun 13, 2021
 *      Author: Daniel Mårtensson
 */

#ifndef SRC_STM32_PLC_FUNCTIONS_H_
#define SRC_STM32_PLC_FUNCTIONS_H_

/* C standard library */
#include <stdbool.h>
#include <stdint.h>

/* Project includes */
#include "main.h"
#include "usbd_cdc_if.h"

/* Message types for STM32 PLC */
typedef enum{
	SEND_CAN_BUS_MESSAGE_TYPE,
	READ_CAN_BUS_MESSAGE_TYPE,
	SEND_MEASUREMENTS_MESSAGE_TYPE,
	READ_CONTROL_SIGNALS_MESSAGE_TYPE,
	READ_SET_ANALOG_INPUT_GAIN_MESSAGE_TYPE,
	READ_SET_PWM_PRESCALER_MESSAGE_TYPE,
	SEND_BACK_PWM_PRESCALERS_MESSAGE_TYPE,
	SEND_BACK_ANALOG_GAINS_MESSAGE_TYPE
}MESSAGE_TYPES;

/* Turn on the LED's */
void STM32_PLC_LED(uint8_t binary_value);

/* PWM functions */
void STM32_PLC_PWM(TIM_HandleTypeDef *htim2, TIM_HandleTypeDef *htim5);
void STM32_PLC_PWM_Set(uint8_t i, uint16_t ON_Period);
uint16_t STM32_PLC_PWM_Get(uint8_t i);
void STM32_PLC_PWM_Reset();
void STM32_PLC_PWM0_To_PWM3_Set_Prescaler(uint16_t prescaler, bool save_to_flash);
void STM32_PLC_PWM4_To_PWM7_Set_Prescaler(uint16_t prescaler, bool save_to_flash);
uint32_t STM32_PLC_PWM0_To_PWM3_Get_Prescaler();
uint32_t STM32_PLC_PWM4_To_PWM7_Get_Prescaler();

/* Input capture */
void STM32_PLC_Input_Capture(TIM_HandleTypeDef* htim17, TIM_HandleTypeDef* htim16);
uint16_t STM32_PLC_Input_Capture_Get_Raw(uint8_t i);

/* Counters */
void STM32_PLC_Encoder(TIM_HandleTypeDef *htim4, TIM_HandleTypeDef *htim19);
uint16_t STM32_PLC_Encoder_Get_Raw(uint8_t i);

/* Pulse counters */
void STM32_PLC_Pulse_Count_Set(uint8_t i);
uint32_t STM32_PLC_Pulse_Count_Get(uint8_t i);
void STM32_PLC_Pulse_Count_Reset();

/* Analog Output */
void STM32_PLC_Analog_Output(DAC_HandleTypeDef *hdac1, DAC_HandleTypeDef *hdac2, TIM_HandleTypeDef *htim6);
void STM32_PLC_Analog_Output_Set(uint8_t i, uint16_t output);
void STM32_PLC_Analog_Output_Reset();
uint16_t STM32_PLC_Analog_Output_Get(uint8_t i);

/* Digital Input */
bool STM32_PLC_Digital_Input_Get(uint8_t i);

/* Analog input */
void STM32_PLC_Analog_Input(TIM_HandleTypeDef* htim12, TIM_HandleTypeDef* htim13, SDADC_HandleTypeDef* hsdadc1, SDADC_HandleTypeDef* hsdadc2, SDADC_HandleTypeDef* hsdadc3);
void STM32_PLC_Analog_Input_Set_Gain(uint8_t sdadc, uint8_t configuration_index, uint8_t gain, bool save_to_flash);
void STM32_PLC_Analog_Input_Get_Gain(uint8_t sdadc, uint8_t configuration_index[]);
uint16_t STM32_PLC_Analog_Input_ADC_Get_Raw(uint8_t i);
int16_t STM32_PLC_Analog_Input_DADC_Get_Raw(uint8_t i);

/* CAN */
void STM32_PLC_CAN(CAN_HandleTypeDef *hcan);
HAL_StatusTypeDef STM32_PLC_CAN_Transmit(uint8_t TxData[], CAN_TxHeaderTypeDef *TxHeader);

/* Flash */
void STM32_PLC_Flash_Set_PWM_Prescaler_For_PWM_0_3(uint16_t prescaler);
void STM32_PLC_Flash_Set_PWM_Prescaler_For_PWM_4_7(uint16_t prescaler);
void STM32_PLC_Flash_Set_ADC_Gain_For_Configuration_Index_0(uint8_t sdadc, uint8_t gain);
void STM32_PLC_Flash_Set_ADC_Gain_For_Configuration_Index_1(uint8_t sdadc, uint8_t gain);
void STM32_PLC_Flash_Set_ADC_Gain_For_Configuration_Index_2(uint8_t sdadc, uint8_t gain);
void STM32_PLC_Flash_Get_PWM_Prescalers(uint16_t *prescaler, uint16_t *prescaler_for_PWM_4_7);
void STM32_PLC_Flash_Get_ADC_Gains_For_SDADC_1(uint8_t *gain_for_configuration_index_0, uint8_t *gain_for_configuration_index_1, uint8_t *gain_for_configuration_index_2);
void STM32_PLC_Flash_Get_ADC_Gains_For_SDADC_2(uint8_t *gain_for_configuration_index_0, uint8_t *gain_for_configuration_index_1, uint8_t *gain_for_configuration_index_2);
void STM32_PLC_Flash_Get_ADC_Gains_For_SDADC_3(uint8_t *gain_for_configuration_index_0, uint8_t *gain_for_configuration_index_1, uint8_t *gain_for_configuration_index_2);


#endif /* SRC_STM32_PLC_FUNCTIONS_H_ */
