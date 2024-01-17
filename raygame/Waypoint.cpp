#include "Waypoint.h"

//initalizes m_waypointCount only once in this space.
int Waypoint::m_waypointCount = 0;

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

Waypoint** Waypoint::getWaypoints()
{
	//checks if there are waypoints.
	if (m_waypointCount > 0)
	{
		//returns a reference to the waypoint array.
		return m_waypoints;
	}

	//if there are no waypoints in m_waypoints, return nullptr.
	return nullptr;
}

void Waypoint::addWaypoint(Waypoint* waypoint)
{
	//if waypoint count is not 0 or null
	if (m_waypointCount > 0)
	{
		//create a tempArray 1 bigger than the last.
		Waypoint** tempArray = new Waypoint * [m_waypointCount + 1];

		//iterate through the old array
		for (int i = 0; i < m_waypointCount; i++)
		{
			//every iteration put a new item into the new array from the old one.
			tempArray[i] = m_waypoints[i];
		}
		//enter the new waypoint to add to the new array
		tempArray[m_waypointCount] = waypoint;
	}
	else
	{
		//else if waypoints is empty, create a new array with waypoint in it to be referenced.
		m_waypoints = new Waypoint * [1] { waypoint };
	}
	//increase the waypoint count because we added one.
	m_waypointCount++;
}

int Waypoint::getLength()
{
	//returns a copy of the variable that stores the amount of waypoints inside of the static waypoint array.
	return m_waypointCount;
}


