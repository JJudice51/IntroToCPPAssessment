#include "Projectile.h"
#include "MoveComponent.h"

Projectile::Projectile(char* name, char* spritePath, Actor* shooter, float speed, float despawnTime) : Actor::Actor(shooter->getTransform()->getWorldPosition().x, shooter->getTransform()->getWorldPosition().y, "Actor")
{
	//stores the name of this projectile
	m_name = name;
	//stores a reference to the shooter of this projectile.
	m_shooter = shooter;
	//stores a copy of the direction that this Projectile will move.
	m_trajectory = MathLibrary::Vector2(0, 0);
	//stores the amount of time that needs to have passed before the Projectile despawns.
	m_despawnTime = despawnTime;
	//stores the amount of time that has been elapsed.
	m_currentTime = 0;
	//adds a move component to this Projectile, set to the given speed.
	addComponent(new MoveComponent(this, speed));
}

void Projectile::updateTrajectory()
{
	//updates the trajectory of the Projectile to be the owner's facing direction.
	m_trajectory = m_shooter->getTransform()->getForward();
}

void Projectile::update(float deltaTime)
{
	//if it is time to "despawn"
	if (m_currentTime >= m_despawnTime)
	{
		//moves the projectile very far away and freezes it.
		getTransform()->setLocalPosition(getTransform()->getLocalPosition() * 5);
		return;
	}
	//increases m_currentTime by the amount of time that has passed since.
	m_currentTime += deltaTime;
	//passes the trajectory of this Projectile to the move function of this it's MoveComponent
	dynamic_cast<MoveComponent*>(getComponent("Move"))->move(m_trajectory);
	//calls the base function and passes in deltaTime.
	Actor::update(deltaTime);
}
