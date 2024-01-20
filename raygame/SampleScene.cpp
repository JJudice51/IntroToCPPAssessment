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
	
	Character* wingMan = new Character(2, 2,10, "Images/Player.png", "wingman");
	addActor(wingMan);
	wingMan->getTransform()->setScale({ 1,1 });
	player1->getTransform()->addChild(wingMan->getTransform());

	
	

}
