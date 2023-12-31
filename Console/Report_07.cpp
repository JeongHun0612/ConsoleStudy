#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;

/*
婁薯 2. 犒蝗 掘⑷��

- 雖旎梱雖 寡遴 頂辨擊 犒蝗и棻.

- 橫飩啪 犒蝗擊 ц朝雖 掘⑷�� 衛麵螞棻.

顫歜 橫鷗. 陛嬪夥嬪爾 (if)

- 輿橫霞 衛除寰縑 陛嬪夥嬪爾 煎霜擊 濛撩�� 褒чж罹 匐餌蒂 嫡堅 鱔婁ж賊 OK

- 衛除薯и : 13碟

- 褒ぬ衛 : 梭雖 渡繩 -> (3 X @)濰

и還 褻餌. 寡翮

- 喻お縑 瞳橫螞棻.

- 綠嶸й匙 儅陝п 螞棻. (EX : 寡翮擎 OOO檜棻.)
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
	// 婁薯 2. 犒蝗 掘⑷��
	// ==============================================================================================================

	cout << "婁薯 2. 犒蝗 掘⑷��" << endl;
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

	// 渡繩 廓�� 蟾晦��
	InitWinNum(winNumArray, winNumArraySize);

	// 纂お
	//for (int i = 0; i < winNumArraySize; i++)
	//{
	//	cout << winNumArray[i] << endl;
	//}
	
	while (count < 6)
	{
		OutputCurrentLottoNum(lottoNumArray);

		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛                煎傳 廓�ㄧ� 殮溘ж撮蹂.                 弛\n");
		printf("弛                                                        弛\n");
		printf("弛         0擊 殮溘ж賊 濠翕戲煎 廓�ㄟ� 轎溘腌棲棻.       弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		cout << "廓�� " << count + 1 << " : ";
		cin >> inputLottoNum;

		// 楠渾 廓�� 轎溘
		if (inputLottoNum == 0)
		{
			inputLottoNum = rand() % 45 + 1;
		}

		// 璋濠 彰嬪 蕨諼籀葬
		if (inputLottoNum < 0 || inputLottoNum > 45)
		{
			system("cls");
			printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
			printf("弛           1 ~ 45 餌檜曖 璋濠虜 殮溘п輿撮蹂.           弛\n");
			printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
			continue;
		}

		// 醞犒 廓�� 蕨諼籀葬
		if (count > 0 && DuplicateNumCheck(lottoNumArray, lottoNumArraySize, inputLottoNum) == 0)
		{
			system("cls");
			printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
			printf("弛             醞犒脹 璋濠蒂 殮溘ж艘蝗棲棻.              弛\n");
			printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛                嬴蔣啪紫, 釩繩腎歷蝗棲棻.               弛\n");
		printf("弛                                                        弛\n");
		printf("弛                  渡繩 廓�� 偎熱 : %2d                   弛\n", winNumCount);
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
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

	// winNumArray 螃葷離牖 薑溺
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
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("弛             渠夢渡繩 Lotto  ⑷營 殮溘 廓��             弛\n");
	printf("弛                                                        弛\n");
	printf("弛         %3d    %3d    %3d    %3d    %3d    %3d         弛\n", lottoNumArray[0], lottoNumArray[1], lottoNumArray[2], lottoNumArray[3], lottoNumArray[4], lottoNumArray[5]);
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
}

void OutputCurrentWinNum(int winNumArray[])
{
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("弛               渠夢渡繩 Lotto  渡繩 廓��                弛\n");
	printf("弛                                                        弛\n");
	printf("弛      %3d   %3d   %3d   %3d   %3d   %3d   +   %3d       弛\n", winNumArray[0], winNumArray[1], winNumArray[2], winNumArray[3], winNumArray[4], winNumArray[5], winNumArray[6]);
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
}

void OutputWinPriceWindow(int winNumCount, const int winPriceRank)
{
	printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
	printf("弛             蹴жм棲棻!   識 %10d錳 渡繩         弛\n", winPriceRank);
	printf("弛                                                        弛\n");
	printf("弛                  渡繩 廓�� 偎熱 : %2d                   弛\n", winNumCount);
	printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
}