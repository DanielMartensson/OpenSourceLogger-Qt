/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f3xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define INPUT_1_Pin GPIO_PIN_13
#define INPUT_1_GPIO_Port GPIOC
#define INPUT_2_Pin GPIO_PIN_14
#define INPUT_2_GPIO_Port GPIOC
#define INPUT_3_Pin GPIO_PIN_15
#define INPUT_3_GPIO_Port GPIOC
#define DAC_2_Pin GPIO_PIN_4
#define DAC_2_GPIO_Port GPIOA
#define DAC_1_Pin GPIO_PIN_5
#define DAC_1_GPIO_Port GPIOA
#define DAC_0_Pin GPIO_PIN_6
#define DAC_0_GPIO_Port GPIOA
#define SDA0_M_Pin GPIO_PIN_0
#define SDA0_M_GPIO_Port GPIOB
#define SDA0_P_Pin GPIO_PIN_1
#define SDA0_P_GPIO_Port GPIOB
#define SDADC_0_Pin GPIO_PIN_2
#define SDADC_0_GPIO_Port GPIOB
#define SDA1_P_Pin GPIO_PIN_8
#define SDA1_P_GPIO_Port GPIOE
#define SDA1_M_Pin GPIO_PIN_9
#define SDA1_M_GPIO_Port GPIOE
#define SDADC_1_Pin GPIO_PIN_14
#define SDADC_1_GPIO_Port GPIOB
#define SDADC_2_Pin GPIO_PIN_15
#define SDADC_2_GPIO_Port GPIOB
#define SDADC_3_Pin GPIO_PIN_8
#define SDADC_3_GPIO_Port GPIOD
#define FREQUENCY_2_Pin GPIO_PIN_8
#define FREQUENCY_2_GPIO_Port GPIOA
#define PWM_0_Pin GPIO_PIN_9
#define PWM_0_GPIO_Port GPIOA
#define PWM_1_Pin GPIO_PIN_10
#define PWM_1_GPIO_Port GPIOA
#define PWM_2_Pin GPIO_PIN_6
#define PWM_2_GPIO_Port GPIOF
#define INPUT_0_Pin GPIO_PIN_7
#define INPUT_0_GPIO_Port GPIOF
#define PWM_3_Pin GPIO_PIN_15
#define PWM_3_GPIO_Port GPIOA
#define E__Pin GPIO_PIN_4
#define E__GPIO_Port GPIOB
#define E_B5_Pin GPIO_PIN_5
#define E_B5_GPIO_Port GPIOB
#define PWM_4_Pin GPIO_PIN_6
#define PWM_4_GPIO_Port GPIOB
#define PWM_5_Pin GPIO_PIN_7
#define PWM_5_GPIO_Port GPIOB
#define FREQUENCY_1_Pin GPIO_PIN_8
#define FREQUENCY_1_GPIO_Port GPIOB
#define FREQUENCY_0_Pin GPIO_PIN_9
#define FREQUENCY_0_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
