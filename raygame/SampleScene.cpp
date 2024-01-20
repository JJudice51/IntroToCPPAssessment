#include "SampleScene.h"
#include "SpriteComponent.h"
#include "Transform2D.h"

void SampleScene::start()
{
	//This is a better comment
	Character* guy1 = new Character(50, 50, 50, "Guy1", "player");
	guy1->addComponent(new SpriteComponent(guy1, "Images/player.png"));
	guy1->getTransform()->setScale({ 50, 50 });

	addActor(guy1);

	
}
