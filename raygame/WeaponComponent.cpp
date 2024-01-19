#include "WeaponComponent.h"
#include "Weapon.h"

WeaponComponent::WeaponComponent(Actor* owner) : Component::Component(owner, "Weapon")
{
	//stores a reference to the owner of this Component.
	m_owner = owner;
	//gives a default value to m_equippedWeapon
	m_equippedWeapon = nullptr;
}

WeaponComponent::WeaponComponent(Actor* owner, Weapon* weapon) :  Component::Component(owner, "Weapon")
{
	//stores a reference to the owner of this component
	m_owner = owner;
	//stores a reference to the weapon that the Actor, that owns this component, has equipped.
	m_equippedWeapon = weapon;
}

Weapon* WeaponComponent::getWeapon()
{
	//returns the Weapon that the Actor, that this is attached to, has equipped.
	return m_equippedWeapon;
}

void WeaponComponent::setWeapon(Weapon* weapon)
{
	//store the reference location in weapon to m_equippedWeapon
	m_equippedWeapon = weapon;
}


