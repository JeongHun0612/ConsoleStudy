#pragma once
#include <iostream>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

class Output1
{
private:
	int _nID;
	const char _Name[30] = "Output1";


public:
	Output1();
	~Output1();

	void outPut();
};

