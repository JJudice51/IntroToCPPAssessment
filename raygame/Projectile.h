#pragma once
#include "Actor.h"
#include "Vector2.h"
#include "CircleCollider.h"
class Projectile :
    public Actor
{
private:
    //stores a reference to the array of characters that represent the name of this projectile
    char* m_name;
    //stores a copy of the trajectory of this projectile
    MathLibrary::Vector2 m_trajectory;
    //stores a copy of the amount of time that this projectile should despawn when reached
    float m_despawnTime;
    //stores a copy of the current time that has passed since this projectile has been active
    float m_currentTime;
    //stores a reference to this projectile's collider
    CircleCollider* m_collider;
    //stores a reference to the array of characters that represents this projectiles faction
    Actor* m_shooter;

public:
    /// <summary>
    /// constructs a projectile with a name, a shooter, a collider, and a time to despawn.
    /// </summary>
    /// <param name="name">the name of the projectile</param>
    /// <param name="spritePath">the file path to the image that represents this projectile</param>
    /// <param name="shooter">the Actor that this projectile came from.</param>
    /// <param name="m_despawnTime">how long until the projectile despawns.</param>
    Projectile(char* name, char* spritePath, Actor* shooter, float m_despawnTime);
    /// <summary>
    /// updates the trajectory of the projectile to be the direction that the shooter of this Projectile is facing.
    /// </summary>
    void updateTrajectory();
};

