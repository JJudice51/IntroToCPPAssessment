#include "Character.h"
#include "HealthComponent.h"

Character::Character(float x, float y, const char* name, const char* faction) : Actor::Actor(x, y, name)
{
	m_faction = faction;
};

void Character::start()
{
	addComponent(new HealthComponent(this, "Health", 100));
	Actor().start();
}
