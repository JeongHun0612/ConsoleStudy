#pragma once
#include "BaseBallGameManager.h"

class BaseBallComputer
{
private:
	int _ResultBall[BALL_MAX];

public:
	BaseBallComputer();
	~BaseBallComputer();

	void initResultBall(void);
	int* getBall();
};

