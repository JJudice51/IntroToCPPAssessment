#pragma once
#include "Vector2.h"
#include "Actor.h"

//forward declaration of the Spawner class.
class Spawner;

class EnemySpawnGroup : public Actor
{
private:
	/// <summary>
	/// points to an array of pointers that are pointing at Spawners.
	/// </summary>
	Spawner** m_spawners;
	/// <summary>
	/// the amount of spawners that the m_spawner stores references to.
	/// </summary>
	static const int m_spawnerCount = 2;
	/// <summary>
	/// stores the facing direction of this group of spawners.
	/// </summary>
	MathLibrary::Vector2 m_facing;
	/// <summary>
	/// the number value representing a space in the spawner array.
	/// </summary>
	int m_iterator;

public:
	/// <summary>
	/// constructs a SpawnGroup composed of spawners.
	/// </summary>
	/// <param name="x">the position that this SpawnGroup is in the current Scene on the x axis.</param>
	/// <param name="y">the position that this SpawnGroup is in the current Scene on the y axis.</param>
	/// <param name="facing">the direction that this SpawnGroup is facing in the current Scene.</param>
	EnemySpawnGroup(float x, float y, MathLibrary::Vector2 facing);

	/// <summary>
	/// spawns a new Enemy from this SpawnGroup.
	/// </summary>
	/// <returns>a boolean representing if the spawn operation was a success.</returns>
	bool spawn();
};