#pragma once

#include <Vector2.h>
#include "Actor.h"

class Character : public Actor
{
private:
	/// <summary>
	/// stores the amount of speed this Character will move every update.
	/// </summary>
	float m_speed;

	/// <summary>
	/// stores a reference to the chars that represent the directory
	/// for the png that represents this Character.
	/// </summary>
	const char* m_spritePath;

public:
	/// <summary>
	/// constructs a Character at a specific position, with a name, a faction, a sprite, and a collider.
	/// </summary>
	/// <param name="x">the position of the Character on the x axis</param>
	/// <param name="y">the position of the Character on the y axis</param>
	/// <param name="spritePath">the  chars representing the directory of the png for this characters sprite</param>
	/// <param name="name">the name of the Character</param>
	/// <param name="faction">the faction of the Character</param>
	Character(float x, float y, float speed, const char* spritePath, const char* name);

	/// <summary>
	/// runs all the code needed at the start of this Character.
	/// </summary>
	void start() override;

	/// <summary>
	/// updates this Character's position by it's current velocity.
	/// </summary>
	/// <param name="deltaTime">the amount of time that has passed between this frame and the last frame.</param>
	void update(float deltaTime) override;

	/// <summary>
	/// destroys this character and their components once they are no longer in use.
	/// </summary>
	void end() override;
};