#pragma once

//forward declare enemy and actor to prevent circular dependancy
class Enemy; class Actor;

static class SpawnManager
{
private:
	/// <summary>
	/// stores a pointer-pointer array of enemies to spawn.
	/// </summary>
	static Actor** m_enemiesToSpawn;
	/// <summary>
	/// the amount of enemies that are in the m_enemiesToSpawn array.
	/// </summary>
	static int m_enemyToSpawnCount;
	/// <summary>
	/// the maximum amount of enemies that can be stored inside of m_enemiesToSpawn;
	/// </summary>
	static int m_maxSpawnEnemies;

public:
	/// <summary>
	/// gets the first stored Enemy and then removes it from the m_enemiesToSpawn array then returns it.
	/// </summary>
	/// <returns>the Enemy that will be removed from m_enemiesToSpawn</returns>
	Enemy* getFirstEnemy();

	/// <summary>
	/// despawns an enemy and adds it to m_enemiesToBeSpawned.
	/// </summary>
	static void despawnEnemy(Enemy* enemyToDespawn);

	/// <summary>
	/// creates and adds enemies to the m_enemiesToSpawn array.
	/// </summary>
	/// <param name="maximumEnemies">the maximum amount of enemies and the amount of enemies that will be created.</param>
	static void createEnemies(int maximumEnemies);

	//queues up all stored enemies to be deleted.
	static void end();
};