#pragma once
#include "Component.h"

class HealthComponent : public Component
{
private:

	float m_health;
public:

	HealthComponent(Actor* owner, const char* name, float maxHealth);
	int getHealth();
	void takeDamage(float damage);
};