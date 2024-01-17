#pragma once
#include "Component.h"

class HealthComponent : public Component
{
private:

	/// <summary>
	/// stores the amount of health that the Actor, that this is attached to, has.
	/// </summary>
	float m_health;
public:

	/// <summary>
	/// constructs a Component that keeps track of a Actor's health.
	/// </summary>
	/// <param name="owner">the owner of this Component</param>
	/// <param name="maxHealth">the maximum amount of health that this Actor can have.</param>
	HealthComponent(Actor* owner, float maxHealth);

	/// <summary>
	/// gets the health value of the Actor that this is attached to.
	/// </summary>
	/// <returns>the value of health that this Actor has.</returns>
	float getHealth() { return m_health; }

	/// <summary>
	/// reduces the Actor (that this is attached to)'s health by a specific amount.
	/// </summary>
	/// <param name="damage">the amount to reduce this Actor's health.</param>
	void takeDamage(float damage);
};