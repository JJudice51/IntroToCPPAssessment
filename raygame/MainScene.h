#pragma once
#include "Scene.h"
#include "Enemy.h"
#include "EnemySpawnGroup.h"

class MainScene : public Scene
{
private:
	/// <summary>
	/// stores the amount of time that has passed since the last enemy has been spawned.
	/// </summary>
	float m_waitTime;

	/// <summary>
	/// stores the amount of time that should have passed before an enemy can be spawned.
	/// </summary>
	float m_enemySpawnTime;

	/// <summary>
	/// stores a reference to the main spawner that spawns enemies.
	/// </summary>
	EnemySpawnGroup* m_spawner;
public:
	/// <summary>
	/// constructs the main scene where most of the game will take place.
	/// this will be where all actors and things in the main scene exist.
	/// </summary>
	MainScene();
	~MainScene() override;

	/// <summary>
	/// runs code necessary to begin the scene
	/// </summary>
	void start() override;

	/// <summary>
	/// runs code everytime the game loops
	/// updates everything in the current Scene.
	/// </summary>
	/// <param name="deltaTime">the amount of time between the last frame and the current one.</param>
	void update(float deltaTime) override;

	/// <summary>
	/// runs code to quit the scene.
	/// calls deconstructors.
	/// </summary>
	void end() override;
};