#include "Enemy.h"
#include "Transform2D.h"
#include "Waypoint.h"

Enemy::Enemy(float x, float y, float speed) : Character::Character(x, y, speed, "Enemy", "Enemy")
{
	m_currentPoint = nullptr;
}

void Enemy::update(float deltaTime)
{
	MathLibrary::Vector2 directionToMove = (m_currentPoint->getPosition() - getTransform()->getWorldPosition()).getNormalized();
	getTransform()->setForward(directionToMove);
	Character::update(deltaTime);
}
