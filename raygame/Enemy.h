#pragma once

#include "Character.h"

class Enemy : public Character
{
private:
	Waypoint*

public:
	Enemy();

	void update(float deltaTime) override;
};