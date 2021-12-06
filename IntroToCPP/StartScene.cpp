#include "StartScene.h"
#include <iostream>
#include "Engine.h"

void StartScene::draw()
{
	//String that ask player is they would like to start game or not
	std::cout << "Would You like to start game?\0 1.Yes \0 2.No " << std::endl;
}

void StartScene::update()
{
	int input;
	//Gets players input
	std::cin >> input;
	if (input == 1)
	{
		Scene::m_currentSceneIndex++;
	}
	if (input == 2)
	{
		Engine::setApplicationShouldClose(true);
	}	
}
