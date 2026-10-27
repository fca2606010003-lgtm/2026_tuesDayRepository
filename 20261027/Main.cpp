#include"Enemy.h"
#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(void)

{
	int damage = 0;
	srand((unsigned)time(NULL));
	/*Enemy enemy1(100);
	Enemy enemy2(200);
	enemy1.ShowStatus();
	enemy2.ShowStatus();*/
	vector < Enemy> enemies;
	enemies.push_back(Enemy(rand () %70+30));
	enemies.push_back(Enemy(rand() % 70+30));
	enemies.push_back(Enemy(rand() % 70+30));
	

	for (const Enemy& enemy : enemies)
	{
		enemy.ShowHp();
	}

	cout << "UŒ‚I" << endl;

	for (const Enemy& enemy : enemies)
	{
		damage = rand() % 90 + 20;
		enemy.Damage(damage);
		enemy.ShowHp();
	}

	//if (const Enemy enemies)
	//{
	//	enemies.erase(enemies.begin());
	//}

	cout << "“G‚Ì”‚Í" << enemies.size() << endl;
	return 0;
}