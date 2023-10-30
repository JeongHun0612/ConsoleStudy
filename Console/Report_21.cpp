#include "Report_21.h"

namespace REPORT_21
{
	/*과제 1. 숫자 슬라이드

		- 사이즈 : 5 X 4

		- 시작위치->우측하단

		- 치트 필수
		ㄴ 치트키를 누르면 하나의 숫자를 제외하고 나머지 숫자는 정렬된다.
		ㄴ 사용자가 마지막 조각을 맞추면서 프로그램이 끝나면 OK

		- 일반적으로 게임 룰에 기반한 예외처리 해온다.*/

	void Run()
	{
		srand(time(NULL));

		int gameBoard[GAME_NUM_MAX + 1];
		int curIndex = GAME_NUM_MAX;

		// 게임 보드 초기화
		for (int i = 0; i < GAME_NUM_MAX + 1; i++)
		{
			gameBoard[i] = i + 1;

			if (i == GAME_NUM_MAX)
			{
				gameBoard[i] = 0;
			}
		}

		// 게임 보드 셔플
		for (int i = 0; i < GAME_NUM_MAX; i++)
		{
			int dest, sour, temp;

			dest = rand() % GAME_NUM_MAX;
			sour = rand() % GAME_NUM_MAX;

			temp = gameBoard[dest];
			gameBoard[dest] = gameBoard[sour];
			gameBoard[sour] = temp;
		}

		while (!GetIsComplete(gameBoard, GAME_NUM_MAX))
		{
			printf("┌────────────────────────────────────────────┐\n");
			printf("│  치트 : f      숫자 슬라이드 게임          │\n");
			printf("│                                            │\n");
			printf("│  조작법 [ w : ↑  a : ←  s : ↓  d : → ] │\n");
			printf("└────────────────────────────────────────────┘\n");

			// 게임 보드 출력
			OutputGameBoard(gameBoard, curIndex, GAME_BOARD_X, GAME_BOARD_Y);

			char inputKey;
			int tempBoard = 0;
			int tempIndex = 0;

			cout << "키입력 : ";
			cin >> inputKey;

			// 치트 단축키
			if (inputKey == 'f')
			{
				curIndex = 0;
				CheatActivate(gameBoard, GAME_NUM_MAX);

				tempBoard = gameBoard[1];
				gameBoard[1] = gameBoard[0];
				gameBoard[0] = tempBoard;
				curIndex = 1;
			}

			if (!GetIsWall(inputKey, curIndex, tempIndex))
			{
				tempBoard = gameBoard[tempIndex];
				gameBoard[tempIndex] = gameBoard[curIndex];
				gameBoard[curIndex] = tempBoard;

				curIndex = tempIndex;
			}

			system("cls");
		}

		printf("┌────────────────────────────────────────────┐\n");
		printf("│     모든 숫자를 맞춰 게임이 종료됩니다.    │\n");
		printf("└────────────────────────────────────────────┘\n");
		OutputGameBoard(gameBoard, curIndex, GAME_BOARD_X, GAME_BOARD_Y);
	}

	void CheatActivate(int gameBoard[], int maxNum)
	{
		int temp;

		for (int i = maxNum; i > 0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				if (gameBoard[j] > gameBoard[j + 1])
				{
					temp = gameBoard[j];
					gameBoard[j] = gameBoard[j + 1];
					gameBoard[j + 1] = temp;
				}
			}
		}
	}

	bool GetIsComplete(int gameBoard[], int maxNum)
	{
		for (int i = 0; i < maxNum; i++)
		{
			if (gameBoard[i] > gameBoard[i + 1])
			{
				return false;
			}
		}

		return true;
	}

	bool GetIsWall(char inputKey, int curIndex, int& tempIndex)
	{
		switch (inputKey)
		{
		case 'w':
			tempIndex = curIndex - GAME_BOARD_X;
			if (tempIndex < 0)
			{
				return true;
			}
			break;
		case 's':
			tempIndex = curIndex + GAME_BOARD_X;
			if (tempIndex > GAME_NUM_MAX)
			{
				return true;
			}
			break;
		case 'a':
			tempIndex = curIndex - 1;
			if (tempIndex < (curIndex / GAME_BOARD_X) * GAME_BOARD_X)
			{
				return true;
			}
			break;
		case 'd':
			tempIndex = curIndex + 1;
			if (tempIndex >= ((curIndex / GAME_BOARD_X) + 1) * GAME_BOARD_X)
			{
				return true;
			}
			break;
		default:
			return true;
			break;
		}

		return false;
	}

	void OutputGameBoard(int gameBoard[], int curIndex, int gameBoardX, int gameBoardY)
	{
		// 맨 위칸
		for (int i = 0; i < gameBoardX; i++)
		{
			if (i == 0)
			{
				printf("┌────────");
			}
			else if (i == gameBoardX - 1)
			{
				printf("┬────────┐\n");
			}
			else
			{
				printf("┬────────");
			}
		}

		// 중간칸
		for (int i = 0; i < gameBoardY; i++)
		{
			for (int j = 0; j < gameBoardX; j++)
			{
				(j != (gameBoardX - 1)) ? printf("│        ") : printf("│        │\n");
			}
			for (int j = 0; j < gameBoardX; j++)
			{
				if (gameBoard[j + (i * gameBoardX)] == gameBoard[curIndex])
				{
					(j != gameBoardX - 1) ? printf("│   ★   ") : printf("│   ★   │\n");
				}
				else
				{
					(j != gameBoardX - 1) ? printf("│   %2d   ", gameBoard[j + (i * gameBoardX)]) : printf("│   %2d   │\n", gameBoard[j + (i * gameBoardX)]);
				}
			}
			for (int j = 0; j < gameBoardX; j++)
			{
				(j != (gameBoardX - 1)) ? printf("│        ") : printf("│        │\n");
			}

			if (i != (gameBoardY - 1))
			{
				for (int j = 0; j < gameBoardX; j++)
				{
					if (j == 0)
					{
						printf("├────────");
					}
					else if (j == gameBoardX - 1)
					{
						printf("┼────────┤\n");
					}
					else
					{
						printf("┼────────");
					}
				}
			}
			else
			{
				// 맨 아래칸
				for (int i = 0; i < gameBoardX; i++)
				{
					if (i == 0)
					{
						printf("└────────");
					}
					else if (i == gameBoardX - 1)
					{
						printf("┴────────┘\n");
					}
					else
					{
						printf("┴────────");
					}
				}
			}
		}
	}
}