#include "BaseBallComputer.h"

BaseBallComputer::BaseBallComputer()
{
	srand(time(NULL));

	// ���� �� �ʱ�ȭ
	initResultBall();
}

BaseBallComputer::~BaseBallComputer()
{

}

void BaseBallComputer::initResultBall(void)
{
	for (int i = 0; i < BALL_MAX; i++)
	{
		_ResultBall[i] = rand() % 10;

		for (int j = 0; j < i; j++)
		{
			if (_ResultBall[i] != _ResultBall[j]) continue;
			i--;
		}
	}
}

int* BaseBallComputer::getBall()
{
	return this->_ResultBall;
}