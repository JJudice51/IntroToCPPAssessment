#include "Projectile.h"
#include "Transform2D.h"

Projectile::Projectile(char* name, char* spritePath, Actor* shooter, float despawnTime) : Actor::Actor
{
	Actor(*(shooter)).getTransform().getWorldPosition()->x, (*(shooter)).getTransform().getWorldPosition()->y, "Actor");
	m_name = name;
	m_shooter = shooter;
	
	m_collider = new CircleCollider(25, this);
	m_trajectory = MathLibrary::Vector2(0, 0);
	m_despawnTime = despawnTime;
	m_currentTime = 0;
}

void Projectile::updateTrajectory(MathLibrary::Vector2 trajectory)
{
	m_trajectory = trajectory;
}
