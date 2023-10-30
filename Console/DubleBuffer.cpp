#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int _nScreenIndex;		//콘솔 접근 인덱스
HANDLE _hScreen[2];		//콘솔2개

string _sTextInfo;

void screenInit()
{
	// Screen Buffer 초기화
	_nScreenIndex = 0;

	_hScreen[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	_hScreen[1] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);

	// Cursor 초기화
	CONSOLE_CURSOR_INFO CursorInfo;

	CursorInfo.dwSize = 1;
	CursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(_hScreen[0], &CursorInfo);
	SetConsoleCursorInfo(_hScreen[1], &CursorInfo);
}

void screenClear()
{
	COORD Coor = { 0, 0 };
	DWORD dw;
	FillConsoleOutputCharacter(_hScreen[_nScreenIndex], ' ', SCR_WIDTH * SCR_HEIGHT, Coor, &dw);
}

void screenFlipping()
{
	SetConsoleActiveScreenBuffer(_hScreen[_nScreenIndex]);
	_nScreenIndex = !_nScreenIndex;
}

void screenPrint(int posX, int posY, string textInfo)
{
	DWORD dw;
	COORD CursorPosition = { posX, posY };
	SetConsoleCursorPosition(_hScreen[_nScreenIndex], CursorPosition);

	WriteFile(_hScreen[_nScreenIndex], textInfo.c_str(), textInfo.size(), &dw, NULL);

	_sTextInfo = '\0';
}

void drawToBackBuffer(short posX, short posY, int width, int height, char* dotArray)
{
	char cTextInfo[MAX_PATH] = "";

	int tempPosX = 0;
	bool isBlank = false;
	int isBlackCount = 0;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			int color = dotArray[j + (i * width)];

			//if (color == BLANK && !isBlank)
			//{
			//	isBlank = true;
			//	isBlackCount++;
			//}
			//else
			//{
			//	isBlank = false;
			//	tempPosX = j;
			//	sprintf_s(cTextInfo, "\033[%d;%dm■", color + 30, color + 40);
			//	_sTextInfo += cTextInfo;
			//}

			//if (isBlackCount == 2)
			//{
			//	screenPrint(tempPosX, posY + i, _sTextInfo);
			//	tempPosX = 0;
			//	isBlackCount = 0;
			//}

			if (color == BLANK)
			{
				sprintf_s(cTextInfo, "\033[37;47m■");

			}
			else
			{
				sprintf_s(cTextInfo, "\033[%d;%dm■", color + 30, color + 40);
			}

			_sTextInfo += cTextInfo;
		}
		screenPrint(posX, posY + i, _sTextInfo);
	}
}

void render()
{
	screenClear();

	screenFlipping();
}

void main()
{

}