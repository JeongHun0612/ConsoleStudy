#include "Report_17.h"

//과제 2. 문자열 과제(손코딩) - 수요일에 타임어택
//
//- 문자를 입력 받아 입력받은 문자를 거꾸로 출력한다.
//ㄴ EX : ABCD->DCBA
//
//- 있는 그대로 출력하지만 짝수에 있는 문자만 거꾸로 출력한다.
//ㄴ EX : ASDFG->AFDSG
//
//- 주민번호를 입력하고 - 이 제거된 주민번호로 출력한다.
//ㄴ EX : 1234567 - 12345678 -> 123456712345678
//
//
//한줄 조사.사용자 정의 자료형
//
//- 노트에 적어온다.
//
//- 비유할것 생각해 온다.

namespace REPORT_17
{
	void Run()
	{
		char strValue[10];

		cout << "문자 입력 : ";
		cin >> strValue;

		int strValueLength = StrLength(strValue, sizeof(strValue));

		cout << "거꾸로 출력 : ";
		for (int i = strValueLength; i >= 0; i--)
		{
			cout << strValue[i];
		}
		cout << '\n';

		cout << "짝수에 있는 문자만 거꾸로 출력 : ";

		for (int i = 0; i < strValueLength; i++)
		{
			if (i % 2 == 0)
			{
				cout << strValue[i];
			}
			else
			{
				cout << strValue[strValueLength - i - (strValueLength % 2)];
			}
		}

		cout << "\n\n";

		// --------------------------------------------------------------

		char ssn[15];
		cout << "주민번호입력 : ";
		cin >> ssn;

		int ssnLength = StrLength(ssn, sizeof(ssn));

		for (int i = 0; i < ssnLength; i++)
		{
			if (ssn[i] != '-')
			{
				cout << ssn[i];
			}
		}
	}

	int StrLength(char strValue[], int strSize)
	{
		for (int i = 0; i < strSize; i++)
		{
			if (strValue[i] == NULL)
			{
				return i;
			}
		}
	}
}
