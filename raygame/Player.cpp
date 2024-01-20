#include "Player.h"
#include "CircleCollider.h"
#include "HealthComponent.h"
#include "MoveComponent.h"
#include "raylib.h"

Player::Player(float x, float y, float speed) : Character::Character(x, y, speed, "Player")
{
	//gives this player a collider.
	setCollider(new CircleCollider(25, this));

	//get a reference to the MoveComponent of this Player.
	m_movement = dynamic_cast<MoveComponent*>(getComponent("Move"));
}

void Player::start()
{
	//scale the Player appropriately.
	m_movement->scale(5);
}

void Player::update(float deltaTime)
{
	//if the W key is being pressed...
	if (RAYLIB_H IsKeyPressed(KEY_W))
	{
		//...move up
		m_movement->move(MathLibrary::Vector2(0, -1));
	}
	//if the A key is being pressed...
	if (RAYLIB_H IsKeyPressed(KEY_A))
	{
		//...move left
		m_movement->move(MathLibrary::Vector2(-1, 0));
	}
	//if the S key is being pressed...
	if (RAYLIB_H IsKeyPressed(KEY_S))
	{
		//...move down
		m_movement->move(MathLibrary::Vector2(0, 1));
	}
	//if the D key is being pressed...
	if (RAYLIB_H IsKeyPressed(KEY_D))
	{
		//...move right
		m_movement->move(MathLibrary::Vector2(1, 0));
	}

	//if the Z key is being pressed...
	if (RAYLIB_H IsKeyPressed(KEY_Z))
	{
		//...get smaller
		m_movement->scale(-1);
	}
	//if the X key is being pressed...
	if (RAYLIB_H IsKeyPressed(KEY_X))
	{
		//...get bigger
		m_movement->scale(1);
	}

	//if the Q key is being pressed...
	if (RAYLIB_H IsKeyPressed(KEY_Q))
	{
		//...rotate left
		m_movement->rotate(-1);
	}
	//if the E key is being pressed...
	if (RAYLIB_H IsKeyPressed(KEY_E))
	{
		//...rotate right
		m_movement->rotate(1);
	}
}

void Player::end()
{
}

void Player::onCollision(Actor* actor)
{
	//get a reference to the Actor's HealthComponent.
	HealthComponent* health = dynamic_cast<HealthComponent*>(actor->getComponent("Health"));

	//reduce the actor that we collided with's health by 100 (all of their health).
	health->takeDamage(100);

	//calls the base function
	Character::onCollision(actor);
}
