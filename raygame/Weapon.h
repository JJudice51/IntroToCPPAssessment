#pragma once
#include "Actor.h"
#include "Transform2D.h"

class Weapon : public Actor
{

private:
	//owner of the weapon
	Actor* m_owner;

	//value of how much damage a given weapon does
	float m_damage;
	
	//current direction the weapon is pointing in
	MathLibrary::Vector2 m_facing;
	
	//location of the weapon on the game board in the scene
	MathLibrary::Vector2 m_position;
	
	//name of the weapon. 
	char* m_name;




public:

	/// <summary>
	/// constructs a Weapon which is an actor that is created to do damage to other actors inside the game
	/// </summary>
	/// <param name="owner">Actor who controls this weapon</param>
	/// <param name="facing">current direction the weapon is pointing in.</param>
	/// <param name="position">location of the weapon on the game board</param>
	/// <param name="damage">how much this weapon brings down the heatlh value of an actor the owner uses it on</param>
	/// <param name="name">what the weapon is called</param>
	Weapon(Actor* owner, MathLibrary::Vector2 facing, MathLibrary::Vector2 position, float damage, char* name);

};

