#include "MainGame.h"

#define MAX_ITEM		100

enum EItem
{
	/*
	아이템 리스트
	ㆍ
	ㆍ
	ㆍ
	ㆍ
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
	// 정적 할당
	//MainGame mg;
	//mg.outPut();

	cout << '\n';
	
	// 동적 할당을 위해서는 주소값이 필요하기 때문에 * 이 필요
	// 힙에 할당
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
과제 1. 클래스 사용법 익히기

- 서로 다른 클래스 5개를 생성하고 각각 다른 문구를 출력한다.

EX)

(클래스 이름) 클래스 1번
(클래스 이름) 클래스 2번
(클래스 이름) 클래스 3번
ㆍ
ㆍ
ㆍ
(클래스 이름) 클래스 N번

※ 최대한 효율을 생각하면서 해본다.



과제 2. 우리 가족은 말이죠....

- 클래스를 활용해 우리 가족을 소개하는 내용을 출력한다.

※ 객체지향적으로 구성한다.



과제 3. 대전 게임 만들기

- 스타트 씬과 게임 씬으로 구성된 대전 게임

- 도트와 색상, 체력바를 필수로 포함한다.

- 플레이어만 공격을 하면 안되며 적 역시 공격을 해야 한다.
	ㄴ + 게임 오버 조건 또한 반드시 있어야한다.



과제 4. 가위바위보

- 클래스를 활용해 객체지향으로 나눠온다.

- 최소 클래스는 3개
*/