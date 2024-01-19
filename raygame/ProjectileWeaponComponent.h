#pragma once
#include "WeaponComponent.h"
#include "Projectile.h"
#include "Spawner.h"
#include "Character.h"
class ProjectileWeapon :public WeaponComponent
{
private:
	Character* m_owner;
	Spawner* m_projectileSpawner;
	Projectile* m_bullet;


public:
	
	ProjectileWeaponComponent(Character* owner, Spawner* projectileSpawner);


};

