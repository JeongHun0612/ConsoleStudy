#pragma once
#include <iostream>
#include <time.h>

#define BINGO_NUM_MAX 25

#define BINGO_MAX_COUNT 5
#define BINGO_BOARD_X 5
#define BINGO_BOARD_Y 5

using namespace std;

using std::cout;
using std::cin;
using std::endl;

namespace REPORT_20
{
	void Run();

	void OutputBingoBoard(int binggoBoard[BINGO_BOARD_Y][BINGO_BOARD_X]);

}