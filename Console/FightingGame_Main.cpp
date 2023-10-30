#include "GameManager.h"
#include "DrawUI.h"

void main()
{
	GameManager gameManager;
	DrawUI drawUI;

	// 초기화
	gameManager.init();
	
	// TitleScene 출력
	drawUI.drawTitleScene(20, 20);

	int selectMenu = drawUI.selctTitleMenu(73, 20);


	if (selectMenu == GAMESTART)
	{
		cout << "GameStart" << endl;

		while (true)
		{
			// 게임 씬 출력

		}
	}
	else if (selectMenu == GAMEEXIT)
	{
		system("cls");
		return;
	}
}