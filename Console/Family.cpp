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
	cout << "���� : " << this->_Relations << endl;
	cout << "�̸� : " << this->_Name << endl;
	cout << "���� : " << this->_Age << endl;
	cout << "��ȭ��ȣ : " << this->_Number << endl;
}
