
#include "MoveComponent.h"
#include "Actor.h"

MoveComponent::MoveComponent(Actor* owner, float speed) : Component::Component(owner, "Move")
{
	m_owner = owner;
	m_speed = speed;
}

void MoveComponent::move(MathLibrary::Vector2 direction)
{
	m_owner->getTransform()->translate(direction * m_speed);
}

void MoveComponent::setFacing(MathLibrary::Vector2 direction)
{
	direction.normalize();
	m_owner->getTransform()->setForward(direction);
}

void MoveComponent::rotate(float radians)
{
	m_owner->getTransform()->rotate(radians);
}

void MoveComponent::update(float deltaTime)
{

	Component::update(deltaTime);
}