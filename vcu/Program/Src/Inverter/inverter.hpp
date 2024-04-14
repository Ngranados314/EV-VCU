/*
 * inverter.hpp
 *
 *  Created on: Apr 11, 2024
 *      Author: nicoor
 */

#ifndef SRC_INVERTER_INVERTER_HPP_
#define SRC_INVERTER_INVERTER_HPP_

/*
 * for the time being, all CAN actuons are taken care of inside the Inverter class
 * eventually, decoupling CAN into it's own interface that gets passed to this class wil be necessary
 * until then, this is for testing
 */

namespace inverter
{
	class Inverter
	{
	public:
		Inverter(CAN_HandleTypeDef CANArg, CAN_TxHeaderTypeDef TxArg);

		void messageGen(float torque); //reimplementation of chad's python code

		void updateBus(uint8_t* message); //add message to bus

		void CAN_Config();

		void SystemClock_Config(); //this and CAN_config are one time configs
								   //will be moved out of this class later

	private:
		uint8_t message[4];
		uint32_t TxMailBox;

		CAN_HandleTypeDef hcan;
		CAN_TxHeaderTypeDef TxHeader;

	};
}


#endif /* SRC_INVERTER_INVERTER_HPP_ */
