#include "HealthComponent.h"

HealthComponent::HealthComponent(Actor* owner, float maxHealth) : Component::Component(owner, "Health")
{
	//gives the starting health to the HealthComponent to keep track of it.
	m_health = maxHealth;
}

void HealthComponent::takeDamage(float damage)
{
	//reduces the health that this Component is keeping track of by a specific amount.
	m_health -= damage;
}
