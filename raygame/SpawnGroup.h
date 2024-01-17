#pragma once
#include "Vector2.h"
#include "Spawner.h"
class SpawnGroup
{
private:
	/// <summary>
	/// stores the amount of enemies that need to be spawned.
	/// </summary>
	static int m_enemyCount;
	/// <summary>
	/// the amount of time before this SpawnGroup spawns an Enemy.
	/// </summary>
	static float m_spawnDuration;
	/// <summary>
	/// points to an array of pointers that are pointing at Spawners.
	/// </summary>
	Spawner** m_spawners;
	/// <summary>
	/// stores the facing direction of this group of spawners.
	/// </summary>
	MathLibrary::Vector2 m_facing;
	/// <summary>
	/// stores the position of this group of spawners in the current scene.
	/// </summary>
	MathLibrary::Vector2 m_position;

public:
	/// <summary>
	/// constructs a SpawnGroup composed of spawners.
	/// </summary>
	/// <param name="enemyCount">the amount of enemies to spawn before the round is over.</param>
	/// <param name="position">the position that this SpawnGroup is in the current Scene.</param>
	/// <param name="facing">the direction that this SpawnGroup is facing in the current Scene.</param>
	SpawnGroup(int enemyCount, MathLibrary::Vector2 position, MathLibrary::Vector2 facing);

	/// <summary>
	/// updates the SpawnGroup every time the game loops.
	/// </summary>
	/// <param name="deltaTime">the amount of time that has passed between the last frame and this one.</param>
	void update(float deltaTime);
};