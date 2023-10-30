#pragma once
#include "RSPGameManager.h"

class RSPComputer
{
private:
	int _Hand;

public:
	RSPComputer();
	~RSPComputer();

	void SetHand(int hand);
	int GetHand();
};

