#include "Character.h"
#include "HealthComponent.h"
#include "MoveComponent.h"
#include "Transform2D.h"

Character::Character(float x, float y, float speed, const char* name, const char* faction) : Actor::Actor(x, y, name)
{
	m_faction = faction;
	m_speed = speed;
};

void Character::start()
{
	addComponent(new HealthComponent(this, "Health", 100));
	addComponent(new MoveComponent(this, 50));
	Actor::start();
}

void Character::update(float deltaTime)
{
	Actor::update(deltaTime);
}
