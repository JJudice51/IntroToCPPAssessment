#pragma once
#include "Component.h"
#include "Transform2D.h"

//forward declare weapon to avoid circular dependancy.
class Weapon;

class WeaponComponent : public Component
{
private:
	//stores a reference to the Actor who owns a given WeaponComponent.
	Actor* m_owner;
	//stores a reference to the Weapon that this Actor 
	Weapon* m_equippedWeapon;

public:
	/// <summary>
	/// Constructs a WeaponComponent for a given Actor. A WeaponComponent should allow an Actor to do damage to another Actor, of a different faction, in the game.
	/// </summary>
	/// <param name="owner">The Actor who owns this Weapon Component</param>
	WeaponComponent(Actor* owner);

	/// <summary>
	/// Constructs a WeaponComponent for a given Actor. A WeaponComponent should allow an Actor to do damage to another Actor, of a different faction, in the game.
	/// </summary>
	/// <param name="owner">The actor who owns this weapon component</param>
	/// <param name="weapon">The weapon that will be equipped to the Actor, who owns this component.</param>
	WeaponComponent(Actor* owner, Weapon* weapon);

	/// <summary>
	/// gets the equipped Weapon of the Actor that this is attached to.
	/// </summary>
	/// <returns>a reference to the Weapon that the Actor, this is attached to, has equipped.</returns>
	Weapon* getWeapon();

	/// <summary>
	/// stores a reference, to this Weapon, in WeaponComponent.
	/// </summary>
	/// <param name="weapon">the Weapon to store in WeaponComponent.</param>
	void setWeapon(Weapon* weapon);
};
