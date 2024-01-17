#include "Spawner.h"
#include "Transform2D.h"

Spawner::Spawner(Actor* owner, float x, float y)
{
	//stores reference to the owner of this spawner
	m_owner = owner;

	//stores the position of this spawner
	m_position = { x, y };
}

Spawner::Spawner(MathLibrary::Vector2 facing, float x, float y)
{
	//stores reference to the owner of this spawner
	m_owner = nullptr;
	//stores the current direction the spawner is facing
	m_facing = facing;
	//stores the position of this spawner
	m_position = { x, y };
}

void Spawner::spawn(Actor* spawnee)
{
	//makes the position of the spawnee the same as the spawner
	spawnee->getTransform()->setWorldPosition(m_position);
	//makes the facing of the spawnee the same as the spawner
	spawnee->getTransform()->setForward(m_facing);
}

void Spawner::updateSpawner()
{
	//if there is no owner then this function will return.
	if (m_owner == nullptr)
		return;
	//this makes the facing of the spawner the same as it's owners.
	m_facing = m_owner->getTransform()->getForward();
}

void Spawner::updateFacing(MathLibrary::Vector2 facing)
{
	//this changes the original facing of the spawner to the new value given in the parameters.
	m_facing = facing;

}




