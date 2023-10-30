#include "Family.h"

Family::Family(char* relations, char* name, int age, char* number)
{
	_Relations = relations;
	_Name = name;
	_Age = age;
	_Number = number;
}

Family::~Family()
{

}


void Family::outPutInfo(void)
{
	cout << "관계 : " << this->_Relations << endl;
	cout << "이름 : " << this->_Name << endl;
	cout << "나이 : " << this->_Age << endl;
	cout << "전화번호 : " << this->_Number << endl;
}
