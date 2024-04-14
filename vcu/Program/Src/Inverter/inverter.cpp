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
		CanHandle = CANArg;
		TxHeader = TxHeader;
	}


}


