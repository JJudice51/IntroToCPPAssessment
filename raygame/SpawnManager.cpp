#include "SpawnManager.h"
#include "ActorArray.h"
#include "Engine.h"

//initializes the variable that keeps track of the amount of enemies in the m_enemiesToSpawn array.
static int m_enemiesToSpawnCount = 0;
//initializes the variable that stores the maximum amount of enemies in the m_enemiesToSpawn array.
static int m_maxSpawnEnemies = 10;

Enemy* SpawnManager::getFirstEnemy()
{
	//if there are no enemies, return nullptr
	if(m_enemiesToSpawnCount < 1)
		return nullptr;
	//create a new array one space smaller than the old array... 
	//...to store the old data without the one we are removing
	Actor** newArray = new Actor * [m_enemiesToSpawnCount - 1];
	//create a pointer to store a reference to the first element in the old array.
	Actor* enemyToReturn = m_enemiesToSpawn[0];
	//int j to represent the amount of times a copy from the old to new array has been successful.
	int j = 0;
	//use a for-loop to iterate through the old array...
	//...and store all of the old contents besides the first element...
	//...inside of the new array.
	for (int i = 1; i < m_enemiesToSpawnCount; i++)
	{
		// i begins one space ahead to skip the first element...
		//...then we copy the content from the old array to the new one.
		newArray[j] = m_enemiesToSpawn[i];
		//increment j by one everytime the copy was a success.
		j++;
	}
	//point the old pointer-pointer array variable m_enemiesToSpawn at the newArray location.
	m_enemiesToSpawn = newArray;

	//return the original first Actor in the array that we had removed (enemyToReturn).
	//must be dynamically casted to the Enemy class.
	return dynamic_cast<Enemy*>(enemyToReturn);

}

bool SpawnManager::despawnEnemy(Enemy* enemyToDespawn)
{
	//if the m_enemiesToSpawn array is full...
	if (m_enemiesToSpawnCount == m_maxSpawnEnemies)
	{
		//...destroy the enemy,
		Engine().destroy(enemyToDespawn); 
		//and exit the function.
		return;
	}
	//else, add actorToDespawn to m_enemiesToSpawn.

	//create a new array to store the old contents of the m_enemiesToSpawn array with an extra spot.
	Actor** newArray = new Actor * [m_enemiesToSpawnCount + 1];
	//stores the contents of the m_enemiesToSpawn inside of the newArray we created.
	for (int i = 0; i < m_enemiesToSpawnCount; i++)
	{
		//store the contents of m_enemies inside of newArray, both at the index of i.
		newArray[i] = m_enemiesToSpawn[i];
	}
	//increase the amount of enemies spawned inside of m_enemiesToSpawnCount by one.
	m_enemiesToSpawnCount++;
	//store enemyToDespawn inside of the new slot we created.
	newArray[m_enemiesToSpawnCount] = enemyToDespawn;

	//give the contents of the new array to the variable that holds the enemies to spawn: m_enemiesToSpawn.
	m_enemiesToSpawn = newArray;

	//removes the actor just from the scene.
	ActorArray().removeActor(enemyToDespawn);
}

void SpawnManager::createEnemies(int maximumEnemies)
{    
	//the maximum amount of enemies that can be on the screen at once.
	m_maxSpawnEnemies = maximumEnemies;

	//replaces the m_enemiesToSpawn array with an empty array with a maximum amount of slots to fill.
	m_enemiesToSpawn = new Actor * [maximumEnemies];

	//creates the maximum amount of enemies possible by iterating with the current count, and stopping when it's equal to the maximum count.
	for(m_enemiesToSpawnCount; m_enemiesToSpawnCount < maximumEnemies; m_enemiesToSpawnCount++)
	{
		//creates and stores a reference to an Enemy, then stores it in the empty m_enemiesToSpawn array, everytime this loops.
		m_enemiesToSpawn[m_enemiesToSpawnCount] = new Enemy(-30, -30 * (m_enemiesToSpawnCount + 1), 30);
	}
}
