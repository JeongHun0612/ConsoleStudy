#pragma once
#include "BaseBallGameManager.h"

class BaseBallException
{
private:

public:
	BaseBallException();
	~BaseBallException();

	bool RangeException(int playerBall);
	bool DuplicationException(int playerBall[], int index);

};

