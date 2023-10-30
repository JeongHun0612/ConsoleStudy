#include "Report_20.h"

//���� 3. ���� �����
//
//- 0 ~24������ ���� �������� ��ġ�ؼ� 5 X 5�� ����Ѵ�.
//
//- ���ڸ� �����ϸ� #, %, & ��� ���� �ٲ۴�.
//
//- ���� �Ǹ� ���� ī���Ͱ� �ö󰡰� 5 ���� �Ǹ� ������ ����ȴ�.
//�� ��, ������ ����Ǹ� ���α׷��� ����Ǵ°� �ƴ϶� �ϼ��� ���� ���־�� �Ѵ�.
//
//
//���� ���� 1. ����
//
//- ���� ���� �״�� ���󰣴�.
//
//- ��, ȥ���ϴ� ���� �ƴ� AI�� ������ ���� �÷��� �ϴ� ���� ����
//
//- �ϼ����� AI ���ؿ� ���� ������.

namespace REPORT_20
{
	void Run()
	{
		srand(time(NULL));

		int randNum[BINGO_NUM_MAX];
		int binggoBoard[BINGO_BOARD_Y][BINGO_BOARD_X];

		int countX[BINGO_BOARD_X] = { 0, 0, 0, 0, 0 };
		int countY[BINGO_BOARD_Y] = { 0, 0, 0, 0, 0 };

		int inputNum;
		int binggoCount = 0;
		int diagonalCount = 0;

		// ���� ���� �ʱ�ȭ
		for (int i = 0; i < BINGO_NUM_MAX; i++)
		{
			randNum[i] = i;
		}

		// ���� ���� ����
		for (int i = 0; i < BINGO_NUM_MAX; i++)
		{
			int dest, sour, temp;

			dest = rand() % BINGO_NUM_MAX;
			sour = rand() % BINGO_NUM_MAX;

			temp = randNum[dest];
			randNum[dest] = randNum[sour];
			randNum[sour] = temp;
		}

		// ���� ���� �ʱ�ȭ
		for (int i = 0; i < BINGO_BOARD_Y; i++)
		{
			for (int j = 0; j < BINGO_BOARD_X; j++)
			{
				binggoBoard[i][j] = randNum[j + (i * BINGO_BOARD_Y)];
			}
		}

		while (binggoCount < BINGO_MAX_COUNT)
		{
			// ���� ���� ���
			printf("��������������������������������������������������������������������������������������������\n");
			printf("��               ���� ���� : %2d               ��\n", binggoCount);
			printf("��������������������������������������������������������������������������������������������\n");

			// ���� ���� ���
			OutputBingoBoard(binggoBoard);

			// ���� �Է�ó��
			cout << "���� �Է� : ";
			cin >> inputNum;

			// �Է¹��� ���� ó�� ����
			for (int i = 0; i < BINGO_BOARD_Y; i++)
			{
				for (int j = 0; j < BINGO_BOARD_X; j++)
				{
					if (binggoBoard[i][j] == inputNum)
					{
						binggoBoard[i][j] = 'X';
						countX[j] += 1;
						countY[i] += 1;

						if ((i == j) || (i + j == BINGO_BOARD_X - 1))
						{
							diagonalCount++;
							cout << diagonalCount << endl;
						}

						break;
					}
				}
			}

			system("cls");

			// ���� �˻�
			for (int i = 0; i < BINGO_MAX_COUNT; i++)
			{
				if (countX[i] == BINGO_MAX_COUNT)
				{
					binggoCount++;
					countX[i] = 1;
				}

				if (countY[i] == BINGO_MAX_COUNT)
				{
					binggoCount++;
					countY[i] = 1;
				}
			}

			// �밢�� �˻�
			if (diagonalCount == BINGO_BOARD_X)
			{
				binggoCount++;
				diagonalCount = 1;
			}
		}

		// ���� ���
		printf("��������������������������������������������������������������������������������������������\n");
		printf("��                  ���� �Ϸ�                 ��\n");
		printf("��������������������������������������������������������������������������������������������\n");
		OutputBingoBoard(binggoBoard);
	}

	void OutputBingoBoard(int binggoBoard[BINGO_BOARD_Y][BINGO_BOARD_X])
	{
		printf("��������������������������������������������������������������������������������������������   ��������������������������������������������������������������������������������������������\n");
		for (int i = 0; i < BINGO_BOARD_Y; i++)
		{
			printf("��        ��        ��        ��        ��        ��   ��        ��        ��        ��        ��        \n");
			for (int j = 0; j < BINGO_BOARD_X; j++)
			{
				if (binggoBoard[i][j] == 'X')
				{
					(j != BINGO_BOARD_X - 1) ? printf("��   %2c   ", binggoBoard[i][j]) : printf("��   %2c   ��\n", binggoBoard[i][j]);
				}
				else
				{
					(j != BINGO_BOARD_X - 1) ? printf("��   %2d   ", binggoBoard[i][j]) : printf("��   %2d   ��\n", binggoBoard[i][j]);
				}
			}
			printf("��        ��        ��        ��        ��        ��\n");

			(i != BINGO_BOARD_Y - 1) ?
				printf("��������������������������������������������������������������������������������������������   ��������������������������������������������������������������������������������������������\n") :
				printf("��������������������������������������������������������������������������������������������   ��������������������������������������������������������������������������������������������\n");
		}
	}
}