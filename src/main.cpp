/*
 * main.cpp
 *
 *  Created on: Nov 14, 2024
 *      Author: Michin
 */

#include "main.hpp"
#include "Engine.hpp"

void Run(TIM_HandleTypeDef _handler)
{
	Engine eng = Engine();
	eng.Init(_handler);
	eng.Loop();
}


