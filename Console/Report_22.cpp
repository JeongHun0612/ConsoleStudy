#include "Report_22.h"

#define	BINGGO_NUM_MAX 25
#define BINGGO_BOARD_X 5
#define BINGGO_BOARD_Y 5

namespace REPORT_22
{
	int pBinggoBoard[BINGGO_NUM_MAX];
	int cBinggoBoard[BINGGO_NUM_MAX];

	void Run()
	{
		srand(time(NULL));

		int pBinggoCount = 0;
		int cBinggoCount = 0;

		int pInputNum = 0;
		int cInputNum = 0;

		// �迭 �� �ʱ�ȭ
		for (int i = 0; i < BINGGO_NUM_MAX; i++)
		{
			pBinggoBoard[i] = i;
			cBinggoBoard[i] = i;
		}

		// �迭 ����
		GetBingNumSuffly(pBinggoBoard);
		GetBingNumSuffly(cBinggoBoard);

		// ���� ���� ���

		while (pBinggoCount != 5 || cBinggoCount != 5)
		{
			system("cls");
			OutputPrint(pBinggoCount, cBinggoCount, pInputNum, cInputNum);

			cout << "���� �Է� : ";
			cin >> pInputNum;

			// �Է°� ó�� ����
			SetInputNumProcess(pInputNum);

			system("cls");
			OutputPrint(pBinggoCount, cBinggoCount, pInputNum, cInputNum);

			// ��ǻ�� ����
			cInputNum = GetComputSelectNum();
			Sleep(2000);
			SetInputNumProcess(cInputNum);
		}
	}

	int* GetBingNumSuffly(int bingBoard[])
	{
		for (int i = 0; i < BINGGO_NUM_MAX; i++)
		{
			int dest, sour, temp;

			dest = rand() % BINGGO_NUM_MAX;
			sour = rand() % BINGGO_NUM_MAX;

			temp = bingBoard[dest];
			bingBoard[dest] = bingBoard[sour];
			bingBoard[sour] = temp;
		}

		return bingBoard;
	}

	int GetComputSelectNum()
	{
		// �����ؾ���
		int cInputNum = rand() % BINGGO_NUM_MAX;

		while (cBinggoBoard[cInputNum] == 'X')
		{
			cInputNum = rand() % BINGGO_NUM_MAX;
		}

		return cInputNum;
	}

	void SetInputNumProcess(int value)
	{
		// �Է¹��� ���� ó�� ����
		for (int i = 0; i < BINGGO_NUM_MAX; i++)
		{
			if (pBinggoBoard[i] == value)
			{
				pBinggoBoard[i] = 'X';
			}

			if (cBinggoBoard[i] == value)
			{
				cBinggoBoard[i] = 'X';
			}
		}
	}

	void OutputPrint(int pBinggoCount, int cBinggoCount, int pInputVal, int cInputVal)
	{
		printf("��������������������������������������������������������������������������������������������   ��������������������������������������������������������������������������������������������\n");
		printf("��               ���� ���� : %2d               ��   ��               ���� ���� : %2d               ��\n", pBinggoCount, cBinggoCount);
		printf("��������������������������������������������������������������������������������������������   ��������������������������������������������������������������������������������������������\n");
		printf("��������������������������������������������������������������������������������������������   ��������������������������������������������������������������������������������������������\n");

		for (int i = 0; i < BINGGO_BOARD_Y; i++)
		{
			if (i + 1 == BINGGO_BOARD_Y)
			{
				printf("��        ��        ��        ��        ��        ��   ��        ��        ��        ��        ��        ��\n");
				OutputBoardNum(i);
				printf("��        ��        ��        ��        ��        ��   ��        ��        ��        ��        ��        ��\n");
				printf("��������������������������������������������������������������������������������������������   ��������������������������������������������������������������������������������������������\n");
			}
			else
			{
				printf("��        ��        ��        ��        ��        ��   ��        ��        ��        ��        ��        ��\n");
				OutputBoardNum(i);
				printf("��        ��        ��        ��        ��        ��   ��        ��        ��        ��        ��        ��\n");
				printf("��������������������������������������������������������������������������������������������   ��������������������������������������������������������������������������������������������\n");
			}
		}

		printf("��������������������������������������������������������������������������������������������   ��������������������������������������������������������������������������������������������\n");
		printf("��               �Է� ���� : %2d               ��   ��               �Է� ���� : %2d               ��\n", pInputVal, cInputVal);
		printf("��������������������������������������������������������������������������������������������   ��������������������������������������������������������������������������������������������\n");
	}

	void OutputInputNum(int pInputVal, int cInputVal)
	{
		printf("��������������������������������������������������������������������������������������������   ��������������������������������������������������������������������������������������������\n");
		printf("��               �Է� ���� : %2d               ��   ��               �Է� ���� : %2d               ��\n", pInputVal, cInputVal);
		printf("��������������������������������������������������������������������������������������������   ��������������������������������������������������������������������������������������������\n");
	}


	void OutputBoardNum(int yValue)
	{
		int* outputBoard;
		int idx;

		for (int i = 0; i < BINGGO_BOARD_X * 2; i++)
		{
			outputBoard = (i / BINGGO_BOARD_X == 0) ? pBinggoBoard : cBinggoBoard;
			idx = (i % BINGGO_BOARD_X) + (yValue * BINGGO_BOARD_X);

			if (i % BINGGO_BOARD_X == 4)
			{
				if (outputBoard[idx] == 'X')
				{
					printf("��   %2c   ��   ", outputBoard[idx]);
				}
				else
				{
					printf("��   %2d   ��   ", outputBoard[idx]);
				}
			}
			else
			{
				if (outputBoard[idx] == 'X')
				{
					printf("��   %2c   ", outputBoard[idx]);
				}
				else
				{
					printf("��   %2d   ", outputBoard[idx]);
				}
			}
		}

		cout << '\n';
	}
};