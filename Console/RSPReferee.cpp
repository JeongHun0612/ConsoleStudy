#include "RSPReferee.h"

RSPReferee::RSPReferee()
{

}

RSPReferee::~RSPReferee()
{

}

int RSPReferee::getResult(int pHand, int cHand)
{
	if (pHand == cHand)
	{
		return DRAW;
	}
	else if ((pHand + 1) % 3 == cHand)
	{
		return LOSE;
	}
	else if ((pHand + 2) % 3 == cHand)
	{
		return WIN;
	}
	else
	{
		cout << "¿À·ù" << endl;
	}
}
