#pragma once
#include <iostream>
#include <time.h>

using namespace std;

namespace REPORT_15
{
	void Run();

	void InitCardSet();
	void ShuffleCard();
	void SetArrangCard();
	void OutputArrageCard(int rangeMax);

	int GetBetResult(int betAmount, int selectNum);
}