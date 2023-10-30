#include "Report_14.h"

//���� 3. ¦ ���߱�
//
//- ������ : 5 X 4
//
//- �� �� �� �� �� �� �� �� �� ��
//
//- ¦�� ������ ��ȣ�� ��� ���µ� ���·� �־�� �Ѵ�.
//
//- 2���� �������� ġƮ �����
//
//�� 1. ġƮŰ�� ������ �и� ���� ���� ���� �÷��̾�� �����ְ� 5�ʵڿ� �ٽ� ���� ���� ��Ų��.
//
//�� 2. ġƮŰ�� ������ �ѽ��� ī�带 �����ϰ� ���� ���µȴ�.
//����ڰ� ������ �ѽ��� ���߸鼭 ������ ����Ǹ� OK

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

		// �迭 �ʱ�ȭ
		InitArray();

		// �迭 ����
		ShuffleArray();

		int gameMode = 0;

		while (gameMode == 0)
		{
			printf("������������������������������������������������������������������������������������������\n");
			printf("��              ¦���߱� ����!!              ��\n");
			printf("��                                           ��\n");
			printf("��   1. ���ӽ���   2. ġƮŰ1   3. ġƮŰ2   ��\n");
			printf("������������������������������������������������������������������������������������������\n");
			cout << "���� ��� ���� : ";
			cin >> gameMode;

			if (gameMode < 1 || gameMode > 3)
			{
				system("cls");
				printf("������������������������������������������������������������������������������������������\n");
				printf("��        ���� ���� ���ڸ� �Է����ּ���.     ��\n");
				printf("������������������������������������������������������������������������������������������\n");
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

		printf("����������������������������������������������������������������������������������\n");
		printf("��             ���ϵ帳�ϴ�!!            ��\n");
		printf("��                                       ��\n");
		printf("��      ��� �׸��� �� ���߼̽��ϴ�!     ��\n");
		printf("����������������������������������������������������������������������������������\n");
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
		// �迭 ����
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
					printf("�� ");
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

			printf("���� : ");
			scanf_s("%d", &x);

			printf("���� : ");
			scanf_s("%d", &y);

			cout << '\n';

			if (x > GAME_SIZE_X || x < 0 || y > GAME_SIZE_Y || y < 0)
			{
				printf("����������������������������������������������������������������������������������\n");
				printf("��     ���� ���� ���ڸ� �Է����ּ���.    ��\n");
				printf("����������������������������������������������������������������������������������\n");
				continue;
			}

			else
			{
				int selectNum = 0;

				// ������ �ӽ� ����
				tempX[selectCount] = x - 1;
				tempY[selectCount] = y - 1;
				tempArray[selectCount] = numArray[x - 1][y - 1];

				system("cls");
			}

			// ���� ��
			OutputGameSet(x, y);

			selectCount++;
		}

		// ���� ���
		if (tempArray[0] != tempArray[1] && (tempArray[0] % 10 == tempArray[1] % 10))
		{
			if (DuplicateAnswerCheck())
			{
				printf("����������������������������������������������������������������������������������\n");
				printf("��       ���� ������ ã���̽��ϴ�!       ��\n");
				printf("����������������������������������������������������������������������������������\n");

				for (int i = 0; i < 2; i++)
				{
					resultArray[tempX[i]][tempY[i]] = tempArray[i];
				}

				answerCount++;
			}
		}
		else
		{
			printf("����������������������������������������������������������������������������������\n");
			printf("��         ���� ������ �ƴմϴ�!         ��\n");
			printf("����������������������������������������������������������������������������������\n");
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
					printf("����������������������������������������������������������������������������������\n");
					printf("��         �̹� ���� �׸��Դϴ�!         ��\n");
					printf("����������������������������������������������������������������������������������\n");

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
			(selectNum % 2 == 0) ? printf("�� ") : printf("�� ");
			break;
		case 2: case 3:
			(selectNum % 2 == 0) ? printf("�� ") : printf("�� ");
			break;
		case 4: case 5:
			(selectNum % 2 == 0) ? printf("�� ") : printf("�� ");
			break;
		case 6: case 7:
			(selectNum % 2 == 0) ? printf("�� ") : printf("�� ");
			break;
		case 8: case 9:
			(selectNum % 2 == 0) ? printf("�� ") : printf("�� ");
			break;
		default:
			printf("�� ");
			break;
		}
	}
}