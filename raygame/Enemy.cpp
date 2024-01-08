#include "Enemy.h"

Enemy::Enemy(float x, float y) : Character::Character(x, y, "Enemy", "Enemy")
{
	m_currentPoint = nullptr;
}
