#pragma once
#include "BaseBallGameManager.h"

class BaseBallPlayer : public BaseBallGameManager
{
private:
	int _PlayerBall[BALL_MAX];

public:
	BaseBallPlayer();
	~BaseBallPlayer();

	void setBall(int index, int ball);
	int* getBall();
};

