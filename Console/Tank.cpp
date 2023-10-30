#include "Tank.h"

Tank::Tank()
{
	_name = "시즈 탱크";
	_hp = 600;
	_mp = 0;
	_atk = 1000;
	_die = false;

	cout << "이름 : " << _name << endl;
	cout << "체력 : " << _hp << endl;
	cout << "마나 : " << _mp << endl;
	cout << "공격력 : " << _atk << endl;
	cout << boolalpha;
	cout << "나는 죽지 않는다. " << _die << endl;
}

Tank::~Tank()
{

}

void Tank::attack()
{
	cout << "포 발사!" << endl;
}

