/*
 * Engine.cpp
 *
 *  Created on: Nov 14, 2024
 *      Author: Michin
 */

#include "Engine.hpp"

Engine::Engine() {
	//Empty
}

void Engine::Init(TIM_HandleTypeDef _handler){
	handler = _handler;
	mInit = true;
}

void Engine::Loop(){
	HCSR04 distance_sensor = HCSR04(handler);
	while(mInit)
	{
   		printf("value = %lu\n", distance_sensor.ReadDistance());
		HAL_Delay(1000);
	}
}

