#pragma once

#include "Component.h"
#include "Transform2D.h"

class MoveComponent : public Component
{
private:
	/// <summary>
	/// stores the amount of speed to scale the amount of velocity that will be given to the Actor that this is attached to.
	/// </summary>
	float m_speed;

	/// <summary>
	/// stores a reference to the owner of this component.
	/// </summary>
	Actor* m_owner;

public:
	/// <summary>
	/// constructs a component that is responsible for giving an Actor movement.
	/// </summary>
	/// <param name="owner">the owner of this component.</param>
	/// <param name="speed">the magnitude of distance that the Actor will cover every frame.</param>
	MoveComponent(Actor* owner, float speed);

	/// <summary>
	/// moves the Actor that this is attached to in a certain direction.
	/// </summary>
	void move(MathLibrary::Vector2 direction);

	/// <summary>
	/// changes the direction that the Actor that this is attached to is facing.
	/// </summary>
	/// <param name="direction">the direction to move the Actor.</param>
	void setFacing(MathLibrary::Vector2 direction);

	/// <summary>
	/// rotates the Actor that this component is attached to.
	/// </summary>
	/// <param name="radians">amount in radians to rotate the Actor.</param>
	void rotate(float radians);

	/// <summary>
	/// updates the position of the Actor that this is attached to, then resets velocity to move.
	/// </summary>
	/// <param name="deltaTime">the amount of time that has passed between the current and last frame.</param>
	void update(float deltaTime) override;
};