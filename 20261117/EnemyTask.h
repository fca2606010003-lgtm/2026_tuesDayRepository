#pragma once
class EnemyTask
{
private:
	int hp;
public:
	EnemyTask();
	~EnemyTask();

	//ƒ_ƒ[ƒW‚ğó‚¯‚éˆ—
	void Damage(int damage);
	//Hp‚ğæ“¾‚·‚éˆ—
	int GetHp()const;
	//“G‚ª¶‘¶‚µ‚Ä‚¢‚é‚©‚Ì”»’è
	bool IsAlive()const;
};

