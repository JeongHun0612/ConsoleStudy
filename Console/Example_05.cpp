#include <iostream>
#include <time.h>
// Sleep(1000) : 1초 동안 멈춘다.
// Sleep(500)  : 0.5초 동안 멈춘다.
#include <Windows.h>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

// 반복문 + 조건문 + 연산자

// 업다운 게임

// 절차지향 -> 효울을 가장 먼저
// 객체지향 -> 설계를 가장 먼저

void Function(int* a, int** b, int*** c)
{
	// 내용 작성
}

void main()
{
	srand(time(NULL));

	int comNumber;
	int myNumber;

	comNumber = rand() % 100 + 1;

	cout << "치트 : " << comNumber << endl;

	while (true)
	{
		cout << "0 ~ 100까지 숫자중 하나를 선택하자." << endl;
		cin >> myNumber;
		Sleep(1000);

		if (myNumber == comNumber)
		{
			cout << "== 찾았다 ==" << endl;
			Sleep(3000);
			system("cls"); // cleanSystem의 약자
		}
		else if (myNumber > comNumber)
		{
			cout << "더 작은수를 생각해 보자" << endl;
		}

		else
		{
			cout << "더 큰 수를 생각해 보자" << endl;
		}
		cout << endl;
	}
}