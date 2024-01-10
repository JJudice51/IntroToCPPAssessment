#include "Projectile.h"
#include "Transform2D.h"

Projectile::Projectile(char* name, char* spritePath, Actor* shooter, float despawnTime) : Actor::Actor(shooter->getTransform()->getWorldPosition().x, shooter->getTransform()->getWorldPosition().y, "Actor")
{
	//stores the name of the Projectile
	m_name = name;
	//stores a reference to the shooter of the Projectile
	m_shooter = shooter;
	
	//stores the trajectory of the Projectile
	m_trajectory = MathLibrary::Vector2(0, 0);
	//keeps track of the point in time that the Projectile is supposed to despawn.
	m_despawnTime = despawnTime;
	//keeps track of the current point in time.
	m_currentTime = 0;
}

void Projectile::updateTrajectory()
{
	//get and store the normalized direction that the shooter is facing in.
	m_trajectory = (m_shooter->getTransform()->getForward()).getNormalized();
}
