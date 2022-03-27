/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.c
 * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "FlashMemory_F3/ReadWrite.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
ADC_HandleTypeDef hadc1;
DMA_HandleTypeDef hdma_adc1;

DAC_HandleTypeDef hdac1;
DAC_HandleTypeDef hdac2;

SDADC_HandleTypeDef hsdadc1;
SDADC_HandleTypeDef hsdadc3;

TIM_HandleTypeDef htim2;
TIM_HandleTypeDef htim3;
TIM_HandleTypeDef htim4;
TIM_HandleTypeDef htim5;
TIM_HandleTypeDef htim6;
TIM_HandleTypeDef htim19;

PCD_HandleTypeDef hpcd_USB_FS;

/* USER CODE BEGIN PV */
uint8_t RX_DATA[1 + 9 * 2 + 3 * 2] = { 0 }; // Choice + PWM + DAC
uint8_t TX_DATA[4 * 2 + 2 * 2 + 3 * 2 + 6] = { 0 }; // ADC + SDADC + DSDADC + DI
uint16_t PWM_PERIOD[9] = { 0 };
uint16_t DAC_OUTPUT[3] = { 0 };
uint16_t ADC_VALUES[4] = { 0 };
uint16_t SD_ADC[6] = {0}; // For both Differential and single
uint16_t DI_VALUES[6] = { 0 };
uint16_t TIM_PRESCALES[4] = { 0 }; // TIM2, TIM3, TIM4, TIM5
uint32_t CHANNEL = 4; // SD-ADC channels
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_DMA_Init(void);
static void MX_ADC1_Init(void);
static void MX_DAC1_Init(void);
static void MX_DAC2_Init(void);
static void MX_SDADC1_Init(void);
static void MX_SDADC3_Init(void);
static void MX_TIM2_Init(void);
static void MX_TIM3_Init(void);
static void MX_TIM4_Init(void);
static void MX_TIM5_Init(void);
static void MX_TIM19_Init(void);
static void MX_TIM6_Init(void);
static void MX_USB_PCD_Init(void);
/* USER CODE BEGIN PFP */
void fill_uint16_array(uint8_t array8[], uint16_t array16[], uint8_t elements_that_has_been_written, uint8_t size);
void fill_TX_DATA_16(uint8_t array8[], uint16_t array16[], uint8_t elements_that_has_been_written, uint8_t size);
void fill_TX_DATA_8(uint8_t array8[], uint16_t array16[], uint8_t elements_that_has_been_written, uint8_t size);
void read_PWM_TIM_prescalers_from_memory();
void write_PWM_TIM_prescalers_to_memory();
void read_PWM_DAC_periods_send_measurement_back();
void is_ready();
void is_not_ready();
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_ADC1_Init();
  MX_DAC1_Init();
  MX_DAC2_Init();
  MX_SDADC1_Init();
  MX_SDADC3_Init();
  MX_TIM2_Init();
  MX_TIM3_Init();
  MX_TIM4_Init();
  MX_TIM5_Init();
  MX_TIM19_Init();
  MX_TIM6_Init();
  MX_USB_PCD_Init();
  /* USER CODE BEGIN 2 */

	// DMA UART
	uint8_t RX_DATA_element_size = sizeof(RX_DATA);
	HAL_UART_Receive_DMA(&huart1, RX_DATA, RX_DATA_element_size);

	// TIM Trig
	HAL_TIM_Base_Start(&htim6); // For DAC
	HAL_TIM_Base_Start(&htim19); // For ADC

	// DMA ADC
	uint8_t ADC_element_size = sizeof(ADC_VALUES) / sizeof(ADC_VALUES[0]);
	HAL_ADC_Start_DMA(&hadc1, (uint32_t*) ADC_VALUES, ADC_element_size);

	// IT SD ADC
	HAL_SDADC_Start_IT(&hsdadc1);
	HAL_SDADC_Start_IT(&hsdadc3);

	// DAC
	HAL_DAC_Start(&hdac1, DAC1_CHANNEL_1);
	HAL_DAC_Start(&hdac1, DAC1_CHANNEL_2);
	HAL_DAC_Start(&hdac2, DAC1_CHANNEL_1);

	// PWM
	HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_2);
	HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_2);
	HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_4);
	HAL_TIM_PWM_Start(&htim5, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start(&htim5, TIM_CHANNEL_2);
	HAL_TIM_PWM_Start(&htim5, TIM_CHANNEL_3);

	// Set the PWM timers
	FlashSetAddrs(0x0803F800);
	read_PWM_TIM_prescalers_from_memory();

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
	while (1) {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
		// TIM 2
		htim2.Instance->CCR1 = PWM_PERIOD[4]; // P4
		// TIM 3
		htim3.Instance->CCR1 = PWM_PERIOD[5]; // P5
		htim3.Instance->CCR2 = PWM_PERIOD[6]; // P6
		// TIM 4
		htim4.Instance->CCR1 = PWM_PERIOD[7]; // P7
		htim4.Instance->CCR2 = PWM_PERIOD[8]; // P8
		htim4.Instance->CCR4 = PWM_PERIOD[3]; // P3
		// TIM 5
		htim5.Instance->CCR1 = PWM_PERIOD[0]; // P0 Frequency 0
		htim5.Instance->CCR2 = PWM_PERIOD[1]; // P1
		htim5.Instance->CCR3 = PWM_PERIOD[2]; // P2
		// DAC 1
		HAL_DAC_SetValue(&hdac1, DAC1_CHANNEL_1, DAC_ALIGN_12B_R, DAC_OUTPUT[2]); // D2
		HAL_DAC_SetValue(&hdac1, DAC1_CHANNEL_2, DAC_ALIGN_12B_R, DAC_OUTPUT[1]); // D1
		// DAC 2
		HAL_DAC_SetValue(&hdac2, DAC1_CHANNEL_1, DAC_ALIGN_12B_R, DAC_OUTPUT[0]); // D0
		// DI
		DI_VALUES[0] = HAL_GPIO_ReadPin(INPUT_0_GPIO_Port, INPUT_0_Pin); // I0
		DI_VALUES[1] = HAL_GPIO_ReadPin(INPUT_1_GPIO_Port, INPUT_1_Pin); // I1
		DI_VALUES[2] = HAL_GPIO_ReadPin(INPUT_2_GPIO_Port, INPUT_2_Pin); // I2
		DI_VALUES[3] = HAL_GPIO_ReadPin(INPUT_3_GPIO_Port, INPUT_3_Pin); // I3
		DI_VALUES[4] = HAL_GPIO_ReadPin(INPUT_4_GPIO_Port, INPUT_4_Pin); // I4
		DI_VALUES[5] = HAL_GPIO_ReadPin(INPUT_5_GPIO_Port, INPUT_5_Pin); // I5
	}
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  RCC_PeriphCLKInitTypeDef PeriphClkInit = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.HSEPredivValue = RCC_HSE_PREDIV_DIV1;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL3;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSE;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
  PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_USB|RCC_PERIPHCLK_ADC1
                              |RCC_PERIPHCLK_SDADC;
  PeriphClkInit.USBClockSelection = RCC_USBCLKSOURCE_PLL;
  PeriphClkInit.SdadcClockSelection = RCC_SDADCSYSCLK_DIV4;
  PeriphClkInit.Adc1ClockSelection = RCC_ADC1PCLK2_DIV2;

  if (HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit) != HAL_OK)
  {
    Error_Handler();
  }
  HAL_PWREx_EnableSDADC(PWR_SDADC_ANALOG1);
  HAL_PWREx_EnableSDADC(PWR_SDADC_ANALOG3);
}

/**
  * @brief ADC1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_ADC1_Init(void)
{

  /* USER CODE BEGIN ADC1_Init 0 */

  /* USER CODE END ADC1_Init 0 */

  ADC_ChannelConfTypeDef sConfig = {0};

  /* USER CODE BEGIN ADC1_Init 1 */

  /* USER CODE END ADC1_Init 1 */
  /** Common config
  */
  hadc1.Instance = ADC1;
  hadc1.Init.ScanConvMode = ADC_SCAN_ENABLE;
  hadc1.Init.ContinuousConvMode = ENABLE;
  hadc1.Init.DiscontinuousConvMode = DISABLE;
  hadc1.Init.ExternalTrigConv = ADC_EXTERNALTRIGCONV_T19_TRGO;
  hadc1.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc1.Init.NbrOfConversion = 4;
  if (HAL_ADC_Init(&hadc1) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure Regular Channel
  */
  sConfig.Channel = ADC_CHANNEL_0;
  sConfig.Rank = ADC_REGULAR_RANK_1;
  sConfig.SamplingTime = ADC_SAMPLETIME_239CYCLES_5;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure Regular Channel
  */
  sConfig.Channel = ADC_CHANNEL_1;
  sConfig.Rank = ADC_REGULAR_RANK_2;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure Regular Channel
  */
  sConfig.Channel = ADC_CHANNEL_2;
  sConfig.Rank = ADC_REGULAR_RANK_3;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure Regular Channel
  */
  sConfig.Channel = ADC_CHANNEL_3;
  sConfig.Rank = ADC_REGULAR_RANK_4;
  if (HAL_ADC_ConfigChannel(&hadc1, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN ADC1_Init 2 */

  /* USER CODE END ADC1_Init 2 */

}

/**
  * @brief DAC1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_DAC1_Init(void)
{

  /* USER CODE BEGIN DAC1_Init 0 */

  /* USER CODE END DAC1_Init 0 */

  DAC_ChannelConfTypeDef sConfig = {0};

  /* USER CODE BEGIN DAC1_Init 1 */

  /* USER CODE END DAC1_Init 1 */
  /** DAC Initialization
  */
  hdac1.Instance = DAC1;
  if (HAL_DAC_Init(&hdac1) != HAL_OK)
  {
    Error_Handler();
  }
  /** DAC channel OUT1 config
  */
  sConfig.DAC_Trigger = DAC_TRIGGER_NONE;
  sConfig.DAC_OutputBuffer = DAC_OUTPUTBUFFER_ENABLE;
  if (HAL_DAC_ConfigChannel(&hdac1, &sConfig, DAC_CHANNEL_1) != HAL_OK)
  {
    Error_Handler();
  }
  /** DAC channel OUT2 config
  */
  if (HAL_DAC_ConfigChannel(&hdac1, &sConfig, DAC_CHANNEL_2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN DAC1_Init 2 */

  /* USER CODE END DAC1_Init 2 */

}

/**
  * @brief DAC2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_DAC2_Init(void)
{

  /* USER CODE BEGIN DAC2_Init 0 */

  /* USER CODE END DAC2_Init 0 */

  DAC_ChannelConfTypeDef sConfig = {0};

  /* USER CODE BEGIN DAC2_Init 1 */

  /* USER CODE END DAC2_Init 1 */
  /** DAC Initialization
  */
  hdac2.Instance = DAC2;
  if (HAL_DAC_Init(&hdac2) != HAL_OK)
  {
    Error_Handler();
  }
  /** DAC channel OUT1 config
  */
  sConfig.DAC_Trigger = DAC_TRIGGER_NONE;
  sConfig.DAC_OutputBuffer = DAC_OUTPUTBUFFER_ENABLE;
  if (HAL_DAC_ConfigChannel(&hdac2, &sConfig, DAC_CHANNEL_1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN DAC2_Init 2 */

  /* USER CODE END DAC2_Init 2 */

}

/**
  * @brief SDADC1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_SDADC1_Init(void)
{

  /* USER CODE BEGIN SDADC1_Init 0 */

  /* USER CODE END SDADC1_Init 0 */

  SDADC_ConfParamTypeDef ConfParamStruct = {0};

  /* USER CODE BEGIN SDADC1_Init 1 */

  /* USER CODE END SDADC1_Init 1 */
  /** Configure the SDADC low power mode, fast conversion mode,
  slow clock mode and SDADC1 reference voltage
  */
  hsdadc1.Instance = SDADC1;
  hsdadc1.Init.IdleLowPowerMode = SDADC_LOWPOWER_NONE;
  hsdadc1.Init.FastConversionMode = SDADC_FAST_CONV_DISABLE;
  hsdadc1.Init.SlowClockMode = SDADC_SLOW_CLOCK_DISABLE;
  hsdadc1.Init.ReferenceVoltage = SDADC_VREF_VDDA;
  hsdadc1.InjectedTrigger = SDADC_SOFTWARE_TRIGGER;
  if (HAL_SDADC_Init(&hsdadc1) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure the Injected Mode
  */
  if (HAL_SDADC_SelectInjectedDelay(&hsdadc1, SDADC_INJECTED_DELAY) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_SDADC_SelectInjectedTrigger(&hsdadc1, SDADC_SOFTWARE_TRIGGER) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_SDADC_InjectedConfigChannel(&hsdadc1, SDADC_CHANNEL_4|SDADC_CHANNEL_8
                              |SDADC_CHANNEL_6, SDADC_CONTINUOUS_CONV_ON) != HAL_OK)
  {
    Error_Handler();
  }
  /** Set parameters for SDADC configuration 0 Register
  */
  ConfParamStruct.InputMode = SDADC_INPUT_MODE_SE_ZERO_REFERENCE;
  ConfParamStruct.Gain = SDADC_GAIN_1;
  ConfParamStruct.CommonMode = SDADC_COMMON_MODE_VSSA;
  ConfParamStruct.Offset = 0;
  if (HAL_SDADC_PrepareChannelConfig(&hsdadc1, SDADC_CONF_INDEX_0, &ConfParamStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Set parameters for SDADC configuration 1 Register
  */
  ConfParamStruct.InputMode = SDADC_INPUT_MODE_DIFF;
  if (HAL_SDADC_PrepareChannelConfig(&hsdadc1, SDADC_CONF_INDEX_1, &ConfParamStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure the Injected Channel
  */
  if (HAL_SDADC_AssociateChannelConfig(&hsdadc1, SDADC_CHANNEL_4, SDADC_CONF_INDEX_0) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure the Injected Channel
  */
  if (HAL_SDADC_AssociateChannelConfig(&hsdadc1, SDADC_CHANNEL_8, SDADC_CONF_INDEX_1) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure the Injected Channel
  */
  if (HAL_SDADC_AssociateChannelConfig(&hsdadc1, SDADC_CHANNEL_6, SDADC_CONF_INDEX_1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN SDADC1_Init 2 */

	// Multi mode for SDADC1 and SDADC3
	if (HAL_SDADC_InjectedMultiModeConfigChannel(&hsdadc1, SDADC_MULTIMODE_SDADC1_SDADC3) != HAL_OK)
	{
		Error_Handler();
	}

	// Calibration
	if (HAL_SDADC_CalibrationStart(&hsdadc1, SDADC_CALIBRATION_SEQ_1) != HAL_OK) {
		Error_Handler();
	}

	// Pool for the end of calibration
	if (HAL_SDADC_PollForCalibEvent(&hsdadc1, HAL_MAX_DELAY) != HAL_OK) {
		Error_Handler();
	}

	// Start interrupt mode
	if (HAL_SDADC_InjectedStart_IT(&hsdadc1) != HAL_OK) {
		Error_Handler();
	}
  /* USER CODE END SDADC1_Init 2 */

}

/**
  * @brief SDADC3 Initialization Function
  * @param None
  * @retval None
  */
static void MX_SDADC3_Init(void)
{

  /* USER CODE BEGIN SDADC3_Init 0 */

  /* USER CODE END SDADC3_Init 0 */

  SDADC_ConfParamTypeDef ConfParamStruct = {0};

  /* USER CODE BEGIN SDADC3_Init 1 */

  /* USER CODE END SDADC3_Init 1 */
  /** Configure the SDADC low power mode, fast conversion mode,
  slow clock mode and SDADC1 reference voltage
  */
  hsdadc3.Instance = SDADC3;
  hsdadc3.Init.IdleLowPowerMode = SDADC_LOWPOWER_NONE;
  hsdadc3.Init.FastConversionMode = SDADC_FAST_CONV_DISABLE;
  hsdadc3.Init.SlowClockMode = SDADC_SLOW_CLOCK_DISABLE;
  hsdadc3.Init.ReferenceVoltage = SDADC_VREF_VDDA;
  hsdadc3.InjectedTrigger = SDADC_SOFTWARE_TRIGGER;
  if (HAL_SDADC_Init(&hsdadc3) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure the Injected Mode
  */
  if (HAL_SDADC_SelectInjectedDelay(&hsdadc3, SDADC_INJECTED_DELAY) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_SDADC_SelectInjectedTrigger(&hsdadc3, SDADC_SOFTWARE_TRIGGER) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_SDADC_InjectedConfigChannel(&hsdadc3, SDADC_CHANNEL_6|SDADC_CHANNEL_8, SDADC_CONTINUOUS_CONV_ON) != HAL_OK)
  {
    Error_Handler();
  }
  /** Set parameters for SDADC configuration 0 Register
  */
  ConfParamStruct.InputMode = SDADC_INPUT_MODE_SE_ZERO_REFERENCE;
  ConfParamStruct.Gain = SDADC_GAIN_1;
  ConfParamStruct.CommonMode = SDADC_COMMON_MODE_VSSA;
  ConfParamStruct.Offset = 0;
  if (HAL_SDADC_PrepareChannelConfig(&hsdadc3, SDADC_CONF_INDEX_0, &ConfParamStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Set parameters for SDADC configuration 1 Register
  */
  ConfParamStruct.InputMode = SDADC_INPUT_MODE_DIFF;
  if (HAL_SDADC_PrepareChannelConfig(&hsdadc3, SDADC_CONF_INDEX_1, &ConfParamStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure the Injected Channel
  */
  if (HAL_SDADC_AssociateChannelConfig(&hsdadc3, SDADC_CHANNEL_6, SDADC_CONF_INDEX_0) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure the Injected Channel
  */
  if (HAL_SDADC_AssociateChannelConfig(&hsdadc3, SDADC_CHANNEL_8, SDADC_CONF_INDEX_0) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN SDADC3_Init 2 */

    // Calibration
	if (HAL_SDADC_CalibrationStart(&hsdadc3, SDADC_CALIBRATION_SEQ_1) != HAL_OK) {
		Error_Handler();
	}

	// Pool for the end of calibration
	if (HAL_SDADC_PollForCalibEvent(&hsdadc3, HAL_MAX_DELAY) != HAL_OK) {
		Error_Handler();
	}

	// Start interrupt mode
	if (HAL_SDADC_InjectedStart_IT(&hsdadc3) != HAL_OK) {
		Error_Handler();
	}
  /* USER CODE END SDADC3_Init 2 */

}

/**
  * @brief TIM2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM2_Init(void)
{

  /* USER CODE BEGIN TIM2_Init 0 */

  /* USER CODE END TIM2_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};
  TIM_OC_InitTypeDef sConfigOC = {0};

  /* USER CODE BEGIN TIM2_Init 1 */

  /* USER CODE END TIM2_Init 1 */
  htim2.Instance = TIM2;
  htim2.Init.Prescaler = 0;
  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim2.Init.Period = 4095;
  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_TIM_PWM_Init(&htim2) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sConfigOC.OCMode = TIM_OCMODE_PWM1;
  sConfigOC.Pulse = 0;
  sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
  sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
  if (HAL_TIM_PWM_ConfigChannel(&htim2, &sConfigOC, TIM_CHANNEL_1) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_TIM_PWM_ConfigChannel(&htim2, &sConfigOC, TIM_CHANNEL_3) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_TIM_PWM_ConfigChannel(&htim2, &sConfigOC, TIM_CHANNEL_4) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM2_Init 2 */

  /* USER CODE END TIM2_Init 2 */
  HAL_TIM_MspPostInit(&htim2);

}

/**
  * @brief TIM3 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM3_Init(void)
{

  /* USER CODE BEGIN TIM3_Init 0 */

  /* USER CODE END TIM3_Init 0 */

  TIM_Encoder_InitTypeDef sConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM3_Init 1 */

  /* USER CODE END TIM3_Init 1 */
  htim3.Instance = TIM3;
  htim3.Init.Prescaler = 0;
  htim3.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim3.Init.Period = 65535;
  htim3.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim3.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  sConfig.EncoderMode = TIM_ENCODERMODE_TI1;
  sConfig.IC1Polarity = TIM_ICPOLARITY_RISING;
  sConfig.IC1Selection = TIM_ICSELECTION_DIRECTTI;
  sConfig.IC1Prescaler = TIM_ICPSC_DIV1;
  sConfig.IC1Filter = 0;
  sConfig.IC2Polarity = TIM_ICPOLARITY_RISING;
  sConfig.IC2Selection = TIM_ICSELECTION_DIRECTTI;
  sConfig.IC2Prescaler = TIM_ICPSC_DIV1;
  sConfig.IC2Filter = 0;
  if (HAL_TIM_Encoder_Init(&htim3, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim3, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM3_Init 2 */

  /* USER CODE END TIM3_Init 2 */

}

/**
  * @brief TIM4 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM4_Init(void)
{

  /* USER CODE BEGIN TIM4_Init 0 */

  /* USER CODE END TIM4_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};
  TIM_OC_InitTypeDef sConfigOC = {0};

  /* USER CODE BEGIN TIM4_Init 1 */

  /* USER CODE END TIM4_Init 1 */
  htim4.Instance = TIM4;
  htim4.Init.Prescaler = 0;
  htim4.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim4.Init.Period = 4095;
  htim4.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim4.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim4) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim4, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_TIM_PWM_Init(&htim4) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim4, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sConfigOC.OCMode = TIM_OCMODE_PWM1;
  sConfigOC.Pulse = 0;
  sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
  sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
  if (HAL_TIM_PWM_ConfigChannel(&htim4, &sConfigOC, TIM_CHANNEL_1) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_TIM_PWM_ConfigChannel(&htim4, &sConfigOC, TIM_CHANNEL_2) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_TIM_PWM_ConfigChannel(&htim4, &sConfigOC, TIM_CHANNEL_4) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM4_Init 2 */

  /* USER CODE END TIM4_Init 2 */
  HAL_TIM_MspPostInit(&htim4);

}

/**
  * @brief TIM5 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM5_Init(void)
{

  /* USER CODE BEGIN TIM5_Init 0 */

  /* USER CODE END TIM5_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};
  TIM_IC_InitTypeDef sConfigIC = {0};

  /* USER CODE BEGIN TIM5_Init 1 */

  /* USER CODE END TIM5_Init 1 */
  htim5.Instance = TIM5;
  htim5.Init.Prescaler = 0;
  htim5.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim5.Init.Period = 4095;
  htim5.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim5.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim5) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim5, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_TIM_IC_Init(&htim5) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim5, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sConfigIC.ICPolarity = TIM_INPUTCHANNELPOLARITY_RISING;
  sConfigIC.ICSelection = TIM_ICSELECTION_DIRECTTI;
  sConfigIC.ICPrescaler = TIM_ICPSC_DIV1;
  sConfigIC.ICFilter = 0;
  if (HAL_TIM_IC_ConfigChannel(&htim5, &sConfigIC, TIM_CHANNEL_1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM5_Init 2 */

  /* USER CODE END TIM5_Init 2 */

}

/**
  * @brief TIM6 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM6_Init(void)
{

  /* USER CODE BEGIN TIM6_Init 0 */

  /* USER CODE END TIM6_Init 0 */

  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM6_Init 1 */

  /* USER CODE END TIM6_Init 1 */
  htim6.Instance = TIM6;
  htim6.Init.Prescaler = 0;
  htim6.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim6.Init.Period = 65535;
  htim6.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim6) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_UPDATE;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim6, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM6_Init 2 */

  /* USER CODE END TIM6_Init 2 */

}

/**
  * @brief TIM19 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM19_Init(void)
{

  /* USER CODE BEGIN TIM19_Init 0 */

  /* USER CODE END TIM19_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};
  TIM_IC_InitTypeDef sConfigIC = {0};

  /* USER CODE BEGIN TIM19_Init 1 */

  /* USER CODE END TIM19_Init 1 */
  htim19.Instance = TIM19;
  htim19.Init.Prescaler = 0;
  htim19.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim19.Init.Period = 65535;
  htim19.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim19.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim19) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim19, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_TIM_IC_Init(&htim19) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_UPDATE;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim19, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sConfigIC.ICPolarity = TIM_INPUTCHANNELPOLARITY_RISING;
  sConfigIC.ICSelection = TIM_ICSELECTION_DIRECTTI;
  sConfigIC.ICPrescaler = TIM_ICPSC_DIV1;
  sConfigIC.ICFilter = 0;
  if (HAL_TIM_IC_ConfigChannel(&htim19, &sConfigIC, TIM_CHANNEL_3) != HAL_OK)
  {
    Error_Handler();
  }
  if (HAL_TIM_IC_ConfigChannel(&htim19, &sConfigIC, TIM_CHANNEL_4) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM19_Init 2 */

  /* USER CODE END TIM19_Init 2 */

}

/**
  * @brief USB Initialization Function
  * @param None
  * @retval None
  */
static void MX_USB_PCD_Init(void)
{

  /* USER CODE BEGIN USB_Init 0 */

  /* USER CODE END USB_Init 0 */

  /* USER CODE BEGIN USB_Init 1 */

  /* USER CODE END USB_Init 1 */
  hpcd_USB_FS.Instance = USB;
  hpcd_USB_FS.Init.dev_endpoints = 8;
  hpcd_USB_FS.Init.speed = PCD_SPEED_FULL;
  hpcd_USB_FS.Init.phy_itface = PCD_PHY_EMBEDDED;
  hpcd_USB_FS.Init.low_power_enable = DISABLE;
  hpcd_USB_FS.Init.battery_charging_enable = DISABLE;
  if (HAL_PCD_Init(&hpcd_USB_FS) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USB_Init 2 */

  /* USER CODE END USB_Init 2 */

}

/**
  * Enable DMA controller clock
  */
static void MX_DMA_Init(void)
{

  /* DMA controller clock enable */
  __HAL_RCC_DMA1_CLK_ENABLE();

  /* DMA interrupt init */
  /* DMA1_Channel1_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA1_Channel1_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(DMA1_Channel1_IRQn);

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOF_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pins : INPUT_1_Pin INPUT_2_Pin INPUT_3_Pin */
  GPIO_InitStruct.Pin = INPUT_1_Pin|INPUT_2_Pin|INPUT_3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pin : INPUT_0_Pin */
  GPIO_InitStruct.Pin = INPUT_0_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  HAL_GPIO_Init(INPUT_0_GPIO_Port, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */
// When we got a complete RX message - This function runs
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart) {
	/* Prevent unused argument(s) compilation warning */
	UNUSED(huart);

	/* NOTE : This function should not be modified, when the callback is needed,
	 the HAL_UART_RxCpltCallback can be implemented in the user file.
	 */

	uint8_t choice = RX_DATA[0];
	switch (choice) {
	case 48: // Ask if is ready
		is_ready();
		break;
	case 49: // Set PWM and DAC periods and also send measurements back
		read_PWM_DAC_periods_send_measurement_back();
		break;
	case 50: // Set Timers prescalers to memory and send status OK back
		write_PWM_TIM_prescalers_to_memory();
		break;
	default: // Answer back that this uC is not ready
		is_not_ready();
		break;
	}
}

// When we got a measurement
void HAL_SDADC_InjectedConvCpltCallback(SDADC_HandleTypeDef *hsdadc){
	// CHANNEL will be 4, 6, 8 but randomly
	// SD_ADC for SDADC1 = [SDADC1_IN4, 0, SDADC1_IN6, SDADC3_IN6, SDADC1_IN8, SDADC3_IN8];
	if(hsdadc->Instance == SDADC1){
		SD_ADC[CHANNEL - 4] = HAL_SDADC_InjectedGetValue(hsdadc, &CHANNEL);
	}else if(hsdadc->Instance == SDADC3){
		SD_ADC[CHANNEL - 4 + 1] = HAL_SDADC_InjectedGetValue(hsdadc, &CHANNEL);
	}
}

// Send back that it's true at first element
void is_ready(){
	uint8_t TX_DATA_element_size = sizeof(TX_DATA) / sizeof(TX_DATA[0]);
	TX_DATA[0] = 1;
	HAL_UART_Transmit(&huart1, TX_DATA, TX_DATA_element_size, 10);
}

// Send back that it's false at first element
void is_not_ready(){
	uint8_t TX_DATA_element_size = sizeof(TX_DATA) / sizeof(TX_DATA[0]);
	TX_DATA[0] = 0;
	HAL_UART_Transmit(&huart1, TX_DATA, TX_DATA_element_size, 10);
}

void read_PWM_DAC_periods_send_measurement_back() {
	// Get the PWM and DAC values
	uint8_t PWM_element_size = sizeof(PWM_PERIOD) / sizeof(PWM_PERIOD[0]);
	uint8_t DAC_element_size = sizeof(DAC_OUTPUT) / sizeof(DAC_OUTPUT[0]);
	fill_uint16_array(RX_DATA, PWM_PERIOD, 1, PWM_element_size); // 1 because the first element is the choice above
	fill_uint16_array(RX_DATA, DAC_OUTPUT, PWM_element_size * 2 + 1, DAC_element_size);

	// Copy over
	uint16_t SD_ADC_VALUES[2] = {SD_ADC[0], SD_ADC[3]};
	uint16_t D_SD_ADC_VALUES[3] = {SD_ADC[2], SD_ADC[4], SD_ADC[5]}; // SD_ADC[1] = empty

	// Send the ADC, SDADC, DSDADC and DI values
	uint8_t ADC_element_size = sizeof(ADC_VALUES) / sizeof(ADC_VALUES[0]);
	uint8_t SD_ADC_element_size = sizeof(SD_ADC_VALUES) / sizeof(SD_ADC_VALUES[0]);
	uint8_t D_SD_ADC_element_size = sizeof(D_SD_ADC_VALUES) / sizeof(D_SD_ADC_VALUES[0]);
	uint8_t DI_element_size = sizeof(DI_VALUES) / sizeof(DI_VALUES[0]);
	uint8_t TX_DATA_element_size = sizeof(TX_DATA) / sizeof(TX_DATA[0]);
	fill_TX_DATA_16(TX_DATA, ADC_VALUES, 0, ADC_element_size);
	fill_TX_DATA_16(TX_DATA, SD_ADC_VALUES, ADC_element_size * 2, SD_ADC_element_size);
	fill_TX_DATA_16(TX_DATA, D_SD_ADC_VALUES, (ADC_element_size + SD_ADC_element_size) * 2, D_SD_ADC_element_size);
	fill_TX_DATA_8(TX_DATA, DI_VALUES, (ADC_element_size + SD_ADC_element_size + D_SD_ADC_element_size) * 2, DI_element_size);
	HAL_UART_Transmit(&huart1, TX_DATA, TX_DATA_element_size, 10);
}

void fill_uint16_array(uint8_t array8[], uint16_t array16[],
		uint8_t elements_that_has_been_written, uint8_t size) {
	for (uint8_t i = 0; i < size; i++) {
		array16[i] = (array8[i + i + elements_that_has_been_written] << 8) | (array8[i + i + 1 + elements_that_has_been_written] & 0xFF);
	}
}

void fill_TX_DATA_16(uint8_t array8[], uint16_t array16[],
		uint8_t elements_that_has_been_written, uint8_t size) {
	for (uint8_t i = 0; i < size; i++) {
		array8[i + i + elements_that_has_been_written] = array16[i] >> 8;
		array8[i + i + 1 + elements_that_has_been_written] = array16[i];
	}
}

void fill_TX_DATA_8(uint8_t array8[], uint16_t array16[],
		uint8_t elements_that_has_been_written, uint8_t size) {
	for (uint8_t i = 0; i < size; i++) {
		array8[i + elements_that_has_been_written] = array16[i];
	}
}

void read_PWM_TIM_prescalers_from_memory() {
	uint32_t Nsize = sizeof(TIM_PRESCALES) / sizeof(TIM_PRESCALES[0]);
	FlashReadN(0, TIM_PRESCALES, Nsize, DATA_TYPE_U16);
	htim2.Instance->PSC = TIM_PRESCALES[0];
	htim3.Instance->PSC = TIM_PRESCALES[1];
	htim4.Instance->PSC = TIM_PRESCALES[2];
	htim5.Instance->PSC = TIM_PRESCALES[3];
}

void write_PWM_TIM_prescalers_to_memory() {
	uint32_t Nsize = sizeof(TIM_PRESCALES) / sizeof(TIM_PRESCALES[0]);
	uint16_t wrBuf[Nsize];
	fill_uint16_array(RX_DATA, wrBuf, 1, Nsize); // 1 because choice is first element
	FlashWriteN(0, wrBuf, Nsize, DATA_TYPE_U16);
	read_PWM_TIM_prescalers_from_memory();
	is_ready();
}

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
	/* User can add his own implementation to report the HAL error return state */
	__disable_irq();
	while (1) {
	}
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
