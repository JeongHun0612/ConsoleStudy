#include "GameManager.h"
#include "DrawUI.h"

void main()
{
	GameManager gameManager;
	DrawUI drawUI;

	// �ʱ�ȭ
	gameManager.init();
	
	// TitleScene ���
	drawUI.drawTitleScene(20, 20);

	int selectMenu = drawUI.selctTitleMenu(73, 20);


	if (selectMenu == GAMESTART)
	{
		cout << "GameStart" << endl;

		while (true)
		{
			// ���� �� ���

		}
	}
	else if (selectMenu == GAMEEXIT)
	{
		system("cls");
		return;
	}
}