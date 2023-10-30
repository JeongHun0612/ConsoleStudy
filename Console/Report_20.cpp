#include "Report_20.h"

//과제 3. 빙고 만들기
//
//- 0 ~24까지의 수를 랜덤으로 배치해서 5 X 5로 출력한다.
//
//- 숫자를 선택하면 #, %, & 등등 으로 바꾼다.
//
//- 빙고가 되면 빙고 카운터가 올라가고 5 빙고가 되면 게임이 종료된다.
//ㄴ 단, 게임이 종료되면 프로그램이 종료되는게 아니라 완성된 빙고가 떠있어야 한다.
//
//
//도전 과제 1. 빙고
//
//- 위에 룰을 그대로 따라간다.
//
//- 단, 혼자하는 빙고가 아닌 AI와 번갈아 가며 플레이 하는 빙고 버전
//
//- 완성도는 AI 수준에 따라서 나뉜다.

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

		// 랜덤 정수 초기화
		for (int i = 0; i < BINGO_NUM_MAX; i++)
		{
			randNum[i] = i;
		}

		// 랜덤 정수 셔플
		for (int i = 0; i < BINGO_NUM_MAX; i++)
		{
			int dest, sour, temp;

			dest = rand() % BINGO_NUM_MAX;
			sour = rand() % BINGO_NUM_MAX;

			temp = randNum[dest];
			randNum[dest] = randNum[sour];
			randNum[sour] = temp;
		}

		// 빙고 보드 초기화
		for (int i = 0; i < BINGO_BOARD_Y; i++)
		{
			for (int j = 0; j < BINGO_BOARD_X; j++)
			{
				binggoBoard[i][j] = randNum[j + (i * BINGO_BOARD_Y)];
			}
		}

		while (binggoCount < BINGO_MAX_COUNT)
		{
			// 빙고 갯수 출력
			printf("┌────────────────────────────────────────────┐\n");
			printf("│               빙고 갯수 : %2d               │\n", binggoCount);
			printf("└────────────────────────────────────────────┘\n");

			// 빙고 보드 출력
			OutputBingoBoard(binggoBoard);

			// 숫자 입력처리
			cout << "숫자 입력 : ";
			cin >> inputNum;

			// 입력받은 숫자 처리 로직
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

			// 빙고 검사
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

			// 대각선 검사
			if (diagonalCount == BINGO_BOARD_X)
			{
				binggoCount++;
				diagonalCount = 1;
			}
		}

		// 빙고 결과
		printf("┌────────────────────────────────────────────┐\n");
		printf("│                  빙고 완료                 │\n");
		printf("└────────────────────────────────────────────┘\n");
		OutputBingoBoard(binggoBoard);
	}

	void OutputBingoBoard(int binggoBoard[BINGO_BOARD_Y][BINGO_BOARD_X])
	{
		printf("┌────────┬────────┬────────┬────────┬────────┐   ┌────────┬────────┬────────┬────────┬────────┐\n");
		for (int i = 0; i < BINGO_BOARD_Y; i++)
		{
			printf("│        │        │        │        │        │   │        │        │        │        │        \n");
			for (int j = 0; j < BINGO_BOARD_X; j++)
			{
				if (binggoBoard[i][j] == 'X')
				{
					(j != BINGO_BOARD_X - 1) ? printf("│   %2c   ", binggoBoard[i][j]) : printf("│   %2c   │\n", binggoBoard[i][j]);
				}
				else
				{
					(j != BINGO_BOARD_X - 1) ? printf("│   %2d   ", binggoBoard[i][j]) : printf("│   %2d   │\n", binggoBoard[i][j]);
				}
			}
			printf("│        │        │        │        │        │\n");

			(i != BINGO_BOARD_Y - 1) ?
				printf("├────────┼────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┼────────┼────────┤\n") :
				printf("└────────┴────────┴────────┴────────┴────────┘   └────────┴────────┴────────┴────────┴────────┘\n");
		}
	}
}