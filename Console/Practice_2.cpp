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

#include <iostream>

using namespace std;

#define CARD_MAX	52

void main()
{
	srand(time(NULL));

	int card[CARD_MAX];
	int cardTypeNum;
	int resultCard[3];

	int count = 0;
	int betMoney = 0;
	
	string cardNum[13] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	string cardType[4] = { "��", "��", "��", "��" };

	// �ʱ�ȭ
	for (int i = 0; i < CARD_MAX; i++)
	{
		card[i] = i;
	}

	// ����
	for (int i = 0; i < CARD_MAX; i++)
	{
		int dest, sour, temp;

		dest = rand() % CARD_MAX;
		sour = rand() % CARD_MAX;

		temp = card[dest];
		card[dest] = card[sour];
		card[sour] = temp;
	}

	while (count < CARD_MAX)
	{
		cout << "count : " << count << endl;

		// ī�� 3���� �̴� ����
		for (int i = 0; i < 3; i++)
		{
			resultCard[i] = card[count + i] % 13;
			cardTypeNum = card[count + i] / 13;

			if (i == 2)
			{
				cout << "���ñ��� �ɾ��" << endl;
				cin >> betMoney;
			}


			printf("%d��° resultCard : %s/%s\n", i + 1, cardType[cardTypeNum].c_str(), cardNum[resultCard[i]].c_str());


			//string cardType[4] = { "��", "��", "��", "��" };
			//int cardType_N[4] = { 1, 2, 3, 4 };

			//cardType[cardTypeNum];
			//cardType_N[cardTypeNum];


		/*	switch (cardTypeNum)
			{
			case 0:
				printf("%d��° resultCard : ��/%s\n", i + 1, cardNum[resultCard[i]].c_str());
				break;
			case 1:
				printf("%d��° resultCard : ��/%s\n", i + 1, cardNum[resultCard[i]].c_str());
				break;
			case 2:
				printf("%d��° resultCard : ��/%s\n", i + 1, cardNum[resultCard[i]].c_str());
				break;
			case 3:
				printf("%d��° resultCard : ��/%s\n", i + 1, cardNum[resultCard[i]].c_str());
				break;
			}*/
		}

		// ����� Ȯ���ϴ� ����
		if (resultCard[0] < resultCard[1])
		{
			if (resultCard[0] < resultCard[2] && resultCard[1] > resultCard[2])
			{
				cout << "����" << endl;
			}
			else
			{
				cout << "����" << endl;
			}
		}
		else
		{
			if (resultCard[0] > resultCard[2] && resultCard[1] < resultCard[2])
			{
				cout << "����" << endl;
			}
			else
			{
				cout << "����" << endl;
			}
		}

		count += 3;
	}
}