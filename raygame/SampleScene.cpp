#include "SampleScene.h"
#include "SpriteComponent.h"
#include "Transform2D.h"

void SampleScene::start()
{
	//create the player for this scene
	Player* player1 = new Player(100, 100, 20, "Images/Player.png");
	//
	player1->getTransform()->setScale({ 50, 50 });
	addActor(player1);

	Character* enemy = new Character(300, 100, 20, "Images/Enemy.png", "Enemy");
	enemy->getTransform()->setScale({ 50,50 });
	addActor(enemy);
}
