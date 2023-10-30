#include "Report_14.h"

//과제 3. 짝 맞추기
//
//- 사이즈 : 5 X 4
//
//- ☆ ★ ◇ ◆ ♤ ♠ ♡ ♥ ♧ ♣
//
//- 짝이 맞춰진 번호는 계속 오픈된 상태로 있어야 한다.
//
//- 2가지 버전으로 치트 만들기
//
//ㄴ 1. 치트키를 누르면 패를 전부 오픈 시켜 플레이어에게 보여주고 5초뒤에 다시 원상 복귀 시킨다.
//
//ㄴ 2. 치트키를 누르면 한쌍의 카드를 제외하고 전부 오픈된다.
//사용자가 마지막 한쌍을 맞추면서 게임이 종료되면 OK

namespace REPORT_14
{
#define GAME_SIZE_X 5
#define GAME_SIZE_Y 4

	int numArray[GAME_SIZE_X][GAME_SIZE_Y];
	int resultArray[GAME_SIZE_X][GAME_SIZE_Y];

	int tempX[2] = { 0, 0 };
	int tempY[2] = { 0, 0 };
	int tempArray[2] = { 0, 0 };

	int answerCount = 0;

	void Run()
	{
		srand(time(NULL));

		// 배열 초기화
		InitArray();

		// 배열 셔플
		ShuffleArray();

		int gameMode = 0;

		while (gameMode == 0)
		{
			printf("┌───────────────────────────────────────────┐\n");
			printf("│              짝맞추기 게임!!              │\n");
			printf("│                                           │\n");
			printf("│   1. 게임시작   2. 치트키1   3. 치트키2   │\n");
			printf("└───────────────────────────────────────────┘\n");
			cout << "게임 모드 선택 : ";
			cin >> gameMode;

			if (gameMode < 1 || gameMode > 3)
			{
				system("cls");
				printf("┌───────────────────────────────────────────┐\n");
				printf("│        범위 내의 숫자를 입력해주세요.     │\n");
				printf("└───────────────────────────────────────────┘\n");
				gameMode = 0;
				continue;
			}

			system("cls");
		}

		while (answerCount < (GAME_SIZE_X * GAME_SIZE_Y) / 2)
		{

			if (gameMode == 0 || gameMode == 1)
			{
				OutputGameSet(0, 0);
				SelectPicture();
			}

			else if (gameMode == 2)
			{
				OutputAnswer(gameMode);
				Sleep(5000);
				system("cls");
			}
			else if (gameMode == 3)
			{
				OutputAnswer(gameMode);
				answerCount = ((GAME_SIZE_X * GAME_SIZE_Y) / 2) - 1;
				SelectPicture();
			}

			gameMode = 0;
		}

		printf("┌───────────────────────────────────────┐\n");
		printf("│             축하드립니다!!            │\n");
		printf("│                                       │\n");
		printf("│      모든 그림을 다 맞추셨습니다!     │\n");
		printf("└───────────────────────────────────────┘\n");
	}

	void InitArray()
	{
		for (int i = 0; i < GAME_SIZE_Y; i++)
		{
			for (int j = 0; j < GAME_SIZE_X; j++)
			{
				numArray[j][i] = j + (i * GAME_SIZE_X) + 1;
			}
		}
	}

	void ShuffleArray()
	{
		// 배열 셔플
		int temp;
		int destX, destY;;
		int sourX, sourY;

		for (int i = 0; i < GAME_SIZE_Y; i++)
		{
			destY = rand() % GAME_SIZE_Y;
			sourY = rand() % GAME_SIZE_Y;

			for (int j = 0; j < GAME_SIZE_X; j++)
			{
				destX = rand() % GAME_SIZE_X;
				sourX = rand() % GAME_SIZE_X;

				temp = numArray[destX][destY];
				numArray[destX][destY] = numArray[sourX][sourY];
				numArray[sourX][sourY] = temp;
			}
		}
	}

	void OutputGameSet(int x, int y)
	{
		int selectNum = 0;

		for (int i = 0; i < GAME_SIZE_Y; i++)
		{
			for (int j = 0; j < GAME_SIZE_X; j++)
			{
				if (numArray[j][i] == numArray[x - 1][y - 1] || resultArray[j][i] != NULL)
				{
					selectNum = numArray[j][i] % 10;

					SetPicture(selectNum);
				}
				else
				{
					printf("□ ");
				}
			}
			cout << "\n\n";
		}
	}

	void OutputAnswer(int gameMode)
	{
		switch (gameMode)
		{
		case 2:
			for (int i = 0; i < GAME_SIZE_Y; i++)
			{
				for (int j = 0; j < GAME_SIZE_X; j++)
				{
					int selectNum = numArray[j][i] % 10;

					SetPicture(selectNum);
				}
				cout << "\n\n";
			}
			break;

		case 3:
			int randNum = rand() % 10 + 1;
			int selectNum;

			for (int i = 0; i < GAME_SIZE_Y; i++)
			{
				for (int j = 0; j < GAME_SIZE_X; j++)
				{
					if (numArray[j][i] == randNum || numArray[j][i] == randNum + 10)
					{
						selectNum = -1;
					}
					else
					{
						selectNum = numArray[j][i] % 10;
						resultArray[j][i] = numArray[j][i];
					}

					SetPicture(selectNum);
				}
				cout << "\n\n";
			}
			break;
		}
	}

	void SelectPicture()
	{
		int selectCount = 0;

		while (selectCount < 2)
		{
			int x, y;

			printf("가로 : ");
			scanf_s("%d", &x);

			printf("세로 : ");
			scanf_s("%d", &y);

			cout << '\n';

			if (x > GAME_SIZE_X || x < 0 || y > GAME_SIZE_Y || y < 0)
			{
				printf("┌───────────────────────────────────────┐\n");
				printf("│     범위 내의 숫자를 입력해주세요.    │\n");
				printf("└───────────────────────────────────────┘\n");
				continue;
			}

			else
			{
				int selectNum = 0;

				// 데이터 임시 보관
				tempX[selectCount] = x - 1;
				tempY[selectCount] = y - 1;
				tempArray[selectCount] = numArray[x - 1][y - 1];

				system("cls");
			}

			// 게임 셋
			OutputGameSet(x, y);

			selectCount++;
		}

		// 선택 결과
		if (tempArray[0] != tempArray[1] && (tempArray[0] % 10 == tempArray[1] % 10))
		{
			if (DuplicateAnswerCheck())
			{
				printf("┌───────────────────────────────────────┐\n");
				printf("│       같은 문양을 찾으셨습니다!       │\n");
				printf("└───────────────────────────────────────┘\n");

				for (int i = 0; i < 2; i++)
				{
					resultArray[tempX[i]][tempY[i]] = tempArray[i];
				}

				answerCount++;
			}
		}
		else
		{
			printf("┌───────────────────────────────────────┐\n");
			printf("│         같은 문양이 아닙니다!         │\n");
			printf("└───────────────────────────────────────┘\n");
		}

		Sleep(1000);
		system("cls");
	}

	int DuplicateAnswerCheck()
	{
		for (int i = 0; i < GAME_SIZE_Y; i++)
		{
			for (int j = 0; j < GAME_SIZE_X; j++)
			{
				if (resultArray[j][i] == tempArray[0] || resultArray[j][i] == tempArray[1])
				{
					printf("┌───────────────────────────────────────┐\n");
					printf("│         이미 맞춘 그림입니다!         │\n");
					printf("└───────────────────────────────────────┘\n");

					return 0;
				}
			}
		}

		return 1;
	}


	void SetPicture(int selectNum)
	{
		switch (selectNum)
		{
		case 0: case 1:
			(selectNum % 2 == 0) ? printf("☆ ") : printf("★ ");
			break;
		case 2: case 3:
			(selectNum % 2 == 0) ? printf("◇ ") : printf("◆ ");
			break;
		case 4: case 5:
			(selectNum % 2 == 0) ? printf("♤ ") : printf("♠ ");
			break;
		case 6: case 7:
			(selectNum % 2 == 0) ? printf("♡ ") : printf("♥ ");
			break;
		case 8: case 9:
			(selectNum % 2 == 0) ? printf("♧ ") : printf("♣ ");
			break;
		default:
			printf("□ ");
			break;
		}
	}
}