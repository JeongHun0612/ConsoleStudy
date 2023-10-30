#pragma once
#include <iostream>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

class Family
{
private:
	char* _Relations;
	char* _Name;
	int _Age;
	char* _Number;


public:
	Family(char* relations, char* name, int age, char* number);
	~Family();

	void outPutInfo(void);
};

