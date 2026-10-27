#pragma once
class Enemy
{
private:
	int hp=0;
	int pop = 0;
public:
	Enemy(int hp);
	~Enemy();


	void size() const;
	void ShowHp() const;
};