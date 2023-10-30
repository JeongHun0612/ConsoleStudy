#pragma once
#include <iostream>
#include <time.h>
#include <Windows.h>

#define LOTTO_NUM_MAX 45
#define LOTTO_DRAW_NUM 6

using namespace std;

using std::cout;
using std::cin;
using std::endl;

namespace REPORT_18
{
	void Run();

	void InitWinNum(int winNum[]);
	void Sort(int arr[], int arrLength);

	bool DuplicateNumCheck(int arr[], int value, int size);
	int StrLength(char strValue[], int strSize);

	int GetWinCount(int winNum[], int selectNum[]);
	int ConvertCharToInt(char value);
	int ConverStrToInt(char strValue[], int size);

	void OutputCheat(int winNum[], int bonusNum);
	void OutputSelectNum(int selectNum[], const char* name);
	void OutputWinNum(int winNum[], int bonusNum, const char* name, int turn);
	void OutputWinResult(int winCount, int rank, long winPrice);
}

