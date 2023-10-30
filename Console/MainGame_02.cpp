#include "MainGame_02.h"

MainGame_02::MainGame_02()
{
	// 3. 인스턴스로 올리는 행위 (메모리에 구현화)
	_Player = new Player_01;

	_Player->setHP(100);

	cout << "플레이어 현재 체력 : " << _Player->getHP() << endl << endl;

	cout << "소형 물약(1번), 대형 물약(2번)" << endl;

	//int Input;

	//while (true)
	//{
	//	cin >> Input;

	//	if (Input == 1)
	//	{
	//		_Player->setHP(_Player->getHP() + 100);
	//	}
	//	else if (Input == 2)
	//	{
	//		_Player->setHP(_Player->getHP() + 500);
	//	}
	//	else
	//	{
	//		cout << "깜지 콜?" << endl;
	//	}

	//	cout << endl;

	//	cout << "물약먹은 후 체력 : " << _Player->getHP() << endl;
	//}

	_Player->setHP(2000);
	int hp = _Player->getHP();

	int Input;

	cout << "플레이어 현재 체력 : " << _Player->getHP() << endl;
	cout << "독약 물약(1번), 즉사 물약(2번), 회복 물약(3번)" << endl;

	while (_Player->getHP() > 0)
	{
		cout << "물약 선택 : ";
		cin >> Input;

		if (Input == 1)
		{
			for (int i = 0; i < 3; i++)
			{
				_Player->setHP(_Player->getHP() - (hp * 0.2));
				cout << "현재 체력 : " << _Player->getHP() << endl;
				Sleep(500);
			}
			continue;
		}
		else if (Input == 2)
		{
			_Player->setHP(0);
		}
		else if (Input == 3)
		{
			for (int i = 0; i < 5; i++)
			{
				_Player->setHP(_Player->getHP() + (hp * 0.07));
				cout << "현재 체력 : " << _Player->getHP() << endl;
				Sleep(500);
			}
			continue;
		}
		else
		{
			cout << "예외 처리" << endl;
		}

		hp = _Player->getHP();
		cout << "현재 체력 : " << hp << endl;
	}

	/*
	※ 실습

	1. 독약을 만들어 보자
		ㄴ 도트 데미지 (턴당 체력의 -20%)

	2. 즉사 물약을 만들자.
		ㄴ 한번에 사망

	3. 플레이어 체력이 0이하로 내려가면 음수값 예외 처리한다.

	4. 체력 재생 물약 만들자.
		ㄴ 지속적인 체력회복 (플레이어 체력 7%)
	*/
}

// 소멸자 : 생성자에서 new를 사용했으면 이곳에서 delete 한다.
MainGame_02::~MainGame_02()
{
	delete _Player;
}

