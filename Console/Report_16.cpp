#include "Report_16.h"

//※ String 사용 금지
//
//과제 1. 주민번호 생성기
//
//- 시작하면 원하는 생년을 입력받는다. (4자리, 2자리 처리)
//ㄴ EX : 1975 / 75
//
//- 월과 일을 입력(2자리, 1자리 처리)
//ㄴ EX : 06 / 6
//
//
//- 예외처리 : 31일이 있는 달과 30일까지만 있는 달, 그리고 2월도 예외처리 한다.
//
//- 성별 선택(남자는 1 또는 3 / 여자는 2 또는 4)
//ㄴ 만약 다른 값을 입력하면 성별을 랜덤으로 결정
//
//- 마지막 6자리는 랜덤으로 출력
//ㄴ 예외처리 : 단, 0이 나오면 안된다.

namespace REPORT_16
{
	void Run()
	{
		srand(time(NULL));

		char ssn[14];

		char year[10];
		char month[10];
		char day[10];
		char gender;

		int nMonth = 0;

		// 생년 입력
		while (true)
		{
			cout << "생년 : ";
			cin >> year;

			int yearLength = StrLength(year);

			if (yearLength != 4 && yearLength != 2)
			{
				cout << "입력 오류" << endl;
				continue;
			}

			if (yearLength == 4)
			{
				StrCut(year, 0, 2);
			}

			ssn[0] = year[0];
			ssn[1] = year[1];
			break;
		}

		// 월 입력
		while (true)
		{
			cout << "월 : ";
			cin >> month;

			int monthLength = StrLength(month);

			if (monthLength > 2)
			{
				cout << "입력 오류" << endl;
				continue;
			}

			else
			{
				if (monthLength == 1)
				{
					nMonth = ConvertCharToInt(month, 0);
				}
				else
				{
					nMonth = ConvertCharToInt(month, 0) * 10 + ConvertCharToInt(month, 1);
				}

				if ((nMonth < 1 || nMonth > 12))
				{
					cout << "입력 오류" << endl;
					continue;
				}
				else
				{
					if (monthLength == 1)
					{
						char temp = month[0];
						month[0] = '0';
						month[1] = temp;
					}

					ssn[2] = month[0];
					ssn[3] = month[1];
					break;
				}
			}
		}

		// 일 입력
		while (true)
		{
			cout << "일 : ";
			cin >> day;

			int dayhLength = StrLength(day);

			int nDay = 0;

			if (dayhLength > 2)
			{
				cout << "입력 오류" << endl;
				continue;
			}
			else
			{
				if (dayhLength == 1)
				{
					nDay = ConvertCharToInt(day, 0);
				}
				else
				{
					nDay = ConvertCharToInt(day, 0) * 10 + ConvertCharToInt(day, 1);
				}


				if (nDay < 1 || nDay > 31)
				{
					cout << "입력 오류" << endl;
					continue;
				}
				else
				{
					switch (nMonth)
					{
					case 2:
						if (nDay > 28)
						{
							cout << "입력 오류" << endl;
							printf("%d월은 28일까지 있습니다.\n", nMonth);
							continue;
						}
						break;
					case 4: case 6: case 9: case 11:
						if (nDay > 30)
						{
							cout << "입력 오류" << endl;
							printf("%d월은 30일까지 있습니다.\n", nMonth);
							continue;
						}
						break;
					}

					if (dayhLength == 1)
					{
						char temp = day[0];
						day[0] = '0';
						day[1] = temp;
					}

					ssn[4] = day[0];
					ssn[5] = day[1];
					break;
				}
			}
		}
		
		// 성별 입력
		while (true)
		{
			cout << "성별 선택(남자는 1 또는 3 / 여자는 2 또는 4)" << endl;
			cin >> gender;

			if (gender == '1' || gender == '2' || gender == '3' || gender == '4')
			{
				ssn[6] = gender;
			}
			else
			{
				int nGender = rand() % 4 + 1;
				ssn[6] = static_cast<char>(nGender) + 48;
			}

			break;
		}

		int randNum;

		// 나머지 랜덤 입력
		for (int i = 7; i < 13; i++)
		{
			randNum = rand() % 9 + 1;

			ssn[i] = static_cast<char>(randNum) + 48;
		}

		// 마지막 인덱스 NULL값 삽입
		ssn[13] = '\0';

		// 주민등록번호 출력
		for (int i = 0; i < 14; i++)
		{
			cout << ssn[i];

			if (i == 5)
			{
				cout << " - ";
			}
		}
	}

	int StrLength(char strValue[])
	{
		int strLength = 0;

		for (int i = 0; i < sizeof(strValue); i++)
		{
			if (strValue[i] == '\0') break;
			strLength++;
		}

		return strLength;
	}

	char* StrCut(char strValue[], int startIndex, int endIndex)
	{
		for (int i = startIndex; i < endIndex; i++)
		{
			strValue[i] = '\0';
			strValue[i] = strValue[i + endIndex];
			strValue[i + endIndex] = '\0';
		}

		return strValue;
	}

	int ConvertCharToInt(char strValue[], int index)
	{
		return (static_cast<int>(strValue[index]) - 48);
	}
}
