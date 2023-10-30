#include "GameManager.h"

GameManager::GameManager()
{

}

GameManager::~GameManager()
{

}

void GameManager::init(void)
{
	// 콘솔 크기 초기화
	system("mode con:cols=160 lines=40");

	// 커서 속성 초기화.
	CONSOLE_CURSOR_INFO Cursor;
	Cursor.bVisible = 0;
	Cursor.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Cursor);

	// 랜덤 시드 초기화
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
