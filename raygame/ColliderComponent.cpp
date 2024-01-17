#include "ColliderComponent.h"

ColliderComponent::ColliderComponent(float radius, Actor* owner)
{
	m_owner = owner;
	m_radius = radius;
}


