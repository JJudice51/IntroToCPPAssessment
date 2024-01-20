#include "SampleScene.h"
#include "SpriteComponent.h"
#include "Transform2D.h"
#include "Player.h"

void SampleScene::start()
{
	//This is a better comment
	Player* player1 = new Player(50, 50, 20);
	
	player1->getTransform()->setScale({ 50, 50 });
	addActor(player1);

	Character* enemy = new Character(100, 100, 20, "Images/Enemy.png", "Enemy");
	enemy->getTransform()->setScale({ 50,50 });
	addActor(enemy);
	
}
