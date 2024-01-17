#pragma once
#include "Actor.h"
#include "Vector2.h"




class Spawner : public Actor
{
private:
	/// <summary>
	/// Stores referrence to Actor that needs to be creted and added to scene in the SpawnActor function.
	/// </summary>
	Actor** m_actorsToAdd;
	Actor* m_owner;
	MathLibrary::Vector2 m_facing;
	MathLibrary::Vector2 m_position;

	
	

public:
	/// <summary>
	/// Constructs a spawner attached to an owner.
	/// </summary>
	/// <param name="owner">the Actor this given instance of a spawner is attached to.</param>
	/// <param name="x">the position the spawner is on the x axis rtelative to the owner.</param>
	/// <param name="y">the position the spawner is on the y axis rtelative to the owner.</param>
	Spawner(Actor* owner, float x, float y);

	/// <summary>
	/// Constructs a spawner with a glaobl position and a direction to face. Is a part of a spawn group.
	/// </summary>
	/// <param name="facing">the direction the spawner is facing</param>
	/// <param name="x">position on the x axis that the spawner is located</param>
	/// <param name="y">position on the y axis that the spawner is located</param>
	Spawner(MathLibrary::Vector2 facing, float x, float y);

	/// <summary>
	/// Changes the location and facing direction of the Actor to be spawned.
	/// </summary>
	///  <param name="spawnee">the Actor who gets spawned</param>
	void Spawn(Actor* spawnee);

	/// <summary>
	/// Change the Facing of the spawner according to the owner if it has one.
	/// </summary>
	void updateSpawner();

};

