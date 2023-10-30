#include "GameManager.h"

GameManager::GameManager()
{

}

GameManager::~GameManager()
{

}

void GameManager::init(void)
{
	// �ܼ� ũ�� �ʱ�ȭ
	system("mode con:cols=160 lines=40");

	// Ŀ�� �Ӽ� �ʱ�ȭ.
	CONSOLE_CURSOR_INFO Cursor;
	Cursor.bVisible = 0;
	Cursor.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Cursor);

	// ���� �õ� �ʱ�ȭ
	srand(time(NULL));
}

void GameManager::gotoXY(int posX, int posY)
{
	COORD Pos = { posX , posY };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

int GameManager::getKeyInput()
{
	char keyVal;

	keyVal = _getch();

	if (keyVal == -32)
	{
		keyVal = _getch();

		return keyVal;
	}
	else
	{
		return keyVal;
	}
}
