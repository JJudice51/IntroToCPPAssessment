#pragma once
#include "Character.h"
class Player :
    public Character
{
private:
    MoveComponent* m_movement;
public:
    
    Player(float x, float y, float speed);

    void start() override;

    void update(float deltaTime) override;

    void end() override;

    void onCollision(Actor* actor) override;
};

