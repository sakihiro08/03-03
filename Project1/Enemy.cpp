#include "Enemy.h"
#include<stdio.h>
void(Enemy::*Enemy::pFuncTable[])() =
{
	&Enemy::Approach,
	&Enemy::Shoot,
	&Enemy::GetAway
};
Enemy::Enemy()
{
	phase_ = 0;
}

Enemy::~Enemy()
{
}

void Enemy::Approach()
{
	printf("‹ß‚¸ƒN\n");
}

void Enemy::Shoot()
{
	printf("ŽËŒ‚\n");
}

void Enemy::GetAway()
{
	printf("—£’E\n");
}

void Enemy::Update()
{
	printf("phase_:%d\n");
	(this->*pFuncTable[phase_])();
	phase_++;
	if (phase_ >2)
	{
		phase_ = 0;
	}
}

void Enemy::Draw()
{
	printf("(enemy draw)\n");
}
