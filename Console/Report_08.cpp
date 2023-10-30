#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

//婁薯 1. 璋濠 撿掘
//
//- 0 ~9梱雖曖 璋濠 醞 闡У攪陛 歜曖煎 3偃蒂 鉻朝棻.
//
//- 闡У攪陛 鉻擎 璋濠蒂 Ы溯檜橫陛 歜曖 璋濠 3偃蒂 摹鷗ж罹 璋濠諦 濠葬熱梱雖 蜃蹺朝 啪歜
//
//- 虜擒 摹鷗и 璋濠陛 闡У攪 璋濠諦 偽戲釭 濠葬熱陛 棻蒂 唳辦
//中 1獐(1B)
//
//- 虜擒 摹鷗и 璋濠陛 闡У攪 璋濠諦 偽堅 濠葬熱梱雖 橾纂й 唳辦
//中 1蝶お塭檜觼(1S)
//
//- 虜擒 摹鷗и 璋濠陛 闡У攪 璋濠諦 偽雖 彊堅 濠葬熱梱雖 橾纂ж雖 彊戲賊
//中 1嬴醒(1O)
//
//- 檜溢啪 и 欐縑 3S蒂 虜菟唳辦 賃廓虜縑 蜃鏡朝雖 唸婁蒂 爾罹輿貊 啪歜 謙猿
//
//- в熱 : 纂お, 寡翮 X

int InitAnswerNum();
void DuplicateNumCheck(int answerNum, int playerNum);

int InputException();
int RangeException(int playerNum);
int DuplicationException(int playerNum1, int playerNum2, int playerNum3);

// 瞪羲 滲熱
int strikeCount = 0;
int ballCount = 0;
int outCount = 0;

void main()
{
	// 婁薯 1. 璋濠 撿掘
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

		cout << "纂お : " << answerNum << endl;

		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛        0 ~ 9 梱雖曖 璋濠 3偃蒂 醞犒橈檜 殮溘п輿撮蹂.       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		cout << "璋濠1 : "; cin >> playerNum1;
		if (InputException() || RangeException(playerNum1)) continue;
		rewind(stdin);

		cout << "璋濠2 : "; cin >> playerNum2;
		if (InputException() || RangeException(playerNum2)) continue;
		rewind(stdin);

		cout << "璋濠3 : "; cin >> playerNum3;
		if (InputException() || RangeException(playerNum3)) continue;
		rewind(stdin);

		if (DuplicationException(playerNum1, playerNum2, playerNum3)) continue;

		playerNum = (playerNum1 * 100) + (playerNum2 * 10) + playerNum3;

		DuplicateNumCheck(answerNum, playerNum);

		count++;

		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛                        紫瞪 �蝦� : %2d                       弛\n", count);
		printf("弛                                                             弛\n");
		printf("弛            STRIKE : %d     BALL : %d     OUT : %d              弛\n", strikeCount, ballCount, outCount);
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
	}

	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("弛                        蹴ж萄董棲棻!!                       弛\n");
	printf("弛                                                             弛\n");
	printf("弛                識 %d廓 虜縑 薑港擊 蜃蹺樟蝗棲棻.             弛\n", count);
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛                  澀跤脹 ⑽衝曖 殮溘殮棲棻.                  弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛               0 ~ 9梱雖曖 璋濠蒂 殮溘п輿撮蹂.              弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		return 1;
	}

	return 0;
}

int DuplicationException(int playerNum1, int playerNum2, int playerNum3)
{
	if ((playerNum1 == playerNum2 || playerNum1 == playerNum3 || playerNum2 == playerNum3))
	{
		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛                醞犒脹 璋濠蒂 殮溘ж艘蝗棲棻.                弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

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