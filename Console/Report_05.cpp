#include <iostream>
#include <time.h>
#include <Windows.h>
#include <string>

/*
과제 1. 가위바위보 게임

- if문을 이용해 만든다.
 ㄴ switch문은 사용하지 않는다.

- 게임의 진행 횟수는 총 5판
 ㄴ 이후는 게임 종료

 필수 : 치트

 과제 2. 일수 출력기

 - if문과 switch문 중에 본인이 판단해 효율적인것을 선택한다.

 - 시작하면 사용자의 입력을 받고 입력한 숫자에 따라 ??일 인지 출력

 EX) 4 입력시 -> 4월은 30일입니다. -> 다시 커맨드 활성화

 - 1월부터 12월까지 확인이 가능해야하고 이외의 숫자는 예외처리

 - 총 5번을 입력하면 프로그램 종료

 도전 과제1. 함수와 포인터를 활용해 가위바위보 완성

 - 양식은 수정하면 안되며 메인함수에서는 함수 호출이외에는 아무것도 작성을 할 수 없다.

 한줄 조사. 함수

 - 노트에 적어온다.

 - 비유할것 생각해 온다. (EX : 함수는 OOO 이다.)
*/

using namespace std;

using std::cout;
using std::cin;
using std::endl;

void Function(int* a, int** b, int*** c)
{
	// 내용 작성
}

void main()
{
#pragma region 과제 1. 가위바위보게임
	// 과제 1. 가위바위보 게임
	// ==============================================================================================================

	cout << "과제 1. 가위바위보 게임" << endl;
	cout << "---------------------------------------------------------------" << endl;

	srand(time(NULL));

	int comNumber, playerNumber;
	int count;
	int comScore, playerScore;

	count = 5;
	comScore = 0;
	playerScore = 0;

	while (count > 0)
	{
		//comNumber = rand() % 3;
		comNumber = 2;

		cout << "치트 : " << comNumber << endl;

		printf("┌───────────┐\n");
		printf("│  0. 가위  │\n");
		printf("│  1. 바위  │\n");
		printf("│  2. 보    │\n");
		printf("└───────────┘\n");
		cout << "남은 횟수 : " << count << endl;
		cout << "위의 숫자 중 하나를 입력하세요 : ";
		cin >> playerNumber;
		Sleep(500);

		if (comNumber == playerNumber)
		{
			printf("┌──────────────────────────────────────────┐\n");
			printf("│   comNumber : %d   VS   playerNumber : %d  │\n", comNumber, playerNumber);
			printf("│                                          │\n");
			printf("│              결과 : 무승부               │\n");
			printf("└──────────────────────────────────────────┘\n");
		}
		else if ((comNumber + 1) % 3 == playerNumber)
		{
			printf("┌──────────────────────────────────────────┐\n");
			printf("│   comNumber : %d   VS   playerNumber : %d  │\n", comNumber, playerNumber);
			printf("│                                          │\n");
			printf("│               결과 : 승리                │\n");
			printf("└──────────────────────────────────────────┘\n");
			playerScore++;
		}
		else if ((comNumber + 2) % 3 == playerNumber)
		{
			printf("┌──────────────────────────────────────────┐\n");
			printf("│   comNumber : %d   VS   playerNumber : %d  │\n", comNumber, playerNumber);
			printf("│                                          │\n");
			printf("│               결과 : 패배                │\n");
			printf("└──────────────────────────────────────────┘\n");
			comScore++;
		}
		else
		{
			printf("┌──────────────────────────────────────────┐\n");
			printf("│       잘못된 숫자를 입력하였습니다.      │\n");
			printf("│                                          │\n");
			printf("│      0 ~ 2 사이의 숫자를 입력하세요.     │\n");
			printf("└──────────────────────────────────────────┘\n");
			continue;
		}

		printf("┌──────────────────────────────────────────┐\n");
		printf("│                 승리 횟수                │\n");
		printf("│                                          │\n");
		printf("│         컴퓨터 : %d   플레이어 : %d        │\n", comScore, playerScore);
		printf("└──────────────────────────────────────────┘\n");

		count--;
		cout << '\n';
	}
#pragma endregion

	cout << "\n\n";

#pragma region 과제 2. 일수 출력
	// 과제 2. 일수 출력
	// ==============================================================================================================

	cout << "과제 2. 일수 출력" << endl;
	cout << "---------------------------------------------------------------" << endl;

	int count2;
	int monthNum, dayNum;

	count2 = 5;

	while (count2 > 0)
	{
		cout << "1 ~ 12까지의 숫자 중 하나를 입력하세요." << endl;
		cout << "남은 횟수 : " << count2 << endl;

		cin >> monthNum;

		if (monthNum == 1 || monthNum == 3 || monthNum == 5 || monthNum == 7 || monthNum == 8 || monthNum == 10 || monthNum == 12)
		{
			dayNum = 31;
		}
		else if (monthNum == 2)
		{
			dayNum = 28;
		}
		else if (monthNum == 4 || monthNum == 6 || monthNum == 9 || monthNum == 11)
		{
			dayNum = 30;
		}
		else
		{
			printf("잘못된 숫자를 입력하셨습니다.\n\n");
			continue;
		}

		printf("%d월은 %d일입니다.\n", monthNum, dayNum);
		count2--;

		cout << '\n';
	}

#pragma endregion

	cout << "\n\n";

#pragma region 도전 과제1. 함수와 포인터를 활용해 가위바위보 완성
	// 도전 과제1. 함수와 포인터를 활용해 가위바위보 완성
	// ==============================================================================================================

	cout << "도전 과제1. 함수와 포인터를 활용해 가위바위보 완성" << endl;
	cout << "---------------------------------------------------------------" << endl;
#pragma endregion

}