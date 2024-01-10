#pragma once
#include "Actor.h"


class Transform2D;


class Spawner : public Actor
{
private:
	
	Actor m_owner;




public:

	Spawner(Actor owner);




};

