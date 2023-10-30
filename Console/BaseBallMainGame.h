#pragma once
#include "BaseBallGameManager.h"
#include "BaseBallException.h"
#include "BaseBallDraw.h"
#include "BaseBallComputer.h"
#include "BaseBallPlayer.h"
#include "BaseBallResult.h"

class BaseBallMainGame
{
private:
	BaseBallGameManager* manager;
	BaseBallException* exception;
	BaseBallDraw* draw;
	BaseBallComputer* computer;
	BaseBallPlayer* player;
	BaseBallResult* result;

public:
	BaseBallMainGame();
	~BaseBallMainGame();
};

