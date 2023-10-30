#include "Report_15.h"

//���� 4. ���̷ο켼��
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
//- 52���� ī�带 �ּ� �ѹ��̻� �������� ���� ���� ���ϸ��� 5�徿 �����´�.
//
//- ���ʿ� ��ġ�� �ټ����� ī�带 ���� 6��° ī���� ���ڸ� �����ϴ� ����
//
//- ���캸�� ������ ����, ������ �ο�, �ƴϸ� �������� �߿� 1�� ����
//
//- �����̸� 13�� ���� ȹ��

namespace REPORT_15
{
#define CARD_MAX 52
#define ARRAGE_CARD_MAX 6
#define	CHEAT 0

	int cardArray[CARD_MAX];
	int arrangCard[6];

	void Run()
	{
		srand(time(NULL));

		int selectNum;
		int money = 10000000;
		int betAmount = 0;

		// ī�� �ʱ�ȭ
		InitCardSet();

		// ī�� ����
		ShuffleCard();

		while (money > 0)
		{
			// ����� ī�� ��
			SetArrangCard();

			// ����� ī�� ���
			if (CHEAT)
			{
				printf("�� ġƮ ��� ��\n\n");
				OutputArrageCard(ARRAGE_CARD_MAX);
			}
			else
			{
				OutputArrageCard(ARRAGE_CARD_MAX - 1);
			}

			// ���ñ� �Է�
			printf("������������������������������������������������������������������������\n");
			printf("��       ���ñ��� �Է����ּ���.     ��\n");
			printf("��                                  ��\n");
			printf("��       �ּ� ���ñ� : 10,000��     ��\n");
			printf("������������������������������������������������������������������������\n");
			cout << "���ñ� : ";
			cin >> betAmount;

			if (betAmount < 10000 || betAmount > money)
			{
				system("cls");
				printf("������������������������������������������������������������������������\n");
				printf("��           ���ñ� ����!!          ��\n");
				printf("������������������������������������������������������������������������\n");
				continue;
			}

			cout << '\n';
			
			while (true)
			{
				// ���̷ο켼�� ����
				printf("������������������������������������������������������������������������\n");
				printf("��    0. ����  1. �ο�  2. ����     ��\n");
				printf("������������������������������������������������������������������������\n");
				cout << "���� : ";
				cin >> selectNum;

				if (selectNum < 0 || selectNum > 2)
				{
					printf("������������������������������������������������������������������������\n");
					printf("�� �Ʒ� ��ȣ �� �ϳ��� �������ּ���.��\n");
					printf("������������������������������������������������������������������������\n");
					continue;
				}
				
				break;
			}
	
			cout << '\n';

			// ��� ��� �� ����
			system("cls");

			OutputArrageCard(ARRAGE_CARD_MAX);

			money += GetBetResult(betAmount, selectNum);

			printf("������������������������������������������������������������������������\n");
			printf("��      ���� ����� : %8d      ��\n", GetBetResult(betAmount, selectNum));
			printf("��                                  ��\n");
			printf("��      ���� ������ : %8d      ��\n", money);
			printf("������������������������������������������������������������������������\n");
		}

		system("cls");
		printf("������������������������������������������������������������������������\n");
		printf("��   �������� ��� �����Ͽ����ϴ�.  ��\n");
		printf("������������������������������������������������������������������������\n");
	}

	void InitCardSet()
	{
		for (int i = 0; i < CARD_MAX; i++)
		{
			cardArray[i] = rand() % CARD_MAX;
		}
	}

	void ShuffleCard()
	{
		int dest, sour, temp;

		for (int i = 0; i < CARD_MAX; i++)
		{
			int dest = rand() % CARD_MAX;
			int sour = rand() % CARD_MAX;

			temp = cardArray[dest];
			cardArray[dest] = cardArray[sour];
			cardArray[sour] = temp;
		}
	}

	void SetArrangCard()
	{
		int randNum;

		for (int i = 0; i < ARRAGE_CARD_MAX; i++)
		{
			randNum = rand() % CARD_MAX;
			arrangCard[i] = cardArray[randNum];

			for (int j = 0; j < i; j++)
			{
				if (arrangCard[i] % 13 == arrangCard[j] % 13)
				{
					i--;
					break;
				}
			}
		}
	}

	void OutputArrageCard(int rangeMax)
	{
		char charArray[13] = { 'A', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K' };

		for (int i = 0; i < rangeMax; i++)
		{
			int cardType = arrangCard[i] / 13;
			int cardNum = arrangCard[i] % 13;

			switch (cardType)
			{
			case 0:
				printf("��");
				(cardNum == 9) ? printf("%d\t", 10) : printf("%c\t", charArray[cardNum]);
				break;
			case 1:
				printf("��");
				(cardNum == 9) ? printf("%d\t", 10) : printf("%c\t", charArray[cardNum]);
				break;
			case 2:
				printf("��");
				(cardNum == 9) ? printf("%d\t", 10) : printf("%c\t", charArray[cardNum]);
				break;
			case 3:
				printf("��");
				(cardNum == 9) ? printf("%d\t", 10) : printf("%c\t", charArray[cardNum]);
				break;
			}
		}

		cout << '\n';
	}

	int GetBetResult(int betAmount, int selectNum)
	{
		int betResult = 0;

		switch (selectNum)
		{
		case 0:
			betResult += (arrangCard[ARRAGE_CARD_MAX - 1] % 13> 6) ? betAmount : betAmount * -1;
			break;
		case 1:
			betResult += (arrangCard[ARRAGE_CARD_MAX - 1] % 13 < 6) ? betAmount : betAmount * -1;
			break;
		case 2:
			betResult += (arrangCard[ARRAGE_CARD_MAX - 1] % 13 == 6) ? betAmount *= 13 : betAmount *= -5;
			break;
		}

		return betResult;
	}
}
