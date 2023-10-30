#include "Report_11.h"

//���� 2. ������(Ÿ�� ����)
//
//- ġƮ �ʼ�
//
//- �� 1 ~13������ ī��
//
//- �� 1 ~13������ ī��
//
//- �� 1 ~13������ ī��
//
//- �� 1 ~13������ ī��
//
//�� ������ 13��->�� 52��
//
//- ����ó��
//�� A -> 1
//�� J -> 11
//�� Q -> 12
//�� K -> 13
//
//- 52���� ī�带 �ּ� �ѹ� �������� �����ְ� �� �� ���� ���� 3�徿 �����´�.
//
//- ���ʿ� ��ġ�� ������ ī�带 ���� �ּ� ���þ� �̻��� �ݾ��� �����Ѵ�.
//
//- ���� �� ����° ī���� ���� �ռ� ���µ� ī�� ������ ���̿� �ִٸ� ���ñ��� 2�� ȹ���Ͽ� ������ �߰�
//
//- �ݴ��� �����ݿ��� ������ ��ŭ ���̳ʽ�
//
//- �ʼ� : ������ ������ ���� ī��� ������ ����� �� ����.
//
//- ���� ���� : ���� �� �Ұų� ī�尡 ���� �������� ��

namespace REPORT_11
{
#define MIN_BET_AMOUNT 1000

	int trump[52];

	void Run()
	{
		srand(time(NULL));

		const int trumpSize = sizeof(trump) / sizeof(trump[0]);
		int resultTrump[3];

		int money = 100000;
		int betAmount = 0;
		
		int count = 0;
		
		ShuffleTrump(trumpSize);

		while (money > 0 && count < 52)
		{
			// 3���� ī�� Ȯ��
			for (int i = 0; i < 3; i++)
			{
				resultTrump[i] = trump[i + count] % 13;

				if (i == 2)
				{
					// ġƮ
					cout << "ġƮ" << endl;
					cout << "����° ī�尪 : " << resultTrump[2] + 1 << endl;

					printf("������������������������������������������������������������������\n");
					printf("��       ���ñ��� �ɾ��ּ���.    ��\n");
					printf("��                               ��\n");
					printf("��      �ּ� ���ñ� : %4d��     ��\n", MIN_BET_AMOUNT);
					printf("������������������������������������������������������������������\n");
					cout << "���ñ� : ";
					cin >> betAmount;

					// �ּ� ���ñ� ����ó�� - �̱��� (���� ����)
					if (betAmount < MIN_BET_AMOUNT)
					{
						printf("������������������������������������������������������������������\n");
						printf("��   �ּ� ���ñ��� �ؼ����ּ���! ��\n");
						printf("������������������������������������������������������������������\n");
						count -= 2;
						i -= 2;
					}
				}

				OutputTrump(trump[i + count] / 13, trump[i + count] % 13);

				count++;
			}

			// ��� ����
			if (BetResult(resultTrump))
			{
				printf("������������������������������������������������������������������\n");
				printf("��         ���ϵ帳�ϴ�!!        ��\n");
				printf("��                               ��\n");
				printf("��       ���� ������ : %6d    ��\n", money += betAmount * 2);
				printf("������������������������������������������������������������������\n");
			}
			else
			{
				printf("������������������������������������������������������������������\n");
				printf("��     ���ñ��� �����Ǿ����ϴ�.  ��\n");
				printf("��                               ��\n");
				printf("��       ���� ������ : %6d    ��\n", money -= betAmount);
				printf("������������������������������������������������������������������\n");
			}
		}

		GameExit(money, count);
	}

	void ShuffleTrump(int trumpSize)
	{
		for (int i = 0; i < trumpSize; i++)
		{
			trump[i] = rand() % 52;

			for (int j = 0; j < i; j++)
			{
				if (trump[i] == trump[j])
				{
					i--;
				}
			}
		}
	}

	int BetResult(int resultTrump[])
	{
		return (resultTrump[0] - resultTrump[1] > 0) ?
			(resultTrump[0] > resultTrump[2] && resultTrump[1] < resultTrump[2]) : // 1�� ī�� ���ڰ� �� ū ���
			(resultTrump[0] < resultTrump[2] && resultTrump[1] > resultTrump[2]);  // 1�� ī�� ���ڰ� �� ���� ���
	}

	int GetBetAmount(int money, int betAmount)
	{
		return money += betAmount;
	}

	void OutputTrump(int trumpType, int trumpNum)
	{
		char cTrump[13] = { 'A', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K' };
		char cNum = cTrump[trumpNum];

		if (trumpNum == 9)
		{
			cNum -= 38;
		}

		switch (trumpType)
		{
		case 0: // �����̵�
			printf("����������������������������\n");
			printf("�� ��       ����\n");
			printf("��            ��\n");
			printf((trumpNum == 9) ? "��     %d     ��\n" : "��     %c      ��\n", cNum);
			printf("��     ��     ��\n");
			printf("��            ��\n");
			printf("��            ��\n");
			printf("�� ��       ����\n");
			printf("����������������������������\n");
			break;
		case 1: // ���̾�
			printf("����������������������������\n");
			printf("�� ��       �ߦ�\n");
			printf("��            ��\n");
			printf((trumpNum == 9) ? "��     %d     ��\n" : "��     %c      ��\n", cNum);
			printf("��     ��     ��\n");
			printf("��            ��\n");
			printf("��            ��\n");
			printf("�� ��       �ߦ�\n");
			printf("����������������������������\n");
			break;
		case 2: // Ŭ�ι�
			printf("����������������������������\n");
			printf("�� ��       ����\n");
			printf("��            ��\n");
			printf((trumpNum == 9) ? "��     %d     ��\n" : "��     %c      ��\n", cNum);
			printf("��     ��     ��\n");
			printf("��            ��\n");
			printf("��            ��\n");
			printf("�� ��       ����\n");
			printf("����������������������������\n");
			break;
		case 3: // ��Ʈ
			printf("����������������������������\n");
			printf("�� ��       ����\n");
			printf("��            ��\n");
			printf((trumpNum == 9) ? "��     %d     ��\n" : "��     %c      ��\n", cNum);
			printf("��     ��     ��\n");
			printf("��            ��\n");
			printf("��            ��\n");
			printf("�� ��       ����\n");
			printf("����������������������������\n");
			break;
		}
	}

	void GameExit(int money, int count)
	{
		if (money < 0)
		{
			printf("������������������������������������������������������������������\n");
			printf("��  �������� ��� �����Ͽ����ϴ�.��\n");
			printf("������������������������������������������������������������������\n");
		}

		if (count >= 52)
		{
			printf("������������������������������������������������������������������\n");
			printf("��   ī�带 ��� �����Ͽ����ϴ�. ��\n");
			printf("������������������������������������������������������������������\n");
		}
	}
}