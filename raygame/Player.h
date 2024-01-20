#pragma once
#include "Character.h"

class MoveComponent;

class Player :
    public Character
{
private:
    /// <summary>
    /// stores a reference to the MoveComponent this Actor has attached.
    /// </summary>
    MoveComponent* m_movement;
public:
    /// <summary>
    /// constructs a Player Character
    /// </summary>
    /// <param name="x">the position of this Player on the x axis</param>
    /// <param name="y">the position of this Player on the y axis</param>
    /// <param name="speed"></param>
    Player(float x, float y, float speed);

    void start() override;

    void update(float deltaTime) override;

    void end() override;

    void onCollision(Actor* actor) override;
};

