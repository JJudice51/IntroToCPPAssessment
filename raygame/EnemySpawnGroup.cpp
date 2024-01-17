#include "EnemySpawnGroup.h"
#include "Spawner.h"
#include "Scene.h"

//initializes m_enemyCount and gives it a starting value of 3. This only happens once every game.
static int m_enemyCount = 3;

EnemySpawnGroup::EnemySpawnGroup(float x, float y, MathLibrary::Vector2 facing) : Actor::Actor(x, y, "EnemySpawnGroup")
{
	//stores a copy of the direction this SpawnGroup will face.
	m_facing = facing;
	//stores and initializes two spawners 
	m_spawners = new Spawner* [m_spawnerCount] { new Spawner(this, 200, 0), new Spawner(this, -200, 0) };
	//stores the current spot in the iteration of the m_spawner array.
	m_iterator = 0;
}

bool EnemySpawnGroup::spawn()
{
	//if the iterator is bigger then the amount of spawners in the array...
	if (m_iterator > m_spawnerCount)
	{
		//...set iterator to 0.
		m_iterator = 0;
	}
	//if the pool of enemies is does not have an enemy to spawn...
	if (m_enemyPoolCount < 1)
	{
		//...return false to quit early and indicate that it was unsuccessful.
		return false;
	}
	//spawns an Actor into the scene from the current spawner.
	m_spawners[m_iterator]->spawn(SpawnManager().getFirstEnemy());
	//iterates forward the iterator.
	m_iterator++;
	//returns true if the operation was a success.
	return true;
}
