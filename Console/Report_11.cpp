#include "Report_11.h"

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
			// 3장의 카드 확인
			for (int i = 0; i < 3; i++)
			{
				resultTrump[i] = trump[i + count] % 13;

				if (i == 2)
				{
					// 치트
					cout << "치트" << endl;
					cout << "세번째 카드값 : " << resultTrump[2] + 1 << endl;

					printf("┌───────────────────────────────┐\n");
					printf("│       배팅금을 걸어주세요.    │\n");
					printf("│                               │\n");
					printf("│      최소 배팅금 : %4d원     │\n", MIN_BET_AMOUNT);
					printf("└───────────────────────────────┘\n");
					cout << "배팅금 : ";
					cin >> betAmount;

					// 최소 배팅금 예외처리 - 미구현 (동작 오류)
					if (betAmount < MIN_BET_AMOUNT)
					{
						printf("┌───────────────────────────────┐\n");
						printf("│   최소 배팅금을 준수해주세요! │\n");
						printf("└───────────────────────────────┘\n");
						count -= 2;
						i -= 2;
					}
				}

				OutputTrump(trump[i + count] / 13, trump[i + count] % 13);

				count++;
			}

			// 결과 도출
			if (BetResult(resultTrump))
			{
				printf("┌───────────────────────────────┐\n");
				printf("│         축하드립니다!!        │\n");
				printf("│                               │\n");
				printf("│       현재 소지금 : %6d    │\n", money += betAmount * 2);
				printf("└───────────────────────────────┘\n");
			}
			else
			{
				printf("┌───────────────────────────────┐\n");
				printf("│     배팅금이 차감되었습니다.  │\n");
				printf("│                               │\n");
				printf("│       현재 소지금 : %6d    │\n", money -= betAmount);
				printf("└───────────────────────────────┘\n");
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
			(resultTrump[0] > resultTrump[2] && resultTrump[1] < resultTrump[2]) : // 1번 카드 숫자가 더 큰 경우
			(resultTrump[0] < resultTrump[2] && resultTrump[1] > resultTrump[2]);  // 1번 카드 숫자가 더 작은 경우
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
		case 0: // 스페이드
			printf("┌────────────┐\n");
			printf("│ ♠       ♠│\n");
			printf("│            │\n");
			printf((trumpNum == 9) ? "│     %d     │\n" : "│     %c      │\n", cNum);
			printf("│     ♠     │\n");
			printf("│            │\n");
			printf("│            │\n");
			printf("│ ♠       ♠│\n");
			printf("└────────────┘\n");
			break;
		case 1: // 다이아
			printf("┌────────────┐\n");
			printf("│ ◆       ◆│\n");
			printf("│            │\n");
			printf((trumpNum == 9) ? "│     %d     │\n" : "│     %c      │\n", cNum);
			printf("│     ◆     │\n");
			printf("│            │\n");
			printf("│            │\n");
			printf("│ ◆       ◆│\n");
			printf("└────────────┘\n");
			break;
		case 2: // 클로버
			printf("┌────────────┐\n");
			printf("│ ♣       ♣│\n");
			printf("│            │\n");
			printf((trumpNum == 9) ? "│     %d     │\n" : "│     %c      │\n", cNum);
			printf("│     ♣     │\n");
			printf("│            │\n");
			printf("│            │\n");
			printf("│ ♣       ♣│\n");
			printf("└────────────┘\n");
			break;
		case 3: // 하트
			printf("┌────────────┐\n");
			printf("│ ♥       ♥│\n");
			printf("│            │\n");
			printf((trumpNum == 9) ? "│     %d     │\n" : "│     %c      │\n", cNum);
			printf("│     ♥     │\n");
			printf("│            │\n");
			printf("│            │\n");
			printf("│ ♥       ♥│\n");
			printf("└────────────┘\n");
			break;
		}
	}

	void GameExit(int money, int count)
	{
		if (money < 0)
		{
			printf("┌───────────────────────────────┐\n");
			printf("│  소지금을 모두 소진하였습니다.│\n");
			printf("└───────────────────────────────┘\n");
		}

		if (count >= 52)
		{
			printf("┌───────────────────────────────┐\n");
			printf("│   카드를 모두 소진하였습니다. │\n");
			printf("└───────────────────────────────┘\n");
		}
	}
}