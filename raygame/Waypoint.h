#pragma once
#include "Vector2.h"
#include "ActorArray.h"

static class Waypoint
{
private:
	/// <summary>
	/// stores the position of this Waypoint
	/// </summary>
	MathLibrary::Vector2 m_position;
	/// <summary>
	/// references the array that references the waypoints that have been created.
	/// </summary>
	static Waypoint** m_waypoints;
	/// <summary>
	/// the amount of waypoints that are stored inside of the static waypoint array.
	/// defined and initialized at the top of the .cpp.
	/// </summary>
	static int m_waypointCount;
public:
	/// <summary>
	/// constructs a Waypoint at a designated position
	/// </summary>
	/// <param name="x">position of the Waypoint on the x axis</param>
	/// <param name="y">position of the Waypoint on the y axis</param>
	Waypoint(float x, float y);
	~Waypoint();
	/// <summary>
	/// gets the position of this Waypoint
	/// </summary>
	/// <returns>a Vector2 representing this Waypoint's position</returns>
	MathLibrary::Vector2 getPosition();
	/// <summary>
	/// gets a reference the the static waypoint array.
	/// </summary>
	/// <returns>a reference to m_waypoints</returns>
	static Waypoint** getWaypoints();
	/// <summary>
	/// adds a waypoint to the static waypoint array.
	/// </summary>
	/// <param name="waypoint">the waypoint to add to the static waypoint array</param>
	static void addWaypoint(Waypoint* waypoint);
	/// <summary>
	/// gets the length of the static waypoint array
	/// </summary>
	/// <returns>the length of the static array inside of the Waypoint class.</returns>
	static int getLength();
};