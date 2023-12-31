#include "Report_18.h"

//婁薯 1. 煎傳 渡繩晦
//
//- 渡繩廓�� 6偃 + 爾傘蝶 廓�� 1偃
//
//- 6偃 殮溘 嫡朝棻.
//
//- в熱 : 纂お
//
//- っ薑
//
//- 1蛔 : 渡繩廓�� 6偃諦 頂陛 殮溘и 6偃曖 璋濠陛 偽擊陽
//
//- 2蛔 : 渡繩廓�� 5偃諦 + 爾傘蝶 廓�� 1偃諦 頂陛 殮溘и 璋濠 6偃陛 偽擊陽
//
//- 3蛔 : 渡繩廓�� 5偃諦 頂陛 殮溘и 璋濠 5偃陛 偽擊陽
//
//- 4蛔 : 渡繩廓�� 5偃諦 頂陛 殮溘и 璋濠 4偃陛 偽擊陽
//
//- 5蛔 : 渡繩廓�� 5偃諦 頂陛 殮溘и 璋濠 3偃陛 偽擊陽

namespace REPORT_18
{
	struct Lotto
	{
		const char* name;
		int turn;
		int rank;
		long long salePrice;
		int winNum[LOTTO_DRAW_NUM];
		int bonusNum;
	};

	void Run()
	{
		// 衛萄 蟾晦��
		srand(time(NULL));

		Lotto lotto;

		lotto.name = "渠夢渡繩";
		lotto.turn = 1067;
		lotto.salePrice = 110703299000;

		int selectNum[LOTTO_DRAW_NUM] = { 0, 0, 0, 0, 0, 0 };

		int winNumLength = sizeof(lotto.winNum) / sizeof(lotto.winNum[0]);

		// 煎傳 渡繩 廓�� 蟾晦��
		InitWinNum(lotto.winNum);

		// 煎傳 渡繩 廓�� 螃葷離牖 薑葬
		Sort(lotto.winNum, winNumLength);

		// 爾傘蝶 廓�� 蹺陛
		lotto.bonusNum = rand() % 45 + 1;

		while (DuplicateNumCheck(lotto.winNum, lotto.bonusNum, LOTTO_DRAW_NUM))
		{
			lotto.bonusNum = rand() % 45 + 1;
		}

		int count = 0;
		int winCount = 0;
		char inputNum[20];

		int inputNumLength;
		int n_inputNum = 0;

		while (count < LOTTO_DRAW_NUM)
		{
			// 纂お
			OutputCheat(lotto.winNum, lotto.bonusNum);

			// 煎傳 殮溘 �飛� 轎溘
			OutputSelectNum(selectNum, lotto.name);

			printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
			printf("弛                煎傳 廓�ㄧ� 殮溘ж撮蹂.                 弛\n");
			printf("弛                                                        弛\n");
			printf("弛         0擊 殮溘ж賊 濠翕戲煎 廓�ㄟ� 轎溘腌棲棻.       弛\n");
			printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

			cout << "廓�� " << count + 1 << " : ";
			cin >> inputNum;

			inputNumLength = StrLength(inputNum, sizeof(inputNum));	// 殮溘嫡擎 僥濠翮曖 望檜蒂 奩��
			n_inputNum = ConverStrToInt(inputNum, inputNumLength);	// 殮溘嫡擎 僥濠翮 璋濠蒂 int⑽戲煎 奩��


			if (n_inputNum == 0) // 楠渾
			{
				n_inputNum = rand() % LOTTO_NUM_MAX + 1;

				while (DuplicateNumCheck(selectNum, n_inputNum, count)) // 楠渾戲煎 厥擎 璋濠 醞縑 醞犒檜 氈擊 唳辦
				{
					n_inputNum = rand() % LOTTO_NUM_MAX + 1;
				}
			}
			else if (n_inputNum > 0 && n_inputNum <= 45)
			{
				if (DuplicateNumCheck(selectNum, n_inputNum, count)) // 醞犒脹 璋濠陛 氈朝雖 �挫�
				{
					system("cls");
					printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
					printf("弛             醞犒脹 璋濠蒂 殮溘ж艘蝗棲棻.              弛\n");
					printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
					continue;
				}
			}
			else
			{
				system("cls");
				printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
				printf("弛           1 ~ 45 餌檜曖 璋濠虜 殮溘п輿撮蹂.           弛\n");
				printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
				continue;
			}

			selectNum[count] = n_inputNum; // 餌辨濠陛 摹鷗и 璋濠寡翮縑 殮溘и 璋濠 鳶殮

			count++;

			system("cls");
		}

		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛             ⑷營 煎傳 廓�ㄧ� 蹺繩醞殮棲棻.....         弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		Sleep(2000);

		// 渡繩廓�� / 摹鷗廓�� 轎溘 塽 渡繩 罹睡 �挫�
		system("cls");
		OutputWinNum(lotto.winNum, lotto.bonusNum, lotto.name, lotto.turn);

		Sort(selectNum, sizeof(selectNum) / sizeof(selectNum[0]));
		OutputSelectNum(selectNum, lotto.name);

		long winPrice = 0;
		bool isWin = true;
		bool isBonusWin = false;

		// 渡繩廓�� 偎熱 �挫�
		winCount = GetWinCount(lotto.winNum, selectNum);
		if (DuplicateNumCheck(selectNum, lotto.bonusNum, LOTTO_NUM_MAX))
		{
			winCount++;
			isBonusWin = true;
		}

		// 渡繩 旎擋 塽 蛔熱 �挫�
		switch (winCount)
		{
		case 6:
			winPrice = ((lotto.salePrice / 100) * 25) / 13;
			lotto.rank = 1;
			break;
		case 5:
			if (isBonusWin)
			{
				winPrice = ((lotto.salePrice / 100) * 4) / 82;
				lotto.rank = 2;
			}
			else
			{
				winPrice = ((lotto.salePrice / 100) * 4) / 3679;
				lotto.rank = 3;
			}
			break;
		case 4:
			winPrice = 50000;
			lotto.rank = 4;
			break;
		case 3:
			winPrice = 5000;
			lotto.rank = 5;
			break;
		default:
			isWin = false;
			printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
			printf("弛                嬴蔣啪紫, 釩繩腎歷蝗棲棻.               弛\n");
			printf("弛                                                        弛\n");
			printf("弛                 渡繩 廓�� %d偃 璋濠橾纂                 弛\n", winCount);
			printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
			break;
		}

		// 渡繩唸婁轎溘
		if (isWin)
		{
			OutputWinResult(winCount, lotto.rank, winPrice);
		}
	}

	void InitWinNum(int winNum[])
	{
		// 煎傳 渡繩 廓�� 蟾晦��
		for (int i = 0; i < LOTTO_DRAW_NUM; i++)
		{
			winNum[i] = rand() % LOTTO_NUM_MAX + 1;

			if (DuplicateNumCheck(winNum, winNum[i], i))
			{
				i--;
				continue;
			}
		}
	}

	// 寡翮 螃葷離牖 薑葬
	void Sort(int arr[], int arrLength)
	{
		int temp;

		for (int i = arrLength - 1; i > 0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}

	bool DuplicateNumCheck(int arr[], int value, int size)
	{
		for (int i = 0; i < size; i++)
		{
			// 寡翮 寰縑 氈朝 高婁 衙偃滲熱煎 嫡擎 value陛 翕橾й 陽
			if (arr[i] == value)
			{
				return true;
			}
		}

		return false;
	}

	int GetWinCount(int winNum[], int selectNum[])
	{
		int winCount = 0;

		for (int i = 0; i < LOTTO_DRAW_NUM; i++)
		{
			for (int j = 0; j < LOTTO_DRAW_NUM; j++)
			{
				if (winNum[i] == selectNum[j])
				{
					winCount++;
					break;
				}
			}
		}

		return winCount;
	}

	int StrLength(char strValue[], int strSize)
	{
		int strLength = 0;

		for (int i = 0; i < strSize; i++)
		{
			if (strValue[i] == NULL) break;
			strLength++;
		}

		return strLength;
	}

	int ConvertCharToInt(char value)
	{
		return (static_cast<int>(value) - 48);
	}

	int ConverStrToInt(char strValue[], int strLength)
	{
		int returnNum = 0;
		int digit = 1;

		for (int i = strLength - 1; i >= 0; i--)
		{
			returnNum += ConvertCharToInt(strValue[i]) * digit;
			digit *= 10;
		}

		return returnNum;
	}

	void OutputCheat(int winNum[], int bonusNum)
	{
		printf(" 纂お)\n");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛    %3d    %3d    %3d    %3d    %3d    %3d   +   %3d    弛\n", winNum[0], winNum[1], winNum[2], winNum[3], winNum[4], winNum[5], bonusNum);
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
	}

	void OutputSelectNum(int selectNum[], const char* name)
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛                %s Lotto 煎傳 廓��                弛\n", name);
		printf("弛                                                        弛\n");
		printf("弛         %3d    %3d    %3d    %3d    %3d    %3d         弛\n", selectNum[0], selectNum[1], selectNum[2], selectNum[3], selectNum[4], selectNum[5]);
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
	}

	void OutputWinNum(int winNum[], int bonusNum, const char* name, int turn)
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛             %s Lotto %4d�� 渡繩 唸婁            弛\n", name, turn);
		printf("弛                                                        弛\n");
		printf("弛    %3d    %3d    %3d    %3d    %3d    %3d   +   %3d    弛\n", winNum[0], winNum[1], winNum[2], winNum[3], winNum[4], winNum[5], bonusNum);
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
	}

	void OutputWinResult(int winCount, int rank, long winPrice)
	{
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛      蹴жм棲棻! %d蛔 殮棲棻.  識 %10d錳 渡繩     弛\n", rank, winPrice);
		printf("弛                                                        弛\n");
		printf("弛                渡繩 廓�� %d偃 璋濠橾纂                  弛\n", winCount);
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
	}
}