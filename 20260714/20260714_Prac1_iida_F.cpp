/*ゲーム開始時に、0～50までのランダムな数字を10個用意します。
プレイヤーとCPUは、その中から1つの数字を選択します。
数字の大きさを比較し、大きい数字を出した方に3点加算します。
同じ数字だった場合は、プレイヤーとCPUの両方に1点加算します。
この勝負を7回繰り返します。
7回終了後、得点の高い方を勝者とします。
　プログラミングの仕様
プレイヤーは、1～10番の中から番号を入力して数字を選択してください。
CPUは、ランダムに番号を選択してください。
一度選択した番号は、プレイヤー・CPUともに再度選択できません。
毎回、選択した数字・勝敗・現在の得点を表示してください。
7回の勝負が終了したら、最終得点と勝者を表示してください。
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_Prac1_iida.H"

int InputCheck()//入力チェック
{
	int PLAYER=0;
	while (true)
	{
		cin >> PLAYER;
		if (PLAYER < MIN || PLAYER>TEN_POINT)
		{
			cout << "入力が間違っています。" << endl;
			continue;
		}
		else
		{
			break;
		}
	}

	return PLAYER;
}

int EnemyHand()//相手札関数
{
	int ENEMY=0;
	ENEMY = rand() % 11;

	return ENEMY;
}

int ArryAllInPut(int PLAYERRRY[10], int ENEMYRRY[10])//ドロー関数
{
		for (int i = 0; i < 10; i++)
		{
			PLAYERRRY[i] = rand() % MAX;//配列に数を入れる
			ENEMYRRY[i] = rand() % MAX;

			cout <<"あなたの手札です"<<i << "枚目:" << PLAYERRRY[i] << endl;

		}

	return PLAYERRRY[10], ENEMYRRY[10];
}

int Winner(int Pcount,int Ecount)//勝敗関数
{
	if (Pcount > Ecount)//プレイヤーの点数＞CPUの点数
	{
		cout << "PLAYER WIN" << endl;
	}
	else//プレイヤーの点数＜CPUの点数
	{
		cout << "ENEMY WIN" << endl;
	}

	return Pcount, Ecount;
}

int Game()
{
	//変数宣言
	int ENEMY = 0;
	int PLAYER = 0;
	
	int PLAYERRRY[10];
	int ENEMYRRY[10];

	int PLAYER_COUNT = 0;
	int ENEMY_COUNT = 0;

	int ROUND = 0;

	cout << "０～５０の数字をランダムに１０個渡します。" << endl;
	ArryAllInPut(PLAYERRRY, ENEMYRRY);

	while (true)
	{
		cout << "================================================================================\n";
		

		PLAYER = InputCheck();
		ENEMY = EnemyHand();

		//引き分け
		if (PLAYERRRY[PLAYER] == ENEMYRRY[ENEMY])
		{
			cout << "ドロー" << endl;
			PLAYER_COUNT++;
			ENEMY++;

			cout <<"player:"<<PLAYERRRY[PLAYER]<< "相手:" << ENEMYRRY[ENEMY] << endl;
		}

		else
		{
			//プレイヤーのほうがでかい
			if (PLAYERRRY[PLAYER] > ENEMYRRY[ENEMY])
			{
				cout << "PLAYER WIN" << endl;
				PLAYER_COUNT += THREE_POINT;

				cout << "player:" << PLAYERRRY[PLAYER] <<"enemy:" << ENEMYRRY[ENEMY] << endl;
			}
			//cpuのほうがでかい
			if (PLAYERRRY[PLAYER] < ENEMYRRY[ENEMY])
			{
				cout << "ENEMY WIN" << endl;
				ENEMY_COUNT += THREE_POINT;

				cout << "player:" << PLAYERRRY[PLAYER] <<"enemy:" << ENEMYRRY[ENEMY] << endl;
			}

		}

		ROUND++;

		cout << PLAYER_COUNT << endl;//今のラウンド数

		if (ROUND == MAX_ROUND)//終了条件
		{
			break;
		}
	}

	Winner(PLAYER_COUNT, ENEMY_COUNT);

	return 0;//終了
}