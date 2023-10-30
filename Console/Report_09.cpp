#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

//과제 2. 슬롯머신
//
//- 초기 소지금 : 1억
//
//- 777같은 숫자 3개 나올 시 배팅금액의 12배
//
//- 7을 제외한 같은 숫자 3개 나올시 배팅금액의 5배
//
//- 같은 숫자 2개 나올 시 배팅금액의 2배
//
//- 그외에는 배팅금액 잃기
//
//- 필수
//1. 룰렛이 동작하는 모습 시각화
//2. 배팅을 하고 내가 룰렛을 멈추지 않으면 룰렛은 자동으로 계속 반복 된다.
//3. 치트 필수
//ㄴ 치트가 활성화 되면 숫자 3개를 입력 받는다. (EX : 777)
//ㄴ 다음으로 룰렛이 시동이 되고 777이 당첨되는걸 확인할 수 있게 만들기

int InputException();
int RangeException(int betAmount);

int money = 100000000;
int slot1, slot2, slot3;

void main()
{
	// 과제 2. 슬롯머신
	// ==============================================================================================================

	srand(time(NULL));

	int betAmount;

	int count = 50;

	while (true)
	{
		printf("┌──────────────────────────────────────────────┐\n");
		printf("│          배팅 금액을 입력해주세요.           │\n");
		printf("│                                              │\n");
		printf("│          최소 배팅 금액 : 10,000원           │\n");
		printf("└──────────────────────────────────────────────┘\n");

		cout << "배팅금액 : ";
		cin >> betAmount;
		if (InputException() || RangeException(betAmount)) continue;
		break;
	}

	while (count > 0)
	{
		if (_kbhit()) // 조건문과 namespace로 가능... 
		{
			if (_getch() == 72)
			{
				int num;

				printf("┌──────────────────────────────────┐\n");
				printf("│           치트 활성화            │\n");
				printf("└──────────────────────────────────┘\n");

				cout << "숫자 입력 : ";
				cin >> num;

				continue;
			}
		}

		system("cls");

		slot1 = rand() % 9;
		slot2 = rand() % 9;
		slot3 = rand() % 9;

		printf("┌───┬────────┬────────┬────────┬───┐\n");
		printf("│   │    %d   │    %d   │    %d   │   │\n", (slot1 + 9) % 10, (slot2 + 9) % 10, (slot3 + 9) % 10);
		printf("│   │        │        │        │   │\n");
		printf("│   │    %d   │    %d   │    %d   │   │\n", slot1, slot2, slot3);
		printf("│   │        │        │        │   │\n");
		printf("│   │    %d   │    %d   │    %d   │   │\n", (slot1 + 1) % 10, (slot2 + 1) % 10, (slot3 + 1) % 10);
		printf("└───┴────────┴────────┴────────┴───┘\n");

		count--;
		Sleep(30);

		if (count == 0)
		{
			if (slot1 == slot2 && slot2 == slot3)
			{
				// 3개
				if (slot1 == 7)
				{
					money += betAmount * 12;
				}
				else
				{
					money += betAmount * 5;
				}
			}
			else
			{
				if (slot1 == slot2 || slot1 == slot3 || slot2 == slot3)
				{
					// 2개
					money += betAmount * 2;
				}
				else
				{
					// 1개
					money -= betAmount * 4;
				}
			}

			printf("┌──────────────────────────────────┐\n");
			printf("│      현재 소지금 : %10d    │\n", money);
			printf("└──────────────────────────────────┘\n");

			count = 50;
			Sleep(3000);
		}
	}
}

int InputException()
{
	if (!cin)
	{
		system("cls");
		printf("┌──────────────────────────────────────────────┐\n");
		printf("│           잘못된 형식의 입력입니다.          │\n");
		printf("└──────────────────────────────────────────────┘\n");

		cin.clear();
		cin.ignore(100, '\n');
		rewind(stdin);

		return 1;
	}

	return 0;
}
int RangeException(int betAmount)
{
	if (betAmount < 10000)
	{
		system("cls");
		printf("┌──────────────────────────────────────────────┐\n");
		printf("│         최소 배팅금은 10,000원 입니다.       │\n");
		printf("└──────────────────────────────────────────────┘\n");

		return 1;
	}

	else if (betAmount > money)
	{
		system("cls");
		printf("┌──────────────────────────────────────────────┐\n");
		printf("│       배팅금이 현재 소지금보다 많습니다.     │\n");
		printf("└──────────────────────────────────────────────┘\n");

		return 1;
	}

	return 0;
}