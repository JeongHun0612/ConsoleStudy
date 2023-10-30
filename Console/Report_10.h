#pragma once
#include <iostream>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

namespace REPORT_10
{
	void Run();

	void OutputAvalResult(int m_Array[], float evalArrayAverage);

	int GetArraySum(int m_Array[], int m_ArraySize);
	float GetAverage(int value, int divValue);
}