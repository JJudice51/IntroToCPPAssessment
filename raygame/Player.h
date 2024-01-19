#pragma once
#include "Character.h"

class HealthComponent;
class MoveComponent;
class Player : public Character
{
private:
	HealthComponent* m_health;
	MoveComponent* m_movement;
	
	
	
public:
	/// <summary>
	/// Coonstructor for player
	/// </summary>
	Player(float x, float y, float speed, const char* name, const char* faction);


	/// <summary>
	/// updates this Player's position by it's current velocity.
	/// </summary>
	/// <param name="deltaTime">the amount of time that has passed between this frame and the last frame.</param>
	void update(float deltaTime) override;

	






};

