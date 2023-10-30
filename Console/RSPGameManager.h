#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>

#define MAX_HAND	3
#define MAX_RESULT	3

#define UP 72
#define DOWN 80
#define ENTER 13

using namespace std;

using std::cout;
using std::cin;
using std::endl;

enum EHand
{
	SCISSORS,
	ROCK,
	PAPER
};

enum ERsult
{
	DRAW,
	LOSE,
	WIN
};

class RSPGameManager
{
private:

protected:
	//EHand _Hands[MAX_HAND];
	//ERsult _Results[MAX_RESULT];

public:
	RSPGameManager();
	~RSPGameManager();

	void Init(void);
	void gotoXY(int x, int y);
};

