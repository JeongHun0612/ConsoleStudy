#include <iostream>
#include <time.h>
// Sleep(1000) : 1�� ���� �����.
// Sleep(500)  : 0.5�� ���� �����.
#include <Windows.h>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

// �ݺ��� + ���ǹ� + ������

// ���ٿ� ����

// �������� -> ȿ���� ���� ����
// ��ü���� -> ���踦 ���� ����

void Function(int* a, int** b, int*** c)
{
	// ���� �ۼ�
}

void main()
{
	srand(time(NULL));

	int comNumber;
	int myNumber;

	comNumber = rand() % 100 + 1;

	cout << "ġƮ : " << comNumber << endl;

	while (true)
	{
		cout << "0 ~ 100���� ������ �ϳ��� ��������." << endl;
		cin >> myNumber;
		Sleep(1000);

		if (myNumber == comNumber)
		{
			cout << "== ã�Ҵ� ==" << endl;
			Sleep(3000);
			system("cls"); // cleanSystem�� ����
		}
		else if (myNumber > comNumber)
		{
			cout << "�� �������� ������ ����" << endl;
		}

		else
		{
			cout << "�� ū ���� ������ ����" << endl;
		}
		cout << endl;
	}
}