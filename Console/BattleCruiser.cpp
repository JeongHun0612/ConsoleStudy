#include "BattleCruiser.h"

BattleCruiser::BattleCruiser()
{
	_name = "��Ʋũ����";
	_hp = 1000;
	_mp = 200;
	_atk = 1500;
	_die = false;

	cout << "�̸� : " << _name << endl;
	cout << "ü�� : " << _hp << endl;
	cout << "���� : " << _mp << endl;
	cout << "���ݷ� : " << _atk << endl;
	cout << boolalpha;
	cout << "���� ���� �ʴ´�. " << _die << endl;
}

BattleCruiser::~BattleCruiser()
{

}

void BattleCruiser::attack()
{
	cout << "�߸���!" << endl;
}