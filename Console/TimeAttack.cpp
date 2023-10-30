// 즐거운 3주차
// 즐거운 3주차
// 즐거운 3주차
// 즐거운 3주차
// 즐거운 3주차

#include <iostream>
#include <time.h>

#define	CARD_MAX 52

using namespace std;

using std::cout;
using std::cin;
using std::endl;

void OutputCard(int cardType, int cardNum);

int cardArray[CARD_MAX];

void main()
{
	srand(time(NULL));

	for (int i = 0; i < CARD_MAX; i++)
	{
		cardArray[i] = i;
	}

	for (int i = 0; i < CARD_MAX; i++)
	{
		int dest, sour, temp;
		
		dest = rand() % CARD_MAX;
		sour = rand() % CARD_MAX;

		temp = cardArray[dest];
		cardArray[dest] = cardArray[sour];
		cardArray[sour] = temp;
	}

	int count = 0;
	int money = 1000000;
	int betAmount;

	int resultCard[3];

	while (count < CARD_MAX && money > 0)
	{
		cout << "치트 :";
		OutputCard(cardArray[count + 2] / 13, cardArray[count + 2] % 13);

		for (int i = 0; i < 3; i++)
		{
			int cardType = cardArray[i + count] / 13;
			int cardNum = cardArray[i + count] % 13;
			resultCard[i] = cardNum;

			if (i == 2)
			{
				while (true)
				{
					cout << "최소 배팅금은 1000원 입니다." << endl;
					cout << "배팅금 : ";
					cin >> betAmount;

					if (betAmount > 1000)
					{
						break;
					}
				}
			}

			OutputCard(cardType, cardNum);
		}

		if ((resultCard[0] - resultCard[1] > 0) ?
			resultCard[2] < resultCard[0] && resultCard[2] > resultCard[1] :
			resultCard[2] > resultCard[0] && resultCard[2] < resultCard[1])
		{
			cout << "돈을 땄습니다." << endl;
			money += betAmount * 2;
		}
		else
		{
			cout << "돈을 잃었습니다." << endl;
			money -= betAmount;
		}

		cout << "현재 소지금 : " << money << endl;

		count += 3;

		cout << '\n';
	}

	cout << "돈을 모두 잃었거나 카드를 전부 소진하였습니다." << endl;
}

void OutputCard(int cardType, int cardNum)
{
	char convertCardNum[13] = { 'A', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K' };
	switch (cardType)
	{
	case 0:
		printf("♠");
		(cardNum == 9) ? printf("%d", 10) : printf("%c", convertCardNum[cardNum]);
		break;
	case 1:
		printf("◆");
		(cardNum == 9) ? printf("%d", 10) : printf("%c", convertCardNum[cardNum]);
		break;
	case 2:
		printf("♣");
		(cardNum == 9) ? printf("%d", 10) : printf("%c", convertCardNum[cardNum]);
		break;
	case 3:
		printf("♥");
		(cardNum == 9) ? printf("%d", 10) : printf("%c", convertCardNum[cardNum]);
		break;
	}

	cout << '\n';
}

