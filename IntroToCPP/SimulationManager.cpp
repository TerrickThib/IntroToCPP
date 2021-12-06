#include "SimulationManager.h"

SimulationManager::SimulationManager()
{
	m_entityCount = 0;
	m_currentFighterIndex = 0;
}

SimulationManager::~SimulationManager()
{

}

void SimulationManager::start()
{

}

void SimulationManager::update()
{
	//Checks if fighter 1 is dead and if so replace with new fighter from fighterindex
	if (m_currentFighter1->getHealth() <= 0 && m_currentFighterIndex < m_entityCount)
	{
		m_currentFighter1 = &m_entities[m_currentFighterIndex];
		m_currentFighterIndex++;
	}
	//Checks if fighter 2 is dead and if so replace with new fighter from fighterindex
	if (m_currentFighter2->getHealth() <= 0 && m_currentFighterIndex < m_entityCount)
	{
		m_currentFighter2 = &m_entities[m_currentFighterIndex];
		m_currentFighterIndex++;
	}
	//Checks if either fighter 1 or 2 health is less than or equal to 0 and if there are no more fighters then the application should close
	if ((m_currentFighter1->getHealth() <= 0 || m_currentFighter2->getHealth() <= 0) && m_currentFighterIndex >= m_entityCount)
	{
		//Engine* m_applicationShouldClose = true;
		return;
	}

	m_currentFighter1->attack(m_currentFighter2);
	m_currentFighter2->attack(m_currentFighter1);
}
