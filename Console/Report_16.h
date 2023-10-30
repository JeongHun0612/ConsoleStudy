#pragma once
#include <iostream>
#include <time.h>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

namespace REPORT_16
{
	void Run();

	int StrLength(char strValue[]);
	char* StrCut(char strValue[], int startIndex, int endIndex);

	int ConvertCharToInt(char strValue[], int index);
}