#pragma once
#include <iostream>
#include <time.h>

#define GAME_BOARD_X 5
#define GAME_BOARD_Y 4
#define GAME_NUM_MAX (GAME_BOARD_X * GAME_BOARD_Y - 1)

using namespace std;

using std::cout;
using std::cin;
using std::endl;

namespace REPORT_21
{
	void Run();

	void CheatActivate(int gameBoard[], int maxNum);

	bool GetIsWall(char inputKey, int curIndex, int& tempIndex);
	bool GetIsComplete(int gameBoard[], int maxNum);
	void OutputGameBoard(int gameBoard[], int curIndex, int gameBoardX, int gameBoardY);
}