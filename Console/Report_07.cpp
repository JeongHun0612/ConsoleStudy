#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;

/*
���� 2. ���� ����ȭ

- ���ݱ��� ��� ������ �����Ѵ�.

- ��� ������ �ߴ��� ����ȭ ���ѿ´�.

Ÿ�� ����. ���������� (if)

- �־��� �ð��ȿ� ���������� ������ �ۼ��� �����Ͽ� �˻縦 �ް� ����ϸ� OK

- �ð����� : 13��

- ���н� : ���� ��÷ -> (3 X @)��

���� ����. �迭

- ��Ʈ�� ����´�.

- �����Ұ� ������ �´�. (EX : �迭�� OOO�̴�.)
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
	// ���� 2. ���� ����ȭ
	// ==============================================================================================================

	cout << "���� 2. ���� ����ȭ" << endl;
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

	// ��÷ ��ȣ �ʱ�ȭ
	InitWinNum(winNumArray, winNumArraySize);

	// ġƮ
	//for (int i = 0; i < winNumArraySize; i++)
	//{
	//	cout << winNumArray[i] << endl;
	//}
	
	while (count < 6)
	{
		OutputCurrentLottoNum(lottoNumArray);

		printf("��������������������������������������������������������������������������������������������������������������������\n");
		printf("��                �ζ� ��ȣ�� �Է��ϼ���.                 ��\n");
		printf("��                                                        ��\n");
		printf("��         0�� �Է��ϸ� �ڵ����� ��ȣ�� ��µ˴ϴ�.       ��\n");
		printf("��������������������������������������������������������������������������������������������������������������������\n");

		cout << "��ȣ " << count + 1 << " : ";
		cin >> inputLottoNum;

		// ���� ��ȣ ���
		if (inputLottoNum == 0)
		{
			inputLottoNum = rand() % 45 + 1;
		}

		// ���� ���� ����ó��
		if (inputLottoNum < 0 || inputLottoNum > 45)
		{
			system("cls");
			printf("��������������������������������������������������������������������������������������������������������������������\n");
			printf("��           1 ~ 45 ������ ���ڸ� �Է����ּ���.           ��\n");
			printf("��������������������������������������������������������������������������������������������������������������������\n");
			continue;
		}

		// �ߺ� ��ȣ ����ó��
		if (count > 0 && DuplicateNumCheck(lottoNumArray, lottoNumArraySize, inputLottoNum) == 0)
		{
			system("cls");
			printf("��������������������������������������������������������������������������������������������������������������������\n");
			printf("��             �ߺ��� ���ڸ� �Է��Ͽ����ϴ�.              ��\n");
			printf("��������������������������������������������������������������������������������������������������������������������\n");
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
		printf("��������������������������������������������������������������������������������������������������������������������\n");
		printf("��                �ƽ��Ե�, ��÷�Ǿ����ϴ�.               ��\n");
		printf("��                                                        ��\n");
		printf("��                  ��÷ ��ȣ ���� : %2d                   ��\n", winNumCount);
		printf("��������������������������������������������������������������������������������������������������������������������\n");
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

	// winNumArray �������� ����
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
	printf("��������������������������������������������������������������������������������������������������������������������\n");
	printf("��             ��ڴ�÷ Lotto  ���� �Է� ��ȣ             ��\n");
	printf("��                                                        ��\n");
	printf("��         %3d    %3d    %3d    %3d    %3d    %3d         ��\n", lottoNumArray[0], lottoNumArray[1], lottoNumArray[2], lottoNumArray[3], lottoNumArray[4], lottoNumArray[5]);
	printf("��������������������������������������������������������������������������������������������������������������������\n");
}

void OutputCurrentWinNum(int winNumArray[])
{
	printf("��������������������������������������������������������������������������������������������������������������������\n");
	printf("��               ��ڴ�÷ Lotto  ��÷ ��ȣ                ��\n");
	printf("��                                                        ��\n");
	printf("��      %3d   %3d   %3d   %3d   %3d   %3d   +   %3d       ��\n", winNumArray[0], winNumArray[1], winNumArray[2], winNumArray[3], winNumArray[4], winNumArray[5], winNumArray[6]);
	printf("��������������������������������������������������������������������������������������������������������������������\n");
}

void OutputWinPriceWindow(int winNumCount, const int winPriceRank)
{
	printf("��������������������������������������������������������������������������������������������������������������������\n");
	printf("��             �����մϴ�!   �� %10d�� ��÷         ��\n", winPriceRank);
	printf("��                                                        ��\n");
	printf("��                  ��÷ ��ȣ ���� : %2d                   ��\n", winNumCount);
	printf("��������������������������������������������������������������������������������������������������������������������\n");
}