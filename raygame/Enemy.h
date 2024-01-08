#pragma once

#include "Character.h"
class Waypoint;

class Enemy : public Character
{
private:
	/// <summary>
	/// stores a reference to the Waypoint the Enemy is currently targeting.
	/// </summary>
	Waypoint* m_currentPoint;

public:
	Enemy(float x, float y);

	/// <summary>
	/// computes pathfinding for the Enemy.
	/// </summary>
	/// <param name="deltaTime">the amount of time that has passed between the last frame and the current one.</param>
	void update(float deltaTime) override;
};