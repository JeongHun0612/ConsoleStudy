#pragma once
#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

namespace REPORT_14
{
	void Run();

	void InitArray();
	void ShuffleArray();

	void OutputGameSet(int x, int y);
	void OutputAnswer(int gameMode);

	void SelectPicture();
	void SetPicture(int selectNum);
	int DuplicateAnswerCheck();
}