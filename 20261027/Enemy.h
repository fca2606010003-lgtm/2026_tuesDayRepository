#pragma once
class Enemy
{
private:
	int pop = 0;

public:
	int hp = 0;
	Enemy(int hp);
	~Enemy();

	int GetHp();
	void Damage(int damage) const;
	void size() const;
	void ShowHp() const;
};