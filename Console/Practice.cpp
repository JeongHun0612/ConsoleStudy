//과제 2. 월남뽕(타임 어택)
//
//- 치트 필수
//
//- ♠ 1 ~13까지의 카드
//
//- ◆ 1 ~13까지의 카드
//
//- ♣ 1 ~13까지의 카드
//
//- ♥ 1 ~13까지의 카드
//
//※ 종류별 13장->총 52장
//
//- 예외처리
//ㄴ A -> 1
//ㄴ J -> 11
//ㄴ Q -> 12
//ㄴ K -> 13
//
//- 52장의 카드를 최소 한번 랜덤으로 섞어주고 그 후 매턴 마다 3장씩 뒤집는다.
//
//- 앞쪽에 배치된 두장의 카드를 보고 최소 배팅액 이상의 금액을 배팅한다.
//
//- 배팅 후 세번째 카드의 수가 앞서 오픈된 카드 숫자의 사이에 있다면 배팅금의 2배 획득하여 소지금 추가
//
//- 반대라면 소지금에서 배팅한 만큼 마이너스
//
//- 필수 : 한턴이 끝나고 사용된 카드는 버려져 사용할 수 없다.
//
//- 종료 조건 : 돈을 다 잃거나 카드가 전부 떨어졌을 때

#include <iostream>
#include <time.h>

#define CARD_MAX 52

using namespace std;

using std::cout;
using std::cin;
using std::endl;

void OutputCard(int cardType, int cardNum);

int cardArray[CARD_MAX];

void main()
{
	//카드 초기화
	for (int i = 0; i < CARD_MAX; i++)
	{
		cardArray[i] = i;
	}

	//카드 셔플
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
	int money = 100000;
	int betAmount;

	int resultCard[3];

	while (count < CARD_MAX && money > 0)
	{
		cout << "치트 : ";
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
					cout << "배팅금은 최소 1000원 입니다." << endl;
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

		if (resultCard[0] - resultCard[1] > 0 ? 
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
}

void OutputCard(int cardType, int cardNum)
{
	char convertCard[13] = { 'A', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K' };

	switch (cardType)
	{
	case 0:
		printf("♠");
		(cardNum == 9) ? printf("%d", 10) : printf("%c", convertCard[cardNum]);
		break;
	case 1:
		printf("◆");
		(cardNum == 9) ? printf("%d", 10) : printf("%c", convertCard[cardNum]);
		break;
	case 2:
		printf("♣");
		(cardNum == 9) ? printf("%d", 10) : printf("%c", convertCard[cardNum]);
		break;
	case 3:
		printf("♥");
		(cardNum == 9) ? printf("%d", 10) : printf("%c", convertCard[cardNum]);
		break;
	}

	cout << '\n';
}
