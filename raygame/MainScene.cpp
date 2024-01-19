#include "MainScene.h"
#include "SpawnManager.h"
#include "EnemySpawnGroup.h"
#include "Player.h"


//set enemy spawn time.
float m_enemySpawnTime = 7.0f;

MainScene::MainScene() : Scene::Scene()
{

}

MainScene::~MainScene()
{

}

void MainScene::start()
{
	//create player
	m_player1 = new Player(20,20,100,"GoodGuy", "player", "Images/player.png");


	//create enemies.
	SpawnManager().createEnemies(20);

	//create a group of spawners to spawn the enemies.
	m_spawner = new EnemySpawnGroup(200, 200, {-1, 0});

	//calls the base function.
	Scene::start();
}

void MainScene::update(float deltaTime)
{
	//if the amount of time since the last spawn has increased
	//higher then the time it should spawn an enemy...
	if (m_waitTime > m_enemySpawnTime)
	{
		//...then try to spawn an enemy
		//if that succeeds, reset the wait time.
		if (m_spawner->spawn())
		{
			//reset the time that has passed since the last spawn.
			m_waitTime = 0.0f;
		}
		//else, do nothing. We will try again next update.
	}
	//calls the base function.
	Scene::update(deltaTime);
	//increases m_gameTime by the amount of time that has passed between the last update and this one.
	m_waitTime += deltaTime;
}

void MainScene::end()
{
	//calls the base function.
	//this deletes/deconstructs this scene.
	Scene::end();
}

