#include "Engine.h"
#include <iostream>

bool Engine::m_applicationShouldClose = false;

Engine::Engine()
{
	m_applicationShouldClose = false;
	
}

Engine::~Engine()
{	
	
}

void Engine::run()
{
	start();

	while (!getApplicationShouldClose())
	{
		update();
		draw();
	}

	end();
}

void Engine::start()
{
	
}

void Engine::update()
{
	
}

void Engine::draw()
{
	
}

void Engine::end()
{
}
