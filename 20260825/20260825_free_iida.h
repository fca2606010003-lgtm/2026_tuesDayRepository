#pragma once
class Example
{
public:
	//‚Á‚Ä‚¢‚éƒf[ƒ^
	int hp = 0;
	int attack = 0;
	int playerX = 0;
	int playerY = 0;

	void Move();
	void Attack();
	void Damage(int damage);
	void ShowStatus();
};