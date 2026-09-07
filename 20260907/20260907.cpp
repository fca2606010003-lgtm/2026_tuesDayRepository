#include"20260907.h"
#include<iostream>
using namespace std;

int main(void)
{
	//ScoreManagerクラスをオブジェクト化
	ScoreManager score;

	cout << "ゲーム開始" << endl;

	score.displayScore();
	//100ポイント取得
	cout << "１００ポイント獲得" << endl;

	score.addPoint(100);
	score.displayScore();
	//50ポイント取得
	cout << "50ポイント獲得" << endl;
	score.addPoint(50);
	score.displayScore();
	//ハイスコア更新	
	cout << endl;
	cout << "ハイスコア更新" << endl;

	score.updateHighScore();
	score.displayScore();

	cout <<endl;
	cout << "ゲーム終了" << endl;

	score.resetScore();
	score.displayScore();

	return 0;
}