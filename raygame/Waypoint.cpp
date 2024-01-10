#include "Waypoint.h"

Waypoint::Waypoint(float x, float y)
{
	//stores the position given to this Waypoint upon construction.
	m_position = MathLibrary::Vector2(x, y);
}

MathLibrary::Vector2 Waypoint::getPosition()
{
	//returns the position of this Waypoint.
	return m_position;
}

