#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;

/*
°úÁ¦ 2. º¹½À ±¸ÇöÈ­

- Áö±Ý±îÁö ¹è¿î ³»¿ëÀ» º¹½ÀÇÑ´Ù.

- ¾î¶»°Ô º¹½ÀÀ» Çß´ÂÁö ±¸ÇöÈ­ ½ÃÄÑ¿Â´Ù.

Å¸ÀÓ ¾îÅÃ. °¡À§¹ÙÀ§º¸ (if)

- ÁÖ¾îÁø ½Ã°£¾È¿¡ °¡À§¹ÙÀ§º¸ ·ÎÁ÷À» ÀÛ¼ºÈÄ ½ÇÇàÇÏ¿© °Ë»ç¸¦ ¹Þ°í Åë°úÇÏ¸é OK

- ½Ã°£Á¦ÇÑ : 13ºÐ

- ½ÇÆÐ½Ã : ±ôÁö ´çÃ· -> (3 X @)Àå

ÇÑÁÙ Á¶»ç. ¹è¿­

- ³ëÆ®¿¡ Àû¾î¿Â´Ù.

- ºñÀ¯ÇÒ°Í »ý°¢ÇØ ¿Â´Ù. (EX : ¹è¿­Àº OOOÀÌ´Ù.)
*/

void InitWinNum(int winNumArray[], int arraySize);
void SortNum(int numArray[], int arraySize);
int DuplicateNumCheck(int lottoNumArray[], int arraySize, int inputLottoNum);

void SetWinNum(int winNumArray[], int winNum, int nArray);
void SetLottoNum(int lottoNumArray[], int inputLottoNum, int nArray);

int GetLottoNumCompare(int lottoNumArray[], int lottoNumArraySize, int winNumArray[], int winNumArraySize);

void OutputCurrentLottoNum(int lottoNumArray[]);
void OutputCurrentWinNum(int winNumArray[]);
void OutputWinPriceWindow(int winNumCount, const int winPriceRank);

void main()
{
	// °úÁ¦ 2. º¹½À ±¸ÇöÈ­
	// ==============================================================================================================

	cout << "°úÁ¦ 2. º¹½À ±¸ÇöÈ­" << endl;
	cout << "---------------------------------------------------------------" << endl;

	int	count = 0;
	int winNumCount = 0;
	int inputLottoNum = 0;

	int lottoNumArray[6] = { 0, 0, 0, 0, 0, 0 };
	int winNumArray[7] = { 0, 0, 0, 0, 0, 0, 0 };

	const int lottoNumArraySize = sizeof(lottoNumArray)/sizeof(int);
	const int winNumArraySize = sizeof(winNumArray)/sizeof(int);

	const int winPriceRank1 = 1670947250;
	const int winPriceRank2 = 47470093;
	const int winPriceRank3 = 1257108;
	const int winPriceRank4 = 50000;
	const int winPriceRank5 = 5000;

	srand(time(NULL));

	// ´çÃ· ¹øÈ£ ÃÊ±âÈ­
	InitWinNum(winNumArray, winNumArraySize);

	// Ä¡Æ®
	//for (int i = 0; i < winNumArraySize; i++)
	//{
	//	cout << winNumArray[i] << endl;
	//}
	
	while (count < 6)
	{
		OutputCurrentLottoNum(lottoNumArray);

		printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
		printf("¦¢                ·Î¶Ç ¹øÈ£¸¦ ÀÔ·ÂÇÏ¼¼¿ä.                 ¦¢\n");
		printf("¦¢                                                        ¦¢\n");
		printf("¦¢         0À» ÀÔ·ÂÇÏ¸é ÀÚµ¿À¸·Î ¹øÈ£°¡ Ãâ·ÂµË´Ï´Ù.       ¦¢\n");
		printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");

		cout << "¹øÈ£ " << count + 1 << " : ";
		cin >> inputLottoNum;

		// ·£´ý ¹øÈ£ Ãâ·Â
		if (inputLottoNum == 0)
		{
			inputLottoNum = rand() % 45 + 1;
		}

		// ¼ýÀÚ ¹üÀ§ ¿¹¿ÜÃ³¸®
		if (inputLottoNum < 0 || inputLottoNum > 45)
		{
			system("cls");
			printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
			printf("¦¢           1 ~ 45 »çÀÌÀÇ ¼ýÀÚ¸¸ ÀÔ·ÂÇØÁÖ¼¼¿ä.           ¦¢\n");
			printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
			continue;
		}

		// Áßº¹ ¹øÈ£ ¿¹¿ÜÃ³¸®
		if (count > 0 && DuplicateNumCheck(lottoNumArray, lottoNumArraySize, inputLottoNum) == 0)
		{
			system("cls");
			printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
			printf("¦¢             Áßº¹µÈ ¼ýÀÚ¸¦ ÀÔ·ÂÇÏ¿´½À´Ï´Ù.              ¦¢\n");
			printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
			continue;
		}
		
		SetLottoNum(lottoNumArray, inputLottoNum, count);

		count++;

		system("cls");
	}

	SortNum(lottoNumArray, lottoNumArraySize);
	OutputCurrentLottoNum(lottoNumArray);
	OutputCurrentWinNum(winNumArray);

	winNumCount = GetLottoNumCompare(lottoNumArray, lottoNumArraySize, winNumArray, winNumArraySize);

	switch (winNumCount)
	{
	case 3:
		OutputWinPriceWindow(winNumCount, winPriceRank5);
		break;
	case 4:
		OutputWinPriceWindow(winNumCount, winPriceRank4);
		break;
	case 5:
		OutputWinPriceWindow(winNumCount, winPriceRank3);
		break;
	case 6:
		OutputWinPriceWindow(winNumCount, winPriceRank1);
		break;
	default:
		printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
		printf("¦¢                ¾Æ½±°Ôµµ, ³«Ã·µÇ¾ú½À´Ï´Ù.               ¦¢\n");
		printf("¦¢                                                        ¦¢\n");
		printf("¦¢                  ´çÃ· ¹øÈ£ °¹¼ö : %2d                   ¦¢\n", winNumCount);
		printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
		break;
	}
}

void InitWinNum(int winNumArray[], int arraySize)
{
	int count = 0;
	int winNum;

	while (count < 7)
	{
		winNum = rand() % 45 + 1;
		
		if (count > 0 && DuplicateNumCheck(winNumArray, arraySize, winNum) == 0)
		{
			continue;
		}

		SetWinNum(winNumArray, winNum, count);

		count++;
	}

	// winNumArray ¿À¸§Â÷¼ø Á¤·Ä
	SortNum(winNumArray, arraySize);
}

void SortNum(int numArray[], int arraySize)
{
	int temp = 0;

	for (int i = arraySize - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (numArray[j] > numArray[j + 1])
			{
				temp = numArray[j];
				numArray[j] = numArray[j + 1];
				numArray[j + 1] = temp;
			}
		}
	}
}

int DuplicateNumCheck(int lottoNumArray[], int arraySize, int inputLottoNum)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (inputLottoNum == lottoNumArray[i])
		{
			return 0;
		}
	}

	return 1;
}

void SetWinNum(int winNumArray[], int winNum, int nArray)
{
	winNumArray[nArray] = winNum;
}

void SetLottoNum(int lottoNumArray[], int inputLottoNum, int nArray)
{
	lottoNumArray[nArray] = inputLottoNum;
}

int GetLottoNumCompare(int lottoNumArray[], int lottoNumArraySize, int winNumArray[], int winNumArraySize)
{
	int compareCount = 0;

	for (int i = 0; i < winNumArraySize; i++)
	{
		for (int j = 0; j < lottoNumArraySize; j++)
		{
			if (winNumArray[i] == lottoNumArray[j])
			{
				compareCount += 1;
			}
		}
	}

	return compareCount;
}

void OutputCurrentLottoNum(int lottoNumArray[])
{
	printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	printf("¦¢             ´ë¹Ú´çÃ· Lotto  ÇöÀç ÀÔ·Â ¹øÈ£             ¦¢\n");
	printf("¦¢                                                        ¦¢\n");
	printf("¦¢         %3d    %3d    %3d    %3d    %3d    %3d         ¦¢\n", lottoNumArray[0], lottoNumArray[1], lottoNumArray[2], lottoNumArray[3], lottoNumArray[4], lottoNumArray[5]);
	printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
}

void OutputCurrentWinNum(int winNumArray[])
{
	printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	printf("¦¢               ´ë¹Ú´çÃ· Lotto  ´çÃ· ¹øÈ£                ¦¢\n");
	printf("¦¢                                                        ¦¢\n");
	printf("¦¢      %3d   %3d   %3d   %3d   %3d   %3d   +   %3d       ¦¢\n", winNumArray[0], winNumArray[1], winNumArray[2], winNumArray[3], winNumArray[4], winNumArray[5], winNumArray[6]);
	printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
}

void OutputWinPriceWindow(int winNumCount, const int winPriceRank)
{
	printf("¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤\n");
	printf("¦¢             ÃàÇÏÇÕ´Ï´Ù!   ÃÑ %10d¿ø ´çÃ·         ¦¢\n", winPriceRank);
	printf("¦¢                                                        ¦¢\n");
	printf("¦¢                  ´çÃ· ¹øÈ£ °¹¼ö : %2d                   ¦¢\n", winNumCount);
	printf("¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥\n");
}