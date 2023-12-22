#include "Projectile.h"

Projectile::Projectile(char* name, char* spritePath, char* faction, float despawnTime) : Actor::Actor
{
	Actor();
	m_name = name;
	m_faction = faction;
	
	m_collider = new CircleCollider(25, this);
	m_trajectory = MathLibrary::Vector2(0, 0);
	m_despawnTime = despawnTime;
	m_currentTime = 0;
}

void Projectile::updateTrajectory(MathLibrary::Vector2 trajectory)
{
	m_trajectory = trajectory;
}
