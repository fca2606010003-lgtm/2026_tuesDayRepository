#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260630_Hedder_iida.h"
using namespace std;

const int Card=11;
const int YES=0;
const int NO = 1;
const int RULU = 21;

int EntryCradP();
int EntryCradE();
void Game();

int EntryCradP()
{
	int player = 0;
	while (true)
	{
		cin >> player;
		cout << "0 or 1 ‚Ì”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
		if (player<YES || player>NO)
		{
			cout << "“ü—Í‚ÉŒë‚è‚ª‚ ‚è‚Ü‚·B" << endl;
		}
		else
		{
			break;
		}
	}
	return player;
}

int EntryCradE()
{
	srand((unsigned int)time(NULL));

	int enemy = 0;
	enemy = rand() % Card + 1;
}