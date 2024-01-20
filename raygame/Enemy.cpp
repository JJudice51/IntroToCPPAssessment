#include "Enemy.h"
#include "Transform2D.h"
#include "MoveComponent.h"


Enemy::Enemy(float x, float y, float speed) : Character::Character(x, y, speed, "Enemy")
{

}


void Enemy::update(float deltaTime)
{
	//base class update function
	Character::update(deltaTime);
}


