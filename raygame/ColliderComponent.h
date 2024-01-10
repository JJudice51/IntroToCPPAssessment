#pragma once
#include "Component.h"
#include "CircleCollider.h"



class ColliderComponent :
    public Component
{

private:
    Actor* m_owner;
    float m_radius;


public:
   
    /// <summary>
    /// Collider Component stores the collider data for any Actor that has an collider attached to them.
    /// </summary>
    /// <param name="owner">owner of the collider that this component is tracking for a given actor</param>
    ColliderComponent(Actor* owner);

    ColliderComponent(float radius, Actor* owner);




};

