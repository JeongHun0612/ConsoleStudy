#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

//���� 1. ���� �߱�
//
//- 0 ~9������ ���� �� ��ǻ�Ͱ� ���Ƿ� 3���� �̴´�.
//
//- ��ǻ�Ͱ� ���� ���ڸ� �÷��̾ ���� ���� 3���� �����Ͽ� ���ڿ� �ڸ������� ���ߴ� ����
//
//- ���� ������ ���ڰ� ��ǻ�� ���ڿ� ������ �ڸ����� �ٸ� ���
//�� 1��(1B)
//
//- ���� ������ ���ڰ� ��ǻ�� ���ڿ� ���� �ڸ������� ��ġ�� ���
//�� 1��Ʈ����ũ(1S)
//
//- ���� ������ ���ڰ� ��ǻ�� ���ڿ� ���� �ʰ� �ڸ������� ��ġ���� ������
//�� 1�ƿ�(1O)
//
//- �̷��� �� �Ͽ� 3S�� ������ ������� ������� ����� �����ָ� ���� ����
//
//- �ʼ� : ġƮ, �迭 X

int InitAnswerNum();
void DuplicateNumCheck(int answerNum, int playerNum);

int InputException();
int RangeException(int playerNum);
int DuplicationException(int playerNum1, int playerNum2, int playerNum3);

// ���� ����
int strikeCount = 0;
int ballCount = 0;
int outCount = 0;

void main()
{
	// ���� 1. ���� �߱�
	// ==============================================================================================================

	srand(time(NULL));

	int answerNum = InitAnswerNum();
	int playerNum, playerNum1, playerNum2, playerNum3;

	int count = 0;

	while (strikeCount != 3)
	{
		strikeCount = 0;
		ballCount = 0;
		outCount = 0;

		cout << "ġƮ : " << answerNum << endl;

		printf("������������������������������������������������������������������������������������������������������������������������������\n");
		printf("��        0 ~ 9 ������ ���� 3���� �ߺ����� �Է����ּ���.       ��\n");
		printf("������������������������������������������������������������������������������������������������������������������������������\n");

		cout << "����1 : "; cin >> playerNum1;
		if (InputException() || RangeException(playerNum1)) continue;
		rewind(stdin);

		cout << "����2 : "; cin >> playerNum2;
		if (InputException() || RangeException(playerNum2)) continue;
		rewind(stdin);

		cout << "����3 : "; cin >> playerNum3;
		if (InputException() || RangeException(playerNum3)) continue;
		rewind(stdin);

		if (DuplicationException(playerNum1, playerNum2, playerNum3)) continue;

		playerNum = (playerNum1 * 100) + (playerNum2 * 10) + playerNum3;

		DuplicateNumCheck(answerNum, playerNum);

		count++;

		system("cls");
		printf("������������������������������������������������������������������������������������������������������������������������������\n");
		printf("��                        ���� Ƚ�� : %2d                       ��\n", count);
		printf("��                                                             ��\n");
		printf("��            STRIKE : %d     BALL : %d     OUT : %d              ��\n", strikeCount, ballCount, outCount);
		printf("������������������������������������������������������������������������������������������������������������������������������\n");
	}

	printf("������������������������������������������������������������������������������������������������������������������������������\n");
	printf("��                        ���ϵ帳�ϴ�!!                       ��\n");
	printf("��                                                             ��\n");
	printf("��                �� %d�� ���� ������ ���߼̽��ϴ�.             ��\n", count);
	printf("������������������������������������������������������������������������������������������������������������������������������\n");
}

int InitAnswerNum()
{
	int answerNum1, answerNum2, answerNum3;

	while (true)
	{
		answerNum1 = rand() % 9;
		answerNum2 = rand() % 9;
		answerNum3 = rand() % 9;

		if (answerNum1 != answerNum2 && answerNum1 != answerNum3 && answerNum2 != answerNum3)
		{
			return (answerNum1 * 100) + (answerNum2 * 10) + answerNum3;
		}
	}
}

int InputException()
{
	if (!cin)
	{
		system("cls");
		printf("������������������������������������������������������������������������������������������������������������������������������\n");
		printf("��                  �߸��� ������ �Է��Դϴ�.                  ��\n");
		printf("������������������������������������������������������������������������������������������������������������������������������\n");

		cin.clear();
		cin.ignore(100, '\n');
		rewind(stdin);

		return 1;
	}

	return 0;
}
int RangeException(int playerNum)
{
	if (playerNum < 0 || playerNum > 9)
	{
		system("cls");
		printf("������������������������������������������������������������������������������������������������������������������������������\n");
		printf("��               0 ~ 9������ ���ڸ� �Է����ּ���.              ��\n");
		printf("������������������������������������������������������������������������������������������������������������������������������\n");

		return 1;
	}

	return 0;
}

int DuplicationException(int playerNum1, int playerNum2, int playerNum3)
{
	if ((playerNum1 == playerNum2 || playerNum1 == playerNum3 || playerNum2 == playerNum3))
	{
		system("cls");
		printf("������������������������������������������������������������������������������������������������������������������������������\n");
		printf("��                �ߺ��� ���ڸ� �Է��Ͽ����ϴ�.                ��\n");
		printf("������������������������������������������������������������������������������������������������������������������������������\n");

		return 1;
	}

	return 0;
}

void DuplicateNumCheck(int answerNum, int playerNum)
{
	int tempAnswerNum = answerNum;
	int tempPlayerNum = playerNum;

	int num1 = answerNum / 100;

	for (int i = 100; i > 0; i /= 10)
	{
		for (int j = 100; j > 0; j /= 10)
		{
			if ((answerNum/i) == (playerNum/j))
			{
				if (i == j)
				{
					strikeCount++;
					break;
				}

				else
				{
					ballCount++;
					break;
				}
			}

			if (j == 1)
			{
				outCount++;
			}

			playerNum %= j;
		}

		answerNum %= i;
		playerNum = tempPlayerNum;
	}

	answerNum = tempAnswerNum;
}