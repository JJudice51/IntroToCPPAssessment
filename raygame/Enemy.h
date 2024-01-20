#pragma once

#include "Character.h"


class Enemy : public Character
{
private:
	

public:
	/// <summary>
	/// constructs an Enemy that inherits from Character at a certain point.
	/// Enemies follow waypoints until they find a Character from an opposing faction to attack.
	/// </summary>
	/// <param name="x">the position that the Enemy will spawn on the X axis.</param>
	/// <param name="y">the position that the Enemy will spawn on the y axis.</param>
	/// <param name="speed">the speed that the Enemy will move.</param>
	Enemy(float x, float y, float speed);




	/// <summary>
	/// computes pathfinding for the Enemy.
	/// </summary>
	/// <param name="deltaTime">the amount of time that has passed between the last frame and the current one.</param>
	void update(float deltaTime) override;

	
};