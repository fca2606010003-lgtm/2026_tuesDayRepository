#include"Enemy.h"
#include<iostream>
using namespace std;

Enemy::Enemy(int hp)
{
	this->hp = hp;
}

Enemy::~Enemy() {};

void Enemy::ShowHp() const
{
	cout << "Enemy hp:" << hp << endl;
}

void Enemy::size() const
{
	cout << "Enemy Pop:" << pop << endl;
}