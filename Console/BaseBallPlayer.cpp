#include "BaseBallPlayer.h"

BaseBallPlayer::BaseBallPlayer()
{

}

BaseBallPlayer::~BaseBallPlayer()
{

}

void BaseBallPlayer::setBall(int index, int ball)
{
	_PlayerBall[index] = ball;
}


int* BaseBallPlayer::getBall()
{
	return _PlayerBall;
}