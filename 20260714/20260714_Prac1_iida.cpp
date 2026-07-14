#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_Prac1_iida.H"
int main(void)//ゲーム開始
{
	srand((unsigned int)(time)(NULL));//乱数の初期化

	Game();//ゲーム本体

	return 0;
	//一度選択した番号は、プレイヤー・CPUともに再度選択できません。←これがわかりませんでした
	//      終
	//───────
	//制作　・　著作
	// N 　  H　　 K　　
}