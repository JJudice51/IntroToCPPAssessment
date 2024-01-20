
#include "MoveComponent.h"
#include "Actor.h"

MoveComponent::MoveComponent(Actor* owner, float speed) : Component::Component(owner, "Move")
{
	//stores the reference to the owner of this Component
	m_owner = owner;
	//stores the amount of speed that will scale the owner's velocity.
	m_speed = speed;
}

void MoveComponent::move(MathLibrary::Vector2 direction)
{
	//make sure that the direction given is normalized.
	direction.normalize();
	//aquires a reference to the owner's transform.
	Transform2D* transform = m_owner->getTransform();
	//transforms the owner of this Component's LocalPosition by the new Velocity.
	transform->setLocalPosition(transform->getLocalPosition() + /*Velocity*/(direction * m_speed));
}


void MoveComponent::rotate(float radians)
{
	//rotates the owner's transform by a given amount of radians.
	m_owner->getTransform()->rotate(radians);
}

void MoveComponent::scale(float scalar)
{
	//scales the owner's transform by a given amount.
	m_owner->getTransform()->scale(MathLibrary::Vector2(scalar, scalar));
}
