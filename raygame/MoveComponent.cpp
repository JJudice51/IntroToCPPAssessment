
#include "MoveComponent.h"
#include "Actor.h"

MoveComponent::MoveComponent(Actor* owner) : Component::Component(owner, "Move")
{
	m_owner = owner;
	m_velocity = MathLibrary::Vector2(0, 0);
}

void MoveComponent::rotate(float radians)
{
	m_owner->getTransform()->rotate(radians);
}

void MoveComponent::update(float deltaTime)
{
	m_owner->getTransform()->setWorldPosition((m_owner->getTransform()->getWorldPosition()) + m_velocity);
	m_velocity = MathLibrary::Vector2(0, 0);
	Component::update(deltaTime);
}