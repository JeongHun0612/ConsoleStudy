#include "DrawUI.h"

DrawUI::DrawUI()
{

}

DrawUI::~DrawUI()
{

}

void DrawUI::drawTitleScene(int posX, int posY)
{
	
}

int DrawUI::selctTitleMenu(int posX, int posY)
{
	int startPoint = posY;
	int endPoint = posY + 1;

	gotoXY(posX - 3, posY);
	cout << "▶ 게임 시작" << endl;
	gotoXY(posX, posY + 1);
	cout << "게임 종료" << endl;

	while (true)
	{
		char keyVal = getKeyInput();

		switch (keyVal)
		{
		case UP:
			if (posY > startPoint)
			{
				gotoXY(posX - 3, posY);
				cout << "  ";
				gotoXY(posX - 3, --posY);
				cout << "▶";
			}
			break;
		case DOWN:
			if (posY < endPoint)
			{
				gotoXY(posX - 3, posY);
				cout << "  ";
				gotoXY(posX - 3, ++posY);
				cout << "▶";
				break;
			}
			break;
		case LEFT:
			break;

		case RIGHT:
			break;

		case ENTER:
			return posY - startPoint;
		}
	}
}


void DrawUI::drawGameScene(void)
{

}