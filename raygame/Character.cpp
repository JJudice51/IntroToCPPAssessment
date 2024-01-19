#include "Character.h"
#include "HealthComponent.h"
#include "MoveComponent.h"
#include "Transform2D.h"

Character::Character(float x, float y, float speed, const char* name, const char* faction) : Actor::Actor(x, y, name)
{
	//stores the faction that this Character is apart of.
	m_faction = faction;
	//stores the amount of speed that has been given to this Character.
	m_speed = speed;
	//adds a health component
	addComponent(new HealthComponent(this, 100));
	//adds a move component
	addComponent(new MoveComponent(this, m_speed));
};

void Character::start()
{

	//calls the base function
	Actor::start();
}

void Character::update(float deltaTime)
{
	//calls the base function
	Actor::update(deltaTime);
}
