#pragma once
#include "Actor.h"
#include "Transform2D.h"
class Weapon : public Actor
{

private:
	Actor* m_owner;
	float m_damage;
	MathLibrary::Vector2 m_facing;
	MathLibrary::Vector2 m_position;
	char* m_name;




public:


};

