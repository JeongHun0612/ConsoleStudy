#include "BaseBallException.h"

BaseBallException::BaseBallException()
{

}

BaseBallException::~BaseBallException()
{

}

bool BaseBallException::RangeException(int playerBall)
{
	if (playerBall < 0 || playerBall > 9)
	{
		system("cls");
		printf("������������������������������������������������������������������������������������������������������������������������������\n");
		printf("��               0 ~ 9������ ���ڸ� �Է����ּ���.              ��\n");
		printf("������������������������������������������������������������������������������������������������������������������������������\n");

		return 0;
	}

	return 1;
}

bool BaseBallException::DuplicationException(int playerBall[], int index)
{
	for (int i = 0; i < index; i++)
	{
		if (playerBall[index] == playerBall[i])
		{
			system("cls");
			printf("������������������������������������������������������������������������������������������������������������������������������\n");
			printf("��                �ߺ��� ���ڸ� �Է��Ͽ����ϴ�.                ��\n");
			printf("������������������������������������������������������������������������������������������������������������������������������\n");
			return 0;
		}
	}

	return 1;
}