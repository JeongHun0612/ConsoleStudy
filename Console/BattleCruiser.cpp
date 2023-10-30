#include "BattleCruiser.h"

BattleCruiser::BattleCruiser()
{
	_name = "배틀크루져";
	_hp = 1000;
	_mp = 200;
	_atk = 1500;
	_die = false;

	cout << "이름 : " << _name << endl;
	cout << "체력 : " << _hp << endl;
	cout << "마나 : " << _mp << endl;
	cout << "공격력 : " << _atk << endl;
	cout << boolalpha;
	cout << "나는 죽지 않는다. " << _die << endl;
}

BattleCruiser::~BattleCruiser()
{

}

void BattleCruiser::attack()
{
	cout << "야마토!" << endl;
}