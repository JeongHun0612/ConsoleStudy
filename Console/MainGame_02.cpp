#include "MainGame_02.h"

MainGame_02::MainGame_02()
{
	// 3. �ν��Ͻ��� �ø��� ���� (�޸𸮿� ����ȭ)
	_Player = new Player_01;

	_Player->setHP(100);

	cout << "�÷��̾� ���� ü�� : " << _Player->getHP() << endl << endl;

	cout << "���� ����(1��), ���� ����(2��)" << endl;

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
	//		cout << "���� ��?" << endl;
	//	}

	//	cout << endl;

	//	cout << "������� �� ü�� : " << _Player->getHP() << endl;
	//}

	_Player->setHP(2000);
	int hp = _Player->getHP();

	int Input;

	cout << "�÷��̾� ���� ü�� : " << _Player->getHP() << endl;
	cout << "���� ����(1��), ��� ����(2��), ȸ�� ����(3��)" << endl;

	while (_Player->getHP() > 0)
	{
		cout << "���� ���� : ";
		cin >> Input;

		if (Input == 1)
		{
			for (int i = 0; i < 3; i++)
			{
				_Player->setHP(_Player->getHP() - (hp * 0.2));
				cout << "���� ü�� : " << _Player->getHP() << endl;
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
				cout << "���� ü�� : " << _Player->getHP() << endl;
				Sleep(500);
			}
			continue;
		}
		else
		{
			cout << "���� ó��" << endl;
		}

		hp = _Player->getHP();
		cout << "���� ü�� : " << hp << endl;
	}

	/*
	�� �ǽ�

	1. ������ ����� ����
		�� ��Ʈ ������ (�ϴ� ü���� -20%)

	2. ��� ������ ������.
		�� �ѹ��� ���

	3. �÷��̾� ü���� 0���Ϸ� �������� ������ ���� ó���Ѵ�.

	4. ü�� ��� ���� ������.
		�� �������� ü��ȸ�� (�÷��̾� ü�� 7%)
	*/
}

// �Ҹ��� : �����ڿ��� new�� ��������� �̰����� delete �Ѵ�.
MainGame_02::~MainGame_02()
{
	delete _Player;
}

