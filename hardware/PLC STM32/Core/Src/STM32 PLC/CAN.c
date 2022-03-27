/*
 * CAN.c
 *
 *  Created on: Jun 14, 2021
 *      Author: Daniel Mårtensson
 */

#include "Functions.h"

static CAN_HandleTypeDef *can_handler;
static void Create_CAN_Filter(CAN_HandleTypeDef *hcan);
static void Create_CAN_Interrupt(CAN_HandleTypeDef *hcan);

void STM32_PLC_CAN(CAN_HandleTypeDef *hcan) {
	can_handler = hcan;
	Create_CAN_Filter(hcan);
	if (HAL_CAN_Start(hcan) != HAL_OK)
		Error_Handler();
	Create_CAN_Interrupt(hcan);
}

HAL_StatusTypeDef STM32_PLC_CAN_Transmit(uint8_t TxData[], CAN_TxHeaderTypeDef *TxHeader) {
	uint32_t TxMailbox;
	return HAL_CAN_AddTxMessage(can_handler, TxHeader, TxData, &TxMailbox);
}

/* Interrupt handler that read message */
void HAL_CAN_RxFifo0MsgPendingCallback(CAN_HandleTypeDef *hcan) {
	/* This this the message */
	uint8_t rxData[8] = {0};
	CAN_RxHeaderTypeDef rxHeader = {0};
	if (HAL_CAN_GetRxMessage(can_handler, CAN_RX_FIFO0, &rxHeader, rxData) != HAL_OK)
		Error_Handler();

	/* Total bytes we can send to OpenSourceLogger */
	uint8_t send_data_array[20] = {0};
	uint8_t index = 0;

	/* Message type */
	send_data_array[index++] = SEND_CAN_BUS_MESSAGE_TYPE;

	/* Read ID */
	send_data_array[index++] = rxHeader.IDE;
	uint32_t ID = rxHeader.IDE == CAN_ID_STD ? rxHeader.StdId : rxHeader.ExtId;
	send_data_array[index++] = ID >> 24;
	send_data_array[index++] = ID >> 16;
	send_data_array[index++] = ID >> 8;
	send_data_array[index++] = ID;

	/* DLC data length */
	send_data_array[index++] = rxHeader.DLC;

	/* Fill the data */
	for (uint8_t i = 0; i < 8; i++)
		send_data_array[index++] = rxData[i];

	/* Send the data */
	CDC_Transmit_FS(send_data_array, index);
}

static void Create_CAN_Interrupt(CAN_HandleTypeDef *hcan) {
	/* Don't forget to check NVIC in CAN -> NVIC Settings -> CAN RX0 interrupt */
	if (HAL_CAN_ActivateNotification(hcan, CAN_IT_RX_FIFO0_MSG_PENDING) != HAL_OK)
			Error_Handler();
}

static void Create_CAN_Filter(CAN_HandleTypeDef *hcan) {
	CAN_FilterTypeDef sFilterConfig;
	sFilterConfig.FilterBank = 0;
	sFilterConfig.FilterMode = CAN_FILTERMODE_IDMASK;
	sFilterConfig.FilterScale = CAN_FILTERSCALE_32BIT;
	sFilterConfig.FilterIdHigh = 0x0000;
	sFilterConfig.FilterIdLow = 0x0000;
	sFilterConfig.FilterMaskIdHigh = 0x0000;
	sFilterConfig.FilterMaskIdLow = 0x0000;
	sFilterConfig.FilterFIFOAssignment = CAN_RX_FIFO0;
	sFilterConfig.FilterActivation = ENABLE;
	sFilterConfig.SlaveStartFilterBank = 14;

	if (HAL_CAN_ConfigFilter(hcan, &sFilterConfig) != HAL_OK)
		Error_Handler();
}
