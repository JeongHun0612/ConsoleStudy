#include "Unit.h"

Unit::Unit()
{
	// Ŭ���� ���� / ���� / ��ӿ��� / ����,���� ���� / �� Ŭ���� ���� �Լ��� �ʿ����� ���..
	

	//_name = "�׶� ����";
	//_hp = 100;
	//_mp = 50;
	//_atk = 800;
	//_die = false;

	//cout << "�̸� : " << _name << endl;
	//cout << "ü�� : " << _hp << endl;
	//cout << "���� : " << _mp << endl;
	//cout << "���ݷ� : " << _atk << endl;
	//cout << "���� ���� �ʴ´�." << _die << endl;
}

Unit::~Unit()
{
	//! Do Nothing
}

void Unit::attack(char* myName, char* enemyName)
{
	cout << myName << " �� " << enemyName << " �� �����Ѵ�." << endl;

}

void Unit::attack(int atk, int enemyHP)
{
	cout << atk << "�� �������� ���� ü�� : " << enemyHP << "�� ���� ���״�." << endl;
}

void Unit::attack(bool enemyDie)
{
	cout << boolalpha;
	cout << "�� ���� ���� : " << enemyDie << endl;
}

void Unit::attack()
{
	cout << "���� �����Ѵ�." << endl;
}