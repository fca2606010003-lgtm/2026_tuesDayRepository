#include<iostream>
#include"20260907.h"
using namespace std;

//コンストラクタ(初期化)
ScoreManager::ScoreManager() {
	currentScore = 0;
	highScore = 0;
}
//スコアを加算
void ScoreManager::addPoint(int points) {
	currentScore+=points;
}
//スコアをリセット
void ScoreManager::resetScore()
{
	currentScore = 0;
}
//スコアをアップデート
void ScoreManager::updateHighScore()
{
	if (currentScore > highScore)
	{
		highScore = currentScore;
	}
}
//スコアを表示
void ScoreManager::displayScore()
{
	cout << "現在のスコア:" << currentScore << endl;
	cout << "ハイスコア:" << highScore << endl;
}

