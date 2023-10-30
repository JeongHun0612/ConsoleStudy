#pragma once

// 1. 
#include "Player_01.h"

/*
코어, 구현, 실체화, 추상화, 관리자, 대리자, 어시스터

- 지금 당장은 구현/실체화/관리자를 신경쓰면서 클래스를 생성
*/
class MainGame_02
{
private:
	// 2. 
	Player_01* _Player; // 데이터를 참조만

public:
	MainGame_02();
	~MainGame_02();
};