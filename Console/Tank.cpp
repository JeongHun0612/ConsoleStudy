#include "Tank.h"

Tank::Tank()
{
	_name = "���� ��ũ";
	_hp = 600;
	_mp = 0;
	_atk = 1000;
	_die = false;

	cout << "�̸� : " << _name << endl;
	cout << "ü�� : " << _hp << endl;
	cout << "���� : " << _mp << endl;
	cout << "���ݷ� : " << _atk << endl;
	cout << boolalpha;
	cout << "���� ���� �ʴ´�. " << _die << endl;
}

Tank::~Tank()
{

}

void Tank::attack()
{
	cout << "�� �߻�!" << endl;
}

