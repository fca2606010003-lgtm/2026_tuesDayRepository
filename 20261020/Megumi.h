#pragma once
#include<iostream>
#include"Sorcerer.h"
using namespace std;
class Megumi :public Sorcerer
{
public:
	void ShowStatus() override;
	void Usetechnique() override;
};