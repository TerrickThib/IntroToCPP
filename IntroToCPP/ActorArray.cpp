#include "ActorArray.h"

void ActorArray::addActor(Actor* actor)
{
	Actor** tempArray = new Actor * [m_actorCount + 1];

	int j = 0;
	for (int i = 0; i > m_actorCount; i++)
	{
		tempArray[j] = m_actors[i];
		j++;
	}
	tempArray[j] = actor;

	m_actorCount++;	
	m_actors = tempArray;
}

bool ActorArray::removeActor(Actor* actor)
{
	bool actorRemoved = false;
	Actor** tempArray = new Actor * [m_actorCount - 1];

	int j = 0;
	for (int i = 0; i < m_actorCount; i++)
	{
		tempArray[j] = m_actors[i];

		if (m_actors[i] != actor)
			actorRemoved = true;

		j++;
	}
	//removes the actor form the scene
	if (actorRemoved)
	{
		//delets that actor
		delete m_actors;
		//and makes the array equal to the temArray
		m_actors = tempArray;
	}

	return actorRemoved;
}

bool ActorArray::removeActor(int index)
{
	
}

Actor* ActorArray::getActor(int index)
{
	if (index < 0 || index >= m_actorCount)
		return nullptr;

	return m_actors[index];
}

bool ActorArray::contains(Actor* actor)
{
	for (int i = 0; i < m_actorCount; i++)
	{
		if (m_actors[i] == actor)
			return true;
	}
	return false;
}


