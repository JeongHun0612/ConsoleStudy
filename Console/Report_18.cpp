#include "Report_18.h"

//°úÁ¦ 1. ·Î¶Ç ´çÃ·±â
//
//- ´çÃ·¹øÈ£ 6°³ + º¸³Ê½º ¹øÈ£ 1°³
//
//- 6°³ ÀÔ·Â ¹Þ´Â´Ù.
//
//- ÇÊ¼ö : Ä¡Æ®
//
//- ÆÇÁ¤
//
//- 1µî : ´çÃ·¹øÈ£ 6°³¿Í ³»°¡ ÀÔ·ÂÇÑ 6°³ÀÇ ¼ýÀÚ°¡ °°À»¶§
//
//- 2µî : ´çÃ·¹øÈ£ 5°³¿Í + º¸³Ê½º ¹øÈ£ 1°³¿Í ³»°¡ ÀÔ·ÂÇÑ ¼ýÀÚ 6°³°¡ °°À»¶§
//
//- 3µî : ´çÃ·¹øÈ£ 5°³¿Í ³»°¡ ÀÔ·ÂÇÑ ¼ýÀÚ 5°³°¡ °°À»¶§
//
//- 4µî : ´çÃ·¹øÈ£ 5°³¿Í ³»°¡ ÀÔ·ÂÇÑ ¼ýÀÚ 4°³°¡ °°À»¶§
//
//- 5µî : ´çÃ·¹øÈ£ 5°³¿Í ³»°¡ ÀÔ·ÂÇÑ ¼ýÀÚ 3°³°¡ °°À»¶§

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
		// ½Ãµå ÃÊ±âÈ­
		srand(time(NULL));

		Lotto lotto;

		lotto.name = "´ë¹Ú´çÃ·";
		lotto.turn = 1067;
		lotto.salePrice = 110703299000;

		int selectNum[LOTTO_DRAW_NUM] = { 0, 0, 0, 0, 0, 0 };

		int winNumLength = sizeof(lotto.winNum) / sizeof(lotto.winNum[0]);

		// ·Î¶Ç ´çÃ· ¹øÈ£ ÃÊ±âÈ­
		InitWinNum(lotto.winNum);

		// ·Î¶Ç ´çÃ· ¹øÈ£ ¿À¸§Â÷¼ø Á¤¸®
		Sort(lotto.winNum, winNumLength);

		// º¸³Ê½º ¹øÈ£ Ãß°¡
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
			// Ä¡Æ®
			OutputCheat(lotto.winNum, lotto.bonusNum);

			// ·Î¶Ç ÀÔ·Â È­¸é Ãâ·Â
			OutputSelectNum(selectNum, lotto.name);

			printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
			printf("¦¢                ·Î¶Ç ¹øÈ£¸¦ ÀÔ·ÂÇÏ¼¼¿ä.                 ¦¢\n");
			printf("¦¢                                                        ¦¢\n");
			printf("¦¢         0À» ÀÔ·ÂÇÏ¸é ÀÚµ¿À¸·Î ¹øÈ£°¡ Ãâ·ÂµË´Ï´Ù.       ¦¢\n");
			printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");

			cout << "¹øÈ£ " << count + 1 << " : ";
			cin >> inputNum;

			inputNumLength = StrLength(inputNum, sizeof(inputNum));	// ÀÔ·Â¹ÞÀº ¹®ÀÚ¿­ÀÇ ±æÀÌ¸¦ ¹ÝÈ¯
			n_inputNum = ConverStrToInt(inputNum, inputNumLength);	// ÀÔ·Â¹ÞÀº ¹®ÀÚ¿­ ¼ýÀÚ¸¦ intÇüÀ¸·Î ¹ÝÈ¯


			if (n_inputNum == 0) // ·£´ý
			{
				n_inputNum = rand() % LOTTO_NUM_MAX + 1;

				while (DuplicateNumCheck(selectNum, n_inputNum, count)) // ·£´ýÀ¸·Î ³ÖÀº ¼ýÀÚ Áß¿¡ Áßº¹ÀÌ ÀÖÀ» °æ¿ì
				{
					n_inputNum = rand() % LOTTO_NUM_MAX + 1;
				}
			}
			else if (n_inputNum > 0 && n_inputNum <= 45)
			{
				if (DuplicateNumCheck(selectNum, n_inputNum, count)) // Áßº¹µÈ ¼ýÀÚ°¡ ÀÖ´ÂÁö È®ÀÎ
				{
					system("cls");
					printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
					printf("¦¢             Áßº¹µÈ ¼ýÀÚ¸¦ ÀÔ·ÂÇÏ¿´½À´Ï´Ù.              ¦¢\n");
					printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
					continue;
				}
			}
			else
			{
				system("cls");
				printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
				printf("¦¢           1 ~ 45 »çÀÌÀÇ ¼ýÀÚ¸¸ ÀÔ·ÂÇØÁÖ¼¼¿ä.           ¦¢\n");
				printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
				continue;
			}

			selectNum[count] = n_inputNum; // »ç¿ëÀÚ°¡ ¼±ÅÃÇÑ ¼ýÀÚ¹è¿­¿¡ ÀÔ·ÂÇÑ ¼ýÀÚ »ðÀÔ

			count++;

			system("cls");
		}

		printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
		printf("¦¢             ÇöÀç ·Î¶Ç ¹øÈ£¸¦ ÃßÃ·ÁßÀÔ´Ï´Ù.....         ¦¢\n");
		printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");

		Sleep(2000);

		// ´çÃ·¹øÈ£ / ¼±ÅÃ¹øÈ£ Ãâ·Â ¹× ´çÃ· ¿©ºÎ È®ÀÎ
		system("cls");
		OutputWinNum(lotto.winNum, lotto.bonusNum, lotto.name, lotto.turn);

		Sort(selectNum, sizeof(selectNum) / sizeof(selectNum[0]));
		OutputSelectNum(selectNum, lotto.name);

		long winPrice = 0;
		bool isWin = true;
		bool isBonusWin = false;

		// ´çÃ·¹øÈ£ °¹¼ö È®ÀÎ
		winCount = GetWinCount(lotto.winNum, selectNum);
		if (DuplicateNumCheck(selectNum, lotto.bonusNum, LOTTO_NUM_MAX))
		{
			winCount++;
			isBonusWin = true;
		}

		// ´çÃ· ±Ý¾× ¹× µî¼ö È®ÀÎ
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
			printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
			printf("¦¢                ¾Æ½±°Ôµµ, ³«Ã·µÇ¾ú½À´Ï´Ù.               ¦¢\n");
			printf("¦¢                                                        ¦¢\n");
			printf("¦¢                 ´çÃ· ¹øÈ£ %d°³ ¼ýÀÚÀÏÄ¡                 ¦¢\n", winCount);
			printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
			break;
		}

		// ´çÃ·°á°úÃâ·Â
		if (isWin)
		{
			OutputWinResult(winCount, lotto.rank, winPrice);
		}
	}

	void InitWinNum(int winNum[])
	{
		// ·Î¶Ç ´çÃ· ¹øÈ£ ÃÊ±âÈ­
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

	// ¹è¿­ ¿À¸§Â÷¼ø Á¤¸®
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
			// ¹è¿­ ¾È¿¡ ÀÖ´Â °ª°ú ¸Å°³º¯¼ö·Î ¹ÞÀº value°¡ µ¿ÀÏÇÒ ¶§
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
		printf(" Ä¡Æ®)\n");
		printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
		printf("¦¢    %3d    %3d    %3d    %3d    %3d    %3d   +   %3d    ¦¢\n", winNum[0], winNum[1], winNum[2], winNum[3], winNum[4], winNum[5], bonusNum);
		printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
	}

	void OutputSelectNum(int selectNum[], const char* name)
	{
		printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
		printf("¦¢                %s Lotto ·Î¶Ç ¹øÈ£                ¦¢\n", name);
		printf("¦¢                                                        ¦¢\n");
		printf("¦¢         %3d    %3d    %3d    %3d    %3d    %3d         ¦¢\n", selectNum[0], selectNum[1], selectNum[2], selectNum[3], selectNum[4], selectNum[5]);
		printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
	}

	void OutputWinNum(int winNum[], int bonusNum, const char* name, int turn)
	{
		printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
		printf("¦¢             %s Lotto %4dÈ¸ ´çÃ· °á°ú            ¦¢\n", name, turn);
		printf("¦¢                                                        ¦¢\n");
		printf("¦¢    %3d    %3d    %3d    %3d    %3d    %3d   +   %3d    ¦¢\n", winNum[0], winNum[1], winNum[2], winNum[3], winNum[4], winNum[5], bonusNum);
		printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
	}

	void OutputWinResult(int winCount, int rank, long winPrice)
	{
		printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
		printf("¦¢      ÃàÇÏÇÕ´Ï´Ù! %dµî ÀÔ´Ï´Ù.  ÃÑ %10d¿ø ´çÃ·     ¦¢\n", rank, winPrice);
		printf("¦¢                                                        ¦¢\n");
		printf("¦¢                ´çÃ· ¹øÈ£ %d°³ ¼ýÀÚÀÏÄ¡                  ¦¢\n", winCount);
		printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
	}
}