#pragma once
#include "Unit.h"
#include "Tank.h"

// ���� ��� -> �о� ���°� ��õ
// �� ���̾Ƹ�� ���� + ���İ�Ƽ (��۸� ������ �����������)
class BattleCruiser : public Unit /*, Tank*/
{
private:

public:
	BattleCruiser();
	~BattleCruiser();

	virtual void attack() override;
};