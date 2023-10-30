#include "BaseBallResult.h"

BaseBallResult::BaseBallResult()
{
	_Strike = 0;
	_Ball = 0;
	_Out = 0;
}

BaseBallResult::~BaseBallResult()
{

}

void BaseBallResult::ballResult(int resultBall[], int playerBall[])
{
	for (int i = 0; i < BALL_MAX; i++)
	{
		for (int j = 0; j < BALL_MAX; j++)
		{
			if (resultBall[i] == playerBall[j])
			{
				if (i == j)
				{
					_Strike++;
					break;
				}
				else
				{
					_Ball++;
					break;
				}
			}

			if (j == 2)
			{
				_Out++;
			}
		}
	}

}
