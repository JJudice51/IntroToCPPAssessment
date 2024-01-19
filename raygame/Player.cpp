#include "Player.h"
#include "MoveComponent.h"
#include "HealthComponent.h"
#include "SpriteComponent.h"
#include "raylib.h"





Player::Player(float x, float y, float speed, const char* name, const char* faction, const char* spritepath) : Character::Character(x,y,speed,name,faction, spritepath)
{

	m_health = dynamic_cast<HealthComponent*>(getComponent("Health"));
	m_movement = dynamic_cast<MoveComponent*>(getComponent("Move"));
	m_sprite = dynamic_cast<SpriteComponent*>(getComponent("Sprite"));
}

/// <summary>
/// allows player to move utilizing the movement functions 
/// </summary>
void Player::update(float deltaTime)
{
	if (RAYLIB_H IsKeyPressed(KEY_W))
	{
		m_movement->move(MathLibrary::Vector2(0, -1));
	}
	else if (RAYLIB_H IsKeyPressed(KEY_A))
	{
		m_movement->move(MathLibrary::Vector2(-1, 0));
	}
	else if(RAYLIB_H IsKeyPressed(KEY_S))
	{
		m_movement->move(MathLibrary::Vector2(0, 1));
	}
	else if(RAYLIB_H IsKeyPressed(KEY_D))
	{
		m_movement->move(MathLibrary::Vector2(1, 0));
	}




	//base update function
	Character::update(deltaTime);
}
