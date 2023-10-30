#include "Report_10.h"

namespace REPORT_10
{
	#define ARRAY_SIZE	6

	void Run()
	{
		// 과제 1.1 게임 평가 평균값 구하기 ( 값을 입력하는 버전 X )
		// ==============================================================================================================

		int evalArray1[ARRAY_SIZE] = { 10, 20, 30, 40, 50, 60 };

		int arraySum = 0;
		float evalArrayAverage = 0.0;

		const int evalArraySize1 = sizeof(evalArray1) / sizeof(evalArray1[0]);

		arraySum = GetArraySum(evalArray1, evalArraySize1);
		evalArrayAverage = GetAverage(arraySum, evalArraySize1);

		OutputAvalResult(evalArray1, evalArrayAverage);

		cout << '\n';
		printf("==================================================");
		cout << '\n';

		// 과제 1.2 게임 평가 평균값 구하기 ( 값을 입력하는 버전 O )
		// ==============================================================================================================

		int evalArray2[ARRAY_SIZE];

		int evalArrayValue1, evalArrayValue2, evalArrayValue3, evalArrayValue4, evalArrayValue5;

		arraySum = 0;
		evalArrayAverage = 0;

		cout << "캐릭터 : "; cin >> evalArray2[0];
		cout << "기본 스탯 : "; cin >> evalArray2[1];
		cout << "전장 : "; cin >> evalArray2[2];
		cout << "전직 : "; cin >> evalArray2[3];
		cout << "스킬 강화 : "; cin >> evalArray2[4];
		cout << "강화 수치 : "; cin >> evalArray2[5];

		const int evalArraySize2 = sizeof(evalArray2) / sizeof(evalArray2[0]);

		arraySum = GetArraySum(evalArray2, evalArraySize2);
		evalArrayAverage = GetAverage(arraySum, evalArraySize2);

		OutputAvalResult(evalArray2, evalArrayAverage);
	}

	void OutputAvalResult(int m_Array[], float evalArrayAverage)
	{
		printf("┌──────────────────────────────────────────────┐\n");
		printf("│        과제 1. 게임 평가 평균값 구하기       │\n");
		printf("│                                              │\n");
		printf("│  입력값 : ( %3d, %3d, %3d, %3d, %3d, %3d )   │\n", m_Array[0], m_Array[1], m_Array[2], m_Array[3], m_Array[4], m_Array[5]);
		printf("│                                              │\n");
		printf("│          게임 평가 평균값 : %.4f          │\n", evalArrayAverage);
		printf("└──────────────────────────────────────────────┘\n");
	}


	int GetArraySum(int m_Array[], int m_ArraySize)
	{
		int sum = 0;

		for (int i = 0; i < m_ArraySize; i++)
		{
			sum += m_Array[i];
		}

		return sum;
	}

	float GetAverage(int value, int divValue)
	{
		return static_cast<float>(value) / static_cast<float>(divValue);
	}
}