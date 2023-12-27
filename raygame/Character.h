#pragma once

#include <Vector2.h>
#include "Actor.h"

class Character : public Actor
{
private:
	/// <summary>
	/// stores a reference to an array of characters that represent the faction of this Character
	/// </summary>
	const char* m_faction;

public:
	/// <summary>
	/// constructs a Character at a specific position, with a name, a faction, a sprite, and a collider.
	/// </summary>
	/// <param name="x">the position of the Character on the x axis</param>
	/// <param name="y">the position of the Character on the y axis</param>
	/// <param name="name">the name of the Character</param>
	/// <param name="faction">the faction of the Character</param>
	Character(float x, float y, const char* name, const char* faction);

	void start();
};