#include "Unit.h"

Unit::Unit()
{
	// 클래스 생성 / 설계 / 상속여부 / 동적,정적 구분 / 각 클래스 마다 함수가 필요할지 등등..
	

	//_name = "테란 유닛";
	//_hp = 100;
	//_mp = 50;
	//_atk = 800;
	//_die = false;

	//cout << "이름 : " << _name << endl;
	//cout << "체력 : " << _hp << endl;
	//cout << "마나 : " << _mp << endl;
	//cout << "공격력 : " << _atk << endl;
	//cout << "나는 죽지 않는다." << _die << endl;
}

Unit::~Unit()
{
	//! Do Nothing
}

void Unit::attack(char* myName, char* enemyName)
{
	cout << myName << " 이 " << enemyName << " 을 공격한다." << endl;

}

void Unit::attack(int atk, int enemyHP)
{
	cout << atk << "의 공격으로 적의 체력 : " << enemyHP << "을 감소 시켰다." << endl;
}

void Unit::attack(bool enemyDie)
{
	cout << boolalpha;
	cout << "적 제거 여부 : " << enemyDie << endl;
}

void Unit::attack()
{
	cout << "적을 공격한다." << endl;
}