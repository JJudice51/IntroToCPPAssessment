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
	/// <param name="direction">the direction to move the Actor.</param>
	void move(MathLibrary::Vector2 direction);

	/// <summary>
	/// rotates the Actor that this component is attached to.
	/// </summary>
	/// <param name="radians">amount in radians to rotate the Actor.</param>
	void rotate(float radians);

	/// <summary>
	/// scales the Actor that this component is attached to.
	/// </summary>
	/// <param name="scalar">the amount to scale the player.</param>
	void scale(float scalar);

};