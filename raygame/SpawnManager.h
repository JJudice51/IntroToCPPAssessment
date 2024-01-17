#pragma once
#include "Enemy.h"


class SpawnManager
{
private:
	/// <summary>
	/// stores a pointer-pointer array of enemies to spawn.
	/// </summary>
	static Actor** m_enemiesToSpawn;
	/// <summary>
	/// stores the enemies that have been despawned from the scene.
	/// </summary>
	static Actor** m_despawnedEnemies;
	/// <summary>
	/// the amount of enemies that are in the m_enemiesToSpawn array.
	/// </summary>
	static int m_enemyCount;

public:
	/// <summary>
	/// adds an enemy that is currently waiting to the array of enemies.
	/// </summary>
	void addEnemy();

	/// <summary>
	/// creates and adds enemies to the m_enemiesToSpawn array.
	/// </summary>
	/// <param name="maximumEnemies">the maximum amount of enemies and the amount of enemies that will be created.</param>
	void createEnemies(int maximumEnemies);
};