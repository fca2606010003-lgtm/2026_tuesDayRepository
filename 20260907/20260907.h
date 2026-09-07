#pragma once
class ScoreManager
{
private:
	//メンバ関数
	int currentScore;
	int highScore;
public:
	//コンストラクタ
	ScoreManager();
	//メンバ関数
	void addPoint(int points);
	void resetScore();
	void updateHighScore();
	void displayScore();
};