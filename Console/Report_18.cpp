#include "Report_18.h"

//���� 1. �ζ� ��÷��
//
//- ��÷��ȣ 6�� + ���ʽ� ��ȣ 1��
//
//- 6�� �Է� �޴´�.
//
//- �ʼ� : ġƮ
//
//- ����
//
//- 1�� : ��÷��ȣ 6���� ���� �Է��� 6���� ���ڰ� ������
//
//- 2�� : ��÷��ȣ 5���� + ���ʽ� ��ȣ 1���� ���� �Է��� ���� 6���� ������
//
//- 3�� : ��÷��ȣ 5���� ���� �Է��� ���� 5���� ������
//
//- 4�� : ��÷��ȣ 5���� ���� �Է��� ���� 4���� ������
//
//- 5�� : ��÷��ȣ 5���� ���� �Է��� ���� 3���� ������

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
		// �õ� �ʱ�ȭ
		srand(time(NULL));

		Lotto lotto;

		lotto.name = "��ڴ�÷";
		lotto.turn = 1067;
		lotto.salePrice = 110703299000;

		int selectNum[LOTTO_DRAW_NUM] = { 0, 0, 0, 0, 0, 0 };

		int winNumLength = sizeof(lotto.winNum) / sizeof(lotto.winNum[0]);

		// �ζ� ��÷ ��ȣ �ʱ�ȭ
		InitWinNum(lotto.winNum);

		// �ζ� ��÷ ��ȣ �������� ����
		Sort(lotto.winNum, winNumLength);

		// ���ʽ� ��ȣ �߰�
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
			// ġƮ
			OutputCheat(lotto.winNum, lotto.bonusNum);

			// �ζ� �Է� ȭ�� ���
			OutputSelectNum(selectNum, lotto.name);

			printf("��������������������������������������������������������������������������������������������������������������������\n");
			printf("��                �ζ� ��ȣ�� �Է��ϼ���.                 ��\n");
			printf("��                                                        ��\n");
			printf("��         0�� �Է��ϸ� �ڵ����� ��ȣ�� ��µ˴ϴ�.       ��\n");
			printf("��������������������������������������������������������������������������������������������������������������������\n");

			cout << "��ȣ " << count + 1 << " : ";
			cin >> inputNum;

			inputNumLength = StrLength(inputNum, sizeof(inputNum));	// �Է¹��� ���ڿ��� ���̸� ��ȯ
			n_inputNum = ConverStrToInt(inputNum, inputNumLength);	// �Է¹��� ���ڿ� ���ڸ� int������ ��ȯ


			if (n_inputNum == 0) // ����
			{
				n_inputNum = rand() % LOTTO_NUM_MAX + 1;

				while (DuplicateNumCheck(selectNum, n_inputNum, count)) // �������� ���� ���� �߿� �ߺ��� ���� ���
				{
					n_inputNum = rand() % LOTTO_NUM_MAX + 1;
				}
			}
			else if (n_inputNum > 0 && n_inputNum <= 45)
			{
				if (DuplicateNumCheck(selectNum, n_inputNum, count)) // �ߺ��� ���ڰ� �ִ��� Ȯ��
				{
					system("cls");
					printf("��������������������������������������������������������������������������������������������������������������������\n");
					printf("��             �ߺ��� ���ڸ� �Է��Ͽ����ϴ�.              ��\n");
					printf("��������������������������������������������������������������������������������������������������������������������\n");
					continue;
				}
			}
			else
			{
				system("cls");
				printf("��������������������������������������������������������������������������������������������������������������������\n");
				printf("��           1 ~ 45 ������ ���ڸ� �Է����ּ���.           ��\n");
				printf("��������������������������������������������������������������������������������������������������������������������\n");
				continue;
			}

			selectNum[count] = n_inputNum; // ����ڰ� ������ ���ڹ迭�� �Է��� ���� ����

			count++;

			system("cls");
		}

		printf("��������������������������������������������������������������������������������������������������������������������\n");
		printf("��             ���� �ζ� ��ȣ�� ��÷���Դϴ�.....         ��\n");
		printf("��������������������������������������������������������������������������������������������������������������������\n");

		Sleep(2000);

		// ��÷��ȣ / ���ù�ȣ ��� �� ��÷ ���� Ȯ��
		system("cls");
		OutputWinNum(lotto.winNum, lotto.bonusNum, lotto.name, lotto.turn);

		Sort(selectNum, sizeof(selectNum) / sizeof(selectNum[0]));
		OutputSelectNum(selectNum, lotto.name);

		long winPrice = 0;
		bool isWin = true;
		bool isBonusWin = false;

		// ��÷��ȣ ���� Ȯ��
		winCount = GetWinCount(lotto.winNum, selectNum);
		if (DuplicateNumCheck(selectNum, lotto.bonusNum, LOTTO_NUM_MAX))
		{
			winCount++;
			isBonusWin = true;
		}

		// ��÷ �ݾ� �� ��� Ȯ��
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
			printf("��������������������������������������������������������������������������������������������������������������������\n");
			printf("��                �ƽ��Ե�, ��÷�Ǿ����ϴ�.               ��\n");
			printf("��                                                        ��\n");
			printf("��                 ��÷ ��ȣ %d�� ������ġ                 ��\n", winCount);
			printf("��������������������������������������������������������������������������������������������������������������������\n");
			break;
		}

		// ��÷������
		if (isWin)
		{
			OutputWinResult(winCount, lotto.rank, winPrice);
		}
	}

	void InitWinNum(int winNum[])
	{
		// �ζ� ��÷ ��ȣ �ʱ�ȭ
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

	// �迭 �������� ����
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
			// �迭 �ȿ� �ִ� ���� �Ű������� ���� value�� ������ ��
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
		printf(" ġƮ)\n");
		printf("��������������������������������������������������������������������������������������������������������������������\n");
		printf("��    %3d    %3d    %3d    %3d    %3d    %3d   +   %3d    ��\n", winNum[0], winNum[1], winNum[2], winNum[3], winNum[4], winNum[5], bonusNum);
		printf("��������������������������������������������������������������������������������������������������������������������\n");
	}

	void OutputSelectNum(int selectNum[], const char* name)
	{
		printf("��������������������������������������������������������������������������������������������������������������������\n");
		printf("��                %s Lotto �ζ� ��ȣ                ��\n", name);
		printf("��                                                        ��\n");
		printf("��         %3d    %3d    %3d    %3d    %3d    %3d         ��\n", selectNum[0], selectNum[1], selectNum[2], selectNum[3], selectNum[4], selectNum[5]);
		printf("��������������������������������������������������������������������������������������������������������������������\n");
	}

	void OutputWinNum(int winNum[], int bonusNum, const char* name, int turn)
	{
		printf("��������������������������������������������������������������������������������������������������������������������\n");
		printf("��             %s Lotto %4dȸ ��÷ ���            ��\n", name, turn);
		printf("��                                                        ��\n");
		printf("��    %3d    %3d    %3d    %3d    %3d    %3d   +   %3d    ��\n", winNum[0], winNum[1], winNum[2], winNum[3], winNum[4], winNum[5], bonusNum);
		printf("��������������������������������������������������������������������������������������������������������������������\n");
	}

	void OutputWinResult(int winCount, int rank, long winPrice)
	{
		printf("��������������������������������������������������������������������������������������������������������������������\n");
		printf("��      �����մϴ�! %d�� �Դϴ�.  �� %10d�� ��÷     ��\n", rank, winPrice);
		printf("��                                                        ��\n");
		printf("��                ��÷ ��ȣ %d�� ������ġ                  ��\n", winCount);
		printf("��������������������������������������������������������������������������������������������������������������������\n");
	}
}