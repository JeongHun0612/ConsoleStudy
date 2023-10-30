#include "BaseBallMainGame.h"

BaseBallMainGame::BaseBallMainGame()
{
	manager = new BaseBallGameManager;
	exception = new BaseBallException;
	draw = new BaseBallDraw;
	computer = new BaseBallComputer;
	player = new BaseBallPlayer;
	result = new BaseBallResult;

	int playerBall;
	int index = 0;
	int count = 0;

	while (result->getStrike() != 3)
	{
		while (index < BALL_MAX)
		{
			draw->MainText();

			cout << "璋濠" << index + 1 << " : ";
			cin >> playerBall;

			player->setBall(index, playerBall);

			if (!exception->RangeException(playerBall) || !exception->DuplicationException(player->getBall(), index))
			{
				continue;
			}

			index++;
		}

		index = 0;
		count++;

		result->ballResult(computer->getBall(), player->getBall());

		system("cls");
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛                        紫瞪 �蝦� : %2d                       弛\n", count);
		printf("弛                                                             弛\n");
		printf("弛            STRIKE : %d     BALL : %d     OUT : %d              弛\n", result->getStrike(), result->getBall(), result->getOut());
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");

		result->setStrike(0);
		result->setBall(0);
		result->setOut(0);
	}
}

BaseBallMainGame::~BaseBallMainGame()
{
	delete manager;
	delete exception;
	delete draw;
	delete computer;
	delete player;
	delete result;
}
