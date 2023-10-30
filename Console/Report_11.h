#pragma once
#include <iostream>
#include <time.h>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

namespace REPORT_11
{
	void Run();

	void ShuffleTrump(int trumpSize);

	int BetResult(int resultTrump[]);
	int GetBetAmount(int money, int betAmount);

	void OutputTrump(int trumpType, int trumpNum);
	void GameExit(int money, int count);
}