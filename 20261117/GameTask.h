#pragma once
#include<memory>
#include<vector>
#include"EnemyTask.h"
#include"ConfigTask.h"
class GameTask
{
private:
	//enemis‚ğEnemytask‚Æ‹¤—L•Û(?)
	std::vector<std::shared_ptr<EnemyTask>> enemies;
	//‰Šú‰»
	void Init();
	//•`‰æ
	void Draw()const;
	//UŒ‚‚Ìˆ—‚ğs‚¤
	void Attack();
	//HP‚ª0‚É‚È‚Á‚½“G‚ğ‰Šú‰»‚·‚é
	bool IsGameClear()const;
public:
	//ƒQ[ƒ€‚ğ“®‚©‚·
	void Run();
};

