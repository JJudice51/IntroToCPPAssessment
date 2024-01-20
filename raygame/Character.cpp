#include "Character.h"
#include "HealthComponent.h"
#include "MoveComponent.h"
#include "Transform2D.h"
#include "Engine.h"

Character::Character(float x, float y, float speed, const char* name) : Actor::Actor(x, y, name)
{
	//stores the amount of speed that has been given to this Character.
	m_speed = speed;
};

void Character::start()
{
	//adds a health component
	addComponent(new HealthComponent(this, 100));
	//adds a move component
	addComponent(new MoveComponent(this, m_speed));
	//calls the base function
	Actor::start();
}

void Character::update(float deltaTime)
{
	//stores a reference to the HealthComponent of this Character.
	//casting is required to call HealthComponent functions.
	HealthComponent* hP = dynamic_cast<HealthComponent*>(getComponent("Health"));
	//check if this Character's HealthComponent's getHealth() function returns number lower than 0.1f.
	if (hP->getHealth() < 0.1)
	{
		//end this Character if they run out of health points.
		//if this is an enemy, it despawns them, else they are destroyed.
		end();
		//returns this function once end() is complete.
		return;
	}
	//else if this Character is alive,
	//call the base function
	Actor::update(deltaTime);
}

void Character::end()
{
	//queue this Character for deletion, because they are dead.
	//the following end() function should happen before this Actor is finally deleted.
	Engine().addActorToDeletionList(this);
	//calls base end() which calls end() for
	//all components attached to this Actor.
	Actor::end();
}
