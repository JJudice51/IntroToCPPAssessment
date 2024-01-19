#include "Enemy.h"
#include "Transform2D.h"
#include "Waypoint.h"
#include "MoveComponent.h"
#include "SpawnManager.h"

Enemy::Enemy(float x, float y, float speed) : Character::Character(x, y, speed, "Enemy", "Enemy", "")
{
	//sets the current point that this Enemy is at to null because this Enemy is not in the scene yet.
	m_currentPoint = nullptr;
}

Actor* Enemy::getNearestVisibleTarget()
{
	//returns nullptr if no target is visible.
	return nullptr;
}

Waypoint* Enemy::findNewWaypoint()
{
	//returns nullptr if no waypoint can be found (this should not ever happen)
	return nullptr;
}

void Enemy::update(float deltaTime)
{
	//declares a varible to store the direction that the Enemy will move in
	MathLibrary::Vector2 directionToMove;
	//finds and stores the nearest visible target to the Enemy, if one doesnt exist, it returns nullptr.
	Actor* nearestTarget = getNearestVisibleTarget();

	//if the nearest target doesnt exist or is obscured, the Enemy will track a waypoint instead of a target.
	if(nearestTarget != nullptr)
	{
		//subtracts the nearestTarget's position from the Enemy's position to get the direction to move in, this is then normalized.
	    directionToMove = (nearestTarget->getTransform()->getWorldPosition() - getTransform()->getWorldPosition()).getNormalized();
	}
	else
	{
		//finds and stores the location of the nearest Waypoint in front of the Enemy.
	    m_currentPoint = findNewWaypoint();
	    //creates the new direction to move from the currentPoint's position and this Enemy's position, which is then Normalized.
	    directionToMove = (m_currentPoint->getPosition() - getTransform()->getWorldPosition()).getNormalized();
	}


	//gets a reference to MoveComponent
	MoveComponent* moveComponent = dynamic_cast<MoveComponent*>(getComponent("Move"));

	//changes the direction that this Enemy is facing.
	getTransform()->setForward(directionToMove);
	//moves the Enemy in a specific direction.
	moveComponent->move(directionToMove);

	//calls the base function
	Character::update(deltaTime);
}

void Enemy::end()
{
	//despawns this enemy to be spawned again (to reuse it).
	SpawnManager().despawnEnemy(this);
}
