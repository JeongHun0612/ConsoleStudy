#pragma once
#include <iostream>
#include "Report12_Skill.h"

using namespace std;

class Report12_Player
{
private:
	char* _name;
	int _hp;
	int _mp;
	int _atk;
	int _def;
	int _luck;
	float _speed;
	bool _isDie;
	Report12_Skill* _Skill;


public:
	Report12_Player();
	~Report12_Player();
};

