﻿// BALLS.cpp : Defines the entry point for the application.
//

#include "BALLS.h"
#include "core/core.h"
#include "graphics/graphics.h"

int main()
{
	
	/*Graphics graphics;
	graphics.init();

	while (true)
	{
		graphics.draw();
	}*/
	//works fine.... but recieving the obj from sim is sad
	Console::print(to_string(Atmosphere::pressureAtAltitude(0)));
	Console::print(to_string(Atmosphere::machAtAltitude(0)));
	//Simulation::run();
	
}
