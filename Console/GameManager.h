#pragma once

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <time.h>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

#define UP		72
#define DOWN	80
#define LEFT	75
#define RIGHT	77
#define ENTER	13

enum TitleMunu { GAMESTART, GAMEEXIT };

class GameManager
{
private:
public:
	GameManager();
	~GameManager();

	void init(void);
	void gotoXY(int posX, int posY);
	int getKeyInput();
};

