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
		cout << "ġƮ : " << comNum << endl;

		cout << "���� Ƚ�� : " << count << endl;
		cout << "0. ����  1. ����  2. �� �߿� �ϳ��� �Է��ϼ���." << endl;
		cin >> playerNum;

		if (comNum == playerNum)
		{
			cout << "�����ϴ�." << endl;
		}
		else if ((comNum + 1) % 3 == playerNum)
		{
			cout << "�̰���ϴ�" << endl;
		}
		else if ((comNum + 2) % 3 == playerNum)
		{
			cout << "�����ϴ�." << endl;
		}
		else
		{
			cout << "0 ~ 2 ������ ���ڸ� �Է����ּ���." << endl;
			continue;
		}

		count--;
	}
}