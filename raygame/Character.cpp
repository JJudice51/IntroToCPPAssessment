#include "Character.h"
#include "HealthComponent.h"
#include "Transform2D.h"

Character::Character(float x, float y, float speed, const char* name, const char* faction) : Actor::Actor(x, y, name)
{
	m_faction = faction;
	m_speed = speed;
};

void Character::start()
{
	addComponent(new HealthComponent(this, "Health", 100));
	Actor::start();
}

void Character::update(float deltaTime)
{
	Transform2D* transform = getTransform();
	transform->translate(transform->getForward() * m_speed);
	Actor::update(deltaTime);
}
