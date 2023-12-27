#pragma once
#include "Vector2.h"

static class Waypoint
{
private:
	/// <summary>
	/// stores the position of this Waypoint
	/// </summary>
	MathLibrary::Vector2 m_position;

public:
	/// <summary>
	/// constructs a Waypoint at a designated position
	/// </summary>
	/// <param name="x">position of the Waypoint on the x axis</param>
	/// <param name="y">position of the Waypoint on the y axis</param>
	Waypoint(float x, float y);
	/// <summary>
	/// gets the position of this Waypoint
	/// </summary>
	/// <returns>a Vector2 representing this Waypoint's position</returns>
	MathLibrary::Vector2 getPosition();
};