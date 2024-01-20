#include "Enemy.h"
#include "Transform2D.h"
#include "Waypoint.h"
#include "MoveComponent.h"
#include "SpawnManager.h"

Enemy::Enemy(float x, float y, float speed) : Character::Character(x, y, speed, "Enemy", "Enemy")
{

}


void Enemy::update(float deltaTime)
{
	//base class update function
	Character::update(deltaTime);
}


