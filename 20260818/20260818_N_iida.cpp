/*① ダメージ関数
Damage関数を作成し、プレイヤーのHPを20減らしてください。

Damage関数を呼び出す ↓ HPが20減少する② 回復関数
Heal関数を作成し、プレイヤーのHPを30増加させてください。

Heal関数を呼び出す ↓ HPが30増加する
条件：
HPはmain関数で管理すること
Damage関数とHeal関数を作成すること
HPを変更するためにポインターを使用すること
関数の引数にHPのアドレスを渡すこと
Damage関数ではHPを20減らすこと
Heal関数ではHPを30増やすこと
最終的なHPを画面に表示すること*/
#include<iostream>

using namespace std;

void Damage(int *n)
{
	*n -= 20;  //ポインターには「＝」が絶対必要？
}

void Heal(int *m)
{
	*m += 30;
}

int main()
{
	int HP = 100;

	Damage(&HP);

	//cout << HP << endl;

	Heal(&HP);

	cout << HP << endl;
	return 0;
}