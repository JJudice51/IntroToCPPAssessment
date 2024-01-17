#include "Weapon.h"

Weapon::Weapon(Actor* owner, MathLibrary::Vector2 facing, MathLibrary::Vector2 position, float damage, char* name)
{
	m_owner = owner;
	m_facing = facing;
	m_position = position;
	m_damage = damage;
	m_name = name;
}
