#include "RSPComputer.h"

RSPComputer::RSPComputer()
{
	this->_Hand = 0;
}

RSPComputer::~RSPComputer()
{

}

void RSPComputer::SetHand(int hand)
{

}

int RSPComputer::GetHand()
{
	this->_Hand = rand() % 3;
	return this->_Hand;
}
