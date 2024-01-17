#pragma once
#include "Component.h"
#include "Transform2D.h"
#include "CircleCollider.h"
#include "AABBCollider.h"

class WeaponComponent : public Component
{

private:
	//the Actor who owns a given WeaponComponent.
	Actor* m_owner;


public:

	/// <summary>
	/// Constructs a WeaponComponent for a given Actor. A WeaponCopmpponent should allow an Actor to do damage to another Actor of a different faction in the game.
	/// </summary>
	/// <param name="owner">The actor who owns this weapon component</param>
	WeaponComponent(Actor* owner);







	//make it so that whoever has the weapon component can wield a weapon.





};