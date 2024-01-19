#pragma once
#include "Scene.h"
#include "Enemy.h"

class MainScene : public Scene
{
private:

public:
	/// <summary>
	/// constructs the main scene where most of the game will take place.
	/// this will be where all actors and things in the main scene exist.
	/// </summary>
	MainScene();
	~MainScene() override;

	/// <summary>
	/// runs code necessary to begin the scene
	/// </summary>
	void start() override;

	/// <summary>
	/// runs code everytime the game loops
	/// updates everything in the current Scene.
	/// </summary>
	/// <param name="deltaTime">the amount of time between the last frame and the current one.</param>
	void update(float deltaTime) override;

	/// <summary>
	/// runs code to quit the scene.
	/// calls deconstructors.
	/// </summary>
	void end() override;
};