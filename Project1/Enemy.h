#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();
	void Approach();
	void Shoot();
	void GetAway();
	void Update();
	void Draw();
private:
	static void(Enemy::* pFuncTable[])();

	int phase_;
};

