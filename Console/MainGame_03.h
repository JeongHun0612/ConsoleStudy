#pragma once
#include "Unit.h"
#include "Tank.h"
#include "BattleCruiser.h"

class MainGame_03
{
private:
	Unit* _terran;
	Tank* _siegeTank;
	BattleCruiser* _battleCrusier;

public:
	MainGame_03();
	~MainGame_03();
};

/*
과제 1. 겟터 + 셋터 과제

- 자동 전투 게임을 만든다.

- 클래스는 5개 이상

- 플레이어 능력치는 7개 (필수 능력치 : 운)
ㄴ 운 능력치에 따라 크리티컬 발생

- 아이템 종류 3가지
ㄴ 대분류 : 무기, 방어구, 악세사리, 포션)
ㄴ 중분류 : 대분류에 해당하는 항목당 아이템 2개씩
ㄴ 포션 : 수업 시간에 진행한 실습 내용들 포션으로 만든다.

- 플레이어 스킬 2개 이상 / 적 스킬은 1개 이상
ㄴ 스킬은 쿨타임 적용 시킨다.

- 도트는 기존에 만들어 둔 도트를 활용한다.

*/

