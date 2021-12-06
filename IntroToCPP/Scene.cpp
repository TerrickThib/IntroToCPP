#include "Scene.h"
#include "SimulationManager.h"
#include <iostream>

Scene::Scene()
{

}

Scene::~Scene()
{

}

bool Scene::getStarted()
{
	return false;
}

void Scene::addActor(Actor* actor)
{

}

bool Scene::removeActor(Actor* actor)
{
	return false;
}

void Scene::start()
{
	Entity wompus = Entity('W', 3, 1, 1);
	Entity redactedLittleSkeleton = Entity('r', 2, 1, 0);
	Entity unclePhil = Entity('U', 1, 2, 69);

	m_entities[0] = wompus;
	m_entities[1] = redactedLittleSkeleton;
	m_entities[2] = unclePhil;
	m_entityCount = 3;

	int test = 5;
	Entity* entityPtrs[5];
	Entity** entities = new Entity * [test];

	m_currentFighter1 = &m_entities[0];
	m_currentFighter2 = &m_entities[1];
	m_currentFighterIndex = 2;
}

void Scene::update()
{
	SimulationManager* scene = new SimulationManager();
	scene->update();
}

void Scene::draw()
{
	m_currentFighter1->printStats();
	m_currentFighter2->printStats();
	system("pause");
	system("cls");
}

void Scene::end()
{

}
