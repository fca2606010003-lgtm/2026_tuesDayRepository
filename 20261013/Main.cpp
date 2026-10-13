#include<iostream>
#include"Boss.h"
#include"Enemy.h"
#include"Player.h"
#include"Wizard.h"
#include"BattleManager.h"

int main(void)
{
	Player player("勇者");
	Enemy enemy("スライム");
	Boss boss("魔王");
	Wizard wizrad("魔法使い");
	BattleManager manager;

	manager.StartBattle(&player);
	manager.StartBattle(&enemy);
	manager.StartBattle(&boss);
	manager.StartBattle(&wizrad);
	return 0;
}