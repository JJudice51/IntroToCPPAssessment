#include "HealthComponent.h"

HealthComponent::HealthComponent(Actor* owner, const char* name, float maxHealth)
{
	m_health = maxHealth;
}

int HealthComponent::getHealth()
{
	return m_health;
}

void HealthComponent::takeDamage(float damage)
{
	m_health -= damage;
}
