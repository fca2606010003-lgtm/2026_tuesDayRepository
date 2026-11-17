#include "GameTask.h"
#include<iostream>
#include<limits>
#include"ConfigTask.h"

void GameTask::Init()//初期化する処理だろうということしかわからない
{
	for (int i = 0;i < ConfigTask::ENEMY_COUNT; i++)
	{
		enemies.push_back(std::make_shared<EnemyTask>());
	}
}

void GameTask::Draw()const//全体を描画
{
	std::cout << "敵:";
	for (int i = 0; i < enemies.size(); i++)
	{
		if (enemies[i]->IsAlive())//enemiesに共有されている３体分のデータを参照＆表示
		{
			std::cout << "敵" << i + 1 << "HP" << enemies[i]->GetHp() << "\n";
		}
		else//hpが０になるとテキストを書き換え
		{
			std::cout << "撃破済み\n";
		}
	}
}

void GameTask::Attack()
{
	int target;
	std::cout << "攻撃する敵を選択してください\n";
	if (!(std::cin >> target))
	{
		std::cout << "数字を入力してください \n";
		std::cin.clear();//不正なデータをリセット
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');//AIによると、次の改行に達するまで文字を破棄するらしい

		return;
	}

	

	if (target<1 || target>ConfigTask::ENEMY_COUNT)//１～３以外の時
	{
		std::cout << "入力した数字は選択できません、再度入力したください\n";
		return;
	}
	//共有していたのを呼び出している？
	std::shared_ptr<EnemyTask> targetEnemy = enemies[target - 1];

	if (!targetEnemy->IsAlive())//すでに死んでいる敵に対して攻撃処理が行われているとき
	{
		std::cout <<"個の敵はすでに倒されています\n";
		return;
	}
	std::cout << "攻撃する敵は" << target << "です\n";

	targetEnemy->Damage(ConfigTask::DAMEGE);
	std::cout << "敵" << target << "に戦闘ダメージ" << ConfigTask::DAMEGE << "を与えました\n";
}

bool GameTask::IsGameClear()const//死んでいる敵の処理をとばす
{
	for (const auto& enemy : enemies)
	{
		if (enemy->IsAlive())
		{
			return false;
		}
	}

	return true;
}

void GameTask::Run()//ゲームを動かせる
{
	Init();
	while (true)
	{
		Draw();

		Attack();
		if (IsGameClear())//ゲームクリアー
		{
			std::cout << "GameClear\n";
			break;
		}
	}
}