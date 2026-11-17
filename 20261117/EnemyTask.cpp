#include "EnemyTask.h"
#include"ConfigTask.h"

EnemyTask::EnemyTask():hp(ConfigTask::ENEMY_HP){}//<-‚±‚ê•ª‚©‚ç‚È‚¢
EnemyTask::~EnemyTask(){}						 //<-‚±‚ê•ª‚©‚ç‚È‚¢

void EnemyTask::Damage(int damage) //‚ˆ‚‚ª‚OˆÈ‰º‚É‚È‚é‚Æ‚O‚É‚·‚é
{
	hp -= damage;
	if (hp < 0)
	{
		hp = 0;
	}
}

int EnemyTask::GetHp()const
{
	return hp;
}

bool EnemyTask::IsAlive()const//hp‚ª‚PˆÈã‚Ìê‡A¶‘¶”»’è‚ð‚·‚é
{
	return hp>0;
}
