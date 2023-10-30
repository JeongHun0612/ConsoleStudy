#include <iostream>
#include <time.h>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

void main()
{
	int count = 5;
	int comNum, playerNum;

	srand(time(NULL));

	while (count > 0)
	{
		comNum = rand() % 3;
		cout << "치트 : " << comNum << endl;

		cout << "남은 횟수 : " << count << endl;
		cout << "0. 가위  1. 바위  2. 보 중에 하나를 입력하세요." << endl;
		cin >> playerNum;

		if (comNum == playerNum)
		{
			cout << "비겼습니다." << endl;
		}
		else if ((comNum + 1) % 3 == playerNum)
		{
			cout << "이겼습니다" << endl;
		}
		else if ((comNum + 2) % 3 == playerNum)
		{
			cout << "졌습니다." << endl;
		}
		else
		{
			cout << "0 ~ 2 사이의 숫자를 입력해주세요." << endl;
			continue;
		}

		count--;
	}
}