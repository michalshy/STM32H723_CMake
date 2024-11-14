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

void Engine::Init(){
	mInit = true;
}

void Engine::Loop(){
	while(mInit)
	{
		HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_1);
		HAL_Delay(1000);
	}
}

