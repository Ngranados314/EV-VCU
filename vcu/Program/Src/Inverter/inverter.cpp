/*
 * inverter.cpp
 *
 *  Created on: Apr 11, 2024
 *      Author: nicoor
 */

#include "stm32f3xx_hal.h"
#include "inverter.hpp"

namespace inverter {

	Inverter::Inverter(CAN_HandleTypeDef CANArg, CAN_TxHeaderTypeDef TxArg){
		hcan = CANArg;
		TxHeader = TxArg;

		TxHeader.StdId = 0x00; //highest priority CAN message
		TxHeader.DLC = 8; //message length
		TxHeader.IDE = CAN_ID_STD;
		TxHeader.RTR = CAN_RTR_DATA;

		HAL_CAN_Init(&hcan);

	}

	void Inverter::messageGen(float torque){ // will be done later ;P
		message[0] = 1;
	}

	void Inverter::updateBus(uint8_t* message){
		HAL_CAN_AddTxMessage(&hcan, &TxHeader, message, &TxMailBox);
	}

	void Inverter::CAN_Config(){
		CAN_FilterTypeDef sf;
		sf.FilterMaskIdHigh = 0x0000;
		sf.FilterMaskIdLow = 0x0000;
		sf.FilterFIFOAssignment = CAN_FILTER_FIFO0;
		sf.FilterBank = 0;
		sf.FilterMode = CAN_FILTERMODE_IDMASK;
		sf.FilterScale = CAN_FILTERSCALE_32BIT;
		sf.FilterActivation = CAN_FILTER_ENABLE;
		HAL_CAN_ConfigFilter(&hcan, &sf);
		HAL_CAN_Start(&hcan); //might or might not need more HAL calls here

	}
}


