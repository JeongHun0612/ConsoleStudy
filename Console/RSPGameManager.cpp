#include "RSPGameManager.h"

RSPGameManager::RSPGameManager()
{

}

RSPGameManager::~RSPGameManager()
{

}

void RSPGameManager::Init(void)
{
	system("mode con:cols=160 lines=40");
	srand(time(NULL));

	CONSOLE_CURSOR_INFO Cursor;
	Cursor.bVisible = 0;
	Cursor.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Cursor);
}


void RSPGameManager::gotoXY(int x, int y)
{
	COORD Pos = { x * 2 , y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}