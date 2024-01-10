#include "MainScene.h"

MainScene::MainScene() : Scene::Scene()
{

}

MainScene::~MainScene()
{
	//deconstruct base class
	Scene::~Scene();
}

void MainScene::start()
{
	//creates an enemy.
	Enemy* enemy1 = new Enemy(200, 200, 30);

	//adds the enemy to the Scene.
	addActor(enemy1);

	//calls the base function.
	Scene::start();
}

void MainScene::update(float deltaTime)
{
	//calls the base function.
	Scene::update(deltaTime);
}

void MainScene::end()
{
	//calls the base function.
	Scene::end();
}

