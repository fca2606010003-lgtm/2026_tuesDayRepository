#pragma once
#include<iostream>
#include"Sorcerer.h"
using namespace std;
class Gojo :public Sorcerer
{
public:
	void ShowStatus() override;
	void Usetechnique() override;
};