#include "Waypoint.h"

Waypoint::Waypoint(float x, float y)
{
	m_position = MathLibrary::Vector2(x, y);
}

MathLibrary::Vector2 Waypoint::getPosition()
{
	return m_position;
}

