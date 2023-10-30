#pragma once
#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

namespace REPORT_22
{
	void Run();

	int* GetBingNumSuffly(int arrValue[]);
	int GetComputSelectNum();

	void SetInputNumProcess(int value);
	void OutputPrint(int pBinggoCount, int cBinggoCount, int pInputVal, int cInputVal);
	void OutputInputNum(int pInputVal, int cInputVal);
	void OutputBoardNum(int yValue);
}