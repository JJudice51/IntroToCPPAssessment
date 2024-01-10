#pragma once
#include "Actor.h"
class Actor

class Transform2D;


class Spawner : public Actor
{
private:
	Actor* m_actorsToAdd;
	

public:

	Spawner();

	/// <summary>
	/// A Spawner's purpose is to create an instance of a pareticular actor and add it to the Scene.
	/// </summary>
	/// <param name="x">position on the x axis that the spawner is located</param>
	/// <param name="y">position on the y axis that the spawner is located</param>
	/// <param name="name">name of the spawner</param>
	/// <param name=""></param>
	Spawner(float x, float y, const char* name);

	/// <summary>
	/// This function creates an instance of the Actor in the parameters list in the scene.
	/// </summary>
	SpawnActor();



};

