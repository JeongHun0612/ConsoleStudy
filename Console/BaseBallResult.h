#pragma once
#include "BaseBallGameManager.h"


class BaseBallResult
{
private:
	int _Strike;
	int _Ball;
	int _Out;

public:
	BaseBallResult();
	~BaseBallResult();

	void ballResult(int resultBall[], int playerBall[]);

	int getStrike() { return _Strike; }
	void setStrike(int strike) { _Strike = strike; }
	int getBall() { return _Ball; }
	void setBall(int ball) { _Ball = ball; }
	int getOut() { return _Out; }
	void setOut(int out) { _Out = out; }

};

