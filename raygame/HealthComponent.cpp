#include "HealthComponent.h"

HealthComponent::HealthComponent(Actor* owner, float maxHealth) : Component::Component(owner, "Health")
{
	m_health = maxHealth;
}

void HealthComponent::takeDamage(float damage)
{
	m_health -= damage;
}
