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

	/// <summary>
	/// stores the amount of speed this Character will move every update.
	/// </summary>
	float m_speed;
	

public:
	/// <summary>
	/// constructs a Character at a specific position, with a name, a faction, a sprite, and a collider.
	/// </summary>
	/// <param name="x">the position of the Character on the x axis</param>
	/// <param name="y">the position of the Character on the y axis</param>
	/// <param name="name">the name of the Character</param>
	/// <param name="faction">the faction of the Character</param>
	Character(float x, float y, float speed, const char* name, const char* faction);

	/// <summary>
	/// runs all the code needed at the start of this Character.
	/// </summary>
	void start() override;

	/// <summary>
	/// updates this Character's position by it's current velocity.
	/// </summary>
	/// <param name="deltaTime">the amount of time that has passed between this frame and the last frame.</param>
	void update(float deltaTime) override;
};