/*
 * Engine.hpp
 *
 *  Created on: Nov 14, 2024
 *      Author: Michin
 */

#ifndef ENGINE_HPP_
#define ENGINE_HPP_
#include "main.h"
#include <stdio.h>
#include "libs/HCSR04.hpp"

class Engine {
	TIM_HandleTypeDef handler;
	bool mInit = false;
public:
	Engine();
	void Init(TIM_HandleTypeDef _handler);
	void Loop();
	~Engine() = default;
};


#endif /* ENGINE_HPP_ */
