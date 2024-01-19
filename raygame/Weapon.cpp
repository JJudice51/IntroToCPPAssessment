#include "Weapon.h"

Weapon::Weapon(Actor* owner, MathLibrary::Vector2 facing, MathLibrary::Vector2 position, float damage, char* name) : Actor::Actor(owner, "Weapon")
{
	//stores the direction that this is facing.
	m_facing = facing;
	//st
	m_position = position;
	m_damage = damage;
	m_name = name;
}
