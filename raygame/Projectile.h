#pragma once
#include "Actor.h"
#include "Vector2.h"
#include "CircleCollider.h"
class Projectile :
    public Actor
{
private:
    char* m_name;
    MathLibrary::Vector2 m_trajectory;
    float m_despawnTime;
    float m_currentTime;
    CircleCollider* m_collider;
    char* m_faction;

public:
    /// <summary>
    /// constructs a projectile with a name, a faction, a collider, and a time to despawn.
    /// </summary>
    /// <param name="name">the name of the projectile</param>
    /// <param name="faction">the faction this projectile has came from. (no friendly fire)
    /// <param name="m_despawnTime">how long until the projectile despawns.</param>
    Projectile(char* name, char* faction, float m_despawnTime);
    /// <summary>
    /// gives the projectile a new direction and speed to move in.
    /// </summary>
    /// <param name="trajectory">the new direction and speed of the projectile.</param>
    void updateTrajectory(MathLibrary::Vector2 trajectory);
};

