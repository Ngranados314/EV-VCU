/*
 * inverter.cpp
 *
 *  Created on: Apr 11, 2024
 *      Author: nicoor
 */

#include "bxcan_stmf4.hpp"


namespace inverter {

Inverter::Inverter(CAN_HandleTypeDef CANArg, CAN_TxHeaderTypeDef TxArg){
	CanHandle = CANArg;
	TxHeader = TxHeader;
}


}


