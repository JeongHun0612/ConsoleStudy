#include "MainGame.h"

#define MAX_ITEM		100

enum EItem
{
	/*
	������ ����Ʈ
	��
	��
	��
	��
	*/
};

class PlayerInfo
{
private:
	int x, y;
	int hp;
	int shield;
	int level;
	double exp;
	EItem items[MAX_ITEM];

public:
	void walk();
	void jump();
	void turn(int dir);
	void defence();
	bool attack(int what);
	bool hurt(int fromwho);
	bool die();
};

void main()
{
	// ���� �Ҵ�
	//MainGame mg;
	//mg.outPut();

	cout << '\n';
	
	// ���� �Ҵ��� ���ؼ��� �ּҰ��� �ʿ��ϱ� ������ * �� �ʿ�
	// ���� �Ҵ�
	MainGame* mainG = new MainGame; 

	mainG->showPosition();
	mainG->setPosition(100, 100);
	mainG->showPosition();
	mainG->movePosition();
	mainG->movePosition();
	mainG->movePosition();
	mainG->showPosition();

	delete mainG;
}

/*
���� 1. Ŭ���� ���� ������

- ���� �ٸ� Ŭ���� 5���� �����ϰ� ���� �ٸ� ������ ����Ѵ�.

EX)

(Ŭ���� �̸�) Ŭ���� 1��
(Ŭ���� �̸�) Ŭ���� 2��
(Ŭ���� �̸�) Ŭ���� 3��
��
��
��
(Ŭ���� �̸�) Ŭ���� N��

�� �ִ��� ȿ���� �����ϸ鼭 �غ���.



���� 2. �츮 ������ ������....

- Ŭ������ Ȱ���� �츮 ������ �Ұ��ϴ� ������ ����Ѵ�.

�� ��ü���������� �����Ѵ�.



���� 3. ���� ���� �����

- ��ŸƮ ���� ���� ������ ������ ���� ����

- ��Ʈ�� ����, ü�¹ٸ� �ʼ��� �����Ѵ�.

- �÷��̾ ������ �ϸ� �ȵǸ� �� ���� ������ �ؾ� �Ѵ�.
	�� + ���� ���� ���� ���� �ݵ�� �־���Ѵ�.



���� 4. ����������

- Ŭ������ Ȱ���� ��ü�������� �����´�.

- �ּ� Ŭ������ 3��
*/