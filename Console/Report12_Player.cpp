#include "Report12_Player.h"

Report12_Player::Report12_Player()
{
	_name = "¶¯¶¯¶¯";
	_hp = 1000;
	_mp = 500;
	_atk = 50;
	_def = 50;
	_luck = 20;
	_speed = 20;
	_isDie = false;
	_Skill = new Report12_Skill;

	cout << "Test" << endl;
}

Report12_Player::~Report12_Player()
{

}