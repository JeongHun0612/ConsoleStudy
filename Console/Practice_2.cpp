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
	string cardType[4] = { "◆", "♥", "♣", "♠" };

	// 초기화
	for (int i = 0; i < CARD_MAX; i++)
	{
		card[i] = i;
	}

	// 셔플
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

		// 카드 3장을 뽑는 로직
		for (int i = 0; i < 3; i++)
		{
			resultCard[i] = card[count + i] % 13;
			cardTypeNum = card[count + i] / 13;

			if (i == 2)
			{
				cout << "배팅금을 걸어라" << endl;
				cin >> betMoney;
			}


			printf("%d번째 resultCard : %s/%s\n", i + 1, cardType[cardTypeNum].c_str(), cardNum[resultCard[i]].c_str());


			//string cardType[4] = { "◆", "♥", "♣", "♠" };
			//int cardType_N[4] = { 1, 2, 3, 4 };

			//cardType[cardTypeNum];
			//cardType_N[cardTypeNum];


		/*	switch (cardTypeNum)
			{
			case 0:
				printf("%d번째 resultCard : ◆/%s\n", i + 1, cardNum[resultCard[i]].c_str());
				break;
			case 1:
				printf("%d번째 resultCard : ♥/%s\n", i + 1, cardNum[resultCard[i]].c_str());
				break;
			case 2:
				printf("%d번째 resultCard : ♣/%s\n", i + 1, cardNum[resultCard[i]].c_str());
				break;
			case 3:
				printf("%d번째 resultCard : ♠/%s\n", i + 1, cardNum[resultCard[i]].c_str());
				break;
			}*/
		}

		// 결과를 확인하는 로직
		if (resultCard[0] < resultCard[1])
		{
			if (resultCard[0] < resultCard[2] && resultCard[1] > resultCard[2])
			{
				cout << "정답" << endl;
			}
			else
			{
				cout << "실패" << endl;
			}
		}
		else
		{
			if (resultCard[0] > resultCard[2] && resultCard[1] < resultCard[2])
			{
				cout << "정답" << endl;
			}
			else
			{
				cout << "실패" << endl;
			}
		}

		count += 3;
	}
}