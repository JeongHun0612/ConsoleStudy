#pragma once
#include <iostream>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

class Output2
{
private:
	int _nID;
	const char _Name[30] = "Output2";

public:
	Output2();
	~Output2();

	void outPut();
};

