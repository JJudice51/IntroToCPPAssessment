#include "Enemy.h"
#include "Transform2D.h"
#include "Waypoint.h"
#include "MoveComponent.h"

Enemy::Enemy(float x, float y, float speed) : Character::Character(x, y, speed, "Enemy", "Enemy")
{
	//sets the current point that this Enemy is at to null because this Enemy is not in the scene yet.
	m_currentPoint = nullptr;
}

void Enemy::update(float deltaTime)
{
	//creates the new direction to move from the currentPoint's position and this Enemy's position, which is then Normalized.
	MathLibrary::Vector2 directionToMove = (m_currentPoint->getPosition() - getTransform()->getWorldPosition()).getNormalized();
	//gets a reference to MoveComponent
	MoveComponent* moveComponent = dynamic_cast<MoveComponent*>(getComponent("Move"));

	//changes the direction that this Enemy is facing.
	getTransform()->setForward(directionToMove);
	//moves the Enemy in a specific direction.
	moveComponent->move(directionToMove);

	//calls the base function
	Character::update(deltaTime);
}
