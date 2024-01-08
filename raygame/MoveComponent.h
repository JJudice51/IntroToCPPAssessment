#pragma once

#include "Component.h"
#include "Transform2D.h"

class MoveComponent : public Component
{
private:
	/// <summary>
	/// stores the velocity to be added to the Actor this is attached to.
	/// </summary>
	MathLibrary::Vector2 m_velocity;

	/// <summary>
	/// stores a reference to the owner of this component.
	/// </summary>
	Actor* m_owner;

public:
	/// <summary>
	/// constructs a component that is responsible for giving an Actor movement.
	/// </summary>
	/// <param name="owner">the owner of this component.</param>
	MoveComponent(Actor* owner);

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