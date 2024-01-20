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
    /// <param name="speed">the speed of the Player</param>
    /// <param name="spritePath">the path that the png for this Player sprite is located.</param>
    Player(float x, float y, float speed, const char* spritePath);

    /// <summary>
    /// this callse the base character start() function.
    /// </summary>
    void start() override;
    /// <summary>
    /// During update function when a player can receive inputs via keybinds through Raylib that allow for movement, rotation and scaling of the...
    ///... player. The update function will change the current translation, rotation, and scale of the player based on these inputs.
    /// </summary>
    /// <param name="deltaTime">the time between the previous update and the current one.</param>
    void update(float deltaTime) override;

    /// <summary>
    /// this calls the base character end() function.
    /// </summary>
    void end() override;

    /// <summary>
    /// When collision is detected the Actor being damaged takes an amount of damage specified based on that actors healthcomponent. if the damage...
    /// taken is higher than the healthcomponent value then that actor "dies" and is removed from the scene.
    /// </summary>
    /// <param name="actor">The actor the player collides with.</param>
    void onCollision(Actor* actor) override;
};

