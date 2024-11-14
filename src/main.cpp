/*
 * main.cpp
 *
 *  Created on: Nov 14, 2024
 *      Author: Michin
 */

#include "main.hpp"
#include "Engine.hpp"

void Run()
{
	Engine eng = Engine();
	eng.Init();
	eng.Loop();
}


