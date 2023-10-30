#include "Report_15.h"

//과제 4. 하이로우세븐
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
//- 52장의 카드를 최소 한번이상 랜덤으로 섞고 그후 매턴마다 5장씩 뒤집는다.
//
//- 앞쪽에 배치된 다섯장의 카드를 보고 6번째 카드의 숫자를 예측하는 게임
//
//- 세븐보다 높으면 하이, 낮으면 로우, 아니면 세븐인지 중에 1개 배팅
//
//- 세븐이면 13배 배당금 획득

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

		// 카드 초기화
		InitCardSet();

		// 카드 셔플
		ShuffleCard();

		while (money > 0)
		{
			// 어레인지 카드 셋
			SetArrangCard();

			// 어레인지 카드 출력
			if (CHEAT)
			{
				printf("★ 치트 모드 ★\n\n");
				OutputArrageCard(ARRAGE_CARD_MAX);
			}
			else
			{
				OutputArrageCard(ARRAGE_CARD_MAX - 1);
			}

			// 배팅금 입력
			printf("┌──────────────────────────────────┐\n");
			printf("│       배팅금을 입력해주세요.     │\n");
			printf("│                                  │\n");
			printf("│       최소 배팅금 : 10,000원     │\n");
			printf("└──────────────────────────────────┘\n");
			cout << "배팅금 : ";
			cin >> betAmount;

			if (betAmount < 10000 || betAmount > money)
			{
				system("cls");
				printf("┌──────────────────────────────────┐\n");
				printf("│           배팅금 오류!!          │\n");
				printf("└──────────────────────────────────┘\n");
				continue;
			}

			cout << '\n';
			
			while (true)
			{
				// 하이로우세븐 선택
				printf("┌──────────────────────────────────┐\n");
				printf("│    0. 하이  1. 로우  2. 세븐     │\n");
				printf("└──────────────────────────────────┘\n");
				cout << "선택 : ";
				cin >> selectNum;

				if (selectNum < 0 || selectNum > 2)
				{
					printf("┌──────────────────────────────────┐\n");
					printf("│ 아래 번호 중 하나를 선택해주세요.│\n");
					printf("└──────────────────────────────────┘\n");
					continue;
				}
				
				break;
			}
	
			cout << '\n';

			// 결과 출력 및 연산
			system("cls");

			OutputArrageCard(ARRAGE_CARD_MAX);

			money += GetBetResult(betAmount, selectNum);

			printf("┌──────────────────────────────────┐\n");
			printf("│      배팅 결과금 : %8d      │\n", GetBetResult(betAmount, selectNum));
			printf("│                                  │\n");
			printf("│      현재 소지금 : %8d      │\n", money);
			printf("└──────────────────────────────────┘\n");
		}

		system("cls");
		printf("┌──────────────────────────────────┐\n");
		printf("│   소지금을 모두 소진하였습니다.  │\n");
		printf("└──────────────────────────────────┘\n");
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
				printf("♠");
				(cardNum == 9) ? printf("%d\t", 10) : printf("%c\t", charArray[cardNum]);
				break;
			case 1:
				printf("◆");
				(cardNum == 9) ? printf("%d\t", 10) : printf("%c\t", charArray[cardNum]);
				break;
			case 2:
				printf("♣");
				(cardNum == 9) ? printf("%d\t", 10) : printf("%c\t", charArray[cardNum]);
				break;
			case 3:
				printf("♥");
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
