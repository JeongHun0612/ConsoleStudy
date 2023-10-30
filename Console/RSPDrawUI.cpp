#include "RSPDrawUI.h"

RSPDrawUI::RSPDrawUI()
{

}

RSPDrawUI::~RSPDrawUI()
{

}

void RSPDrawUI::drawTitle(void)
{

}

void RSPDrawUI::drawInputError(void)
{

}


int RSPDrawUI::darwHandMenu(int posX, int posY)
{
	char keyVal;

	int startPoint = posY;
	int endPoint = posY + 2;

	gotoXY(posX - 2, posY);
	cout << " Ⅱ 陛嬪" << endl;
	gotoXY(posX, posY + 1);
	cout << "夥嬪" << endl;
	gotoXY(posX, posY + 2);
	cout << "爾" << endl;

	while (true)
	{
		if (_kbhit())
		{
			keyVal = _getch();
			if (keyVal == -32)
			{
				keyVal = _getch();
				switch (keyVal)
				{
				case UP:
					if (posY > startPoint)
					{
						gotoXY(posX - 2, posY);
						cout << "   ";
						gotoXY(posX - 2, --posY);
						cout << " Ⅱ";
					}
					break;
				case DOWN:
					if (posY < endPoint)
					{
						gotoXY(posX - 2, posY);
						cout << "   ";
						gotoXY(posX - 2, ++posY);
						cout << " Ⅱ";
						break;
					}
				}
			}
			else if (keyVal == ENTER)
			{
				return posY - startPoint;
			}
		}
	}
}


void RSPDrawUI::drawResult(int result, int posX, int posY)
{
	switch (result)
	{
	case DRAW:
		gotoXY(posX, posY);
		printf("忙式式式式式式式式式式式式式式式式式忖\n");
		gotoXY(posX, posY + 1);
		printf("弛      鼠蝓睡     弛\n");
		gotoXY(posX, posY + 2);
		printf("戌式式式式式式式式式式式式式式式式式戎\n");
		break;
	case LOSE:
		gotoXY(posX, posY);
		printf("忙式式式式式式式式式式式式式式式式式忖\n");
		gotoXY(posX, posY + 1);
		printf("弛       ぬ寡      弛\n");
		gotoXY(posX, posY + 2);
		printf("戌式式式式式式式式式式式式式式式式式戎\n");
		break;
	case WIN:
		gotoXY(posX, posY);
		printf("忙式式式式式式式式式式式式式式式式式忖\n");
		gotoXY(posX, posY + 1);
		printf("弛       蝓葬      弛\n");
		gotoXY(posX, posY + 2);
		printf("戌式式式式式式式式式式式式式式式式式戎\n");
		break;
	default:
		break;
	}
}

void RSPDrawUI::drawHand(int hand, int posX, int posY)
{
	switch (hand)
	{
	case SCISSORS:
		outPutColorDot(this->_Scissors, posX, posY, this->_HandSizeX, this->_HandSizeY);
		break;
	case ROCK:
		outPutColorDot(this->_Rock, posX, posY, this->_HandSizeX, this->_HandSizeY);
		break;
	case PAPER:
		outPutColorDot(this->_Paper, posX, posY, this->_HandSizeX, this->_HandSizeY);
		break;
	default:
		break;
	}
}

void RSPDrawUI::textColor(int font, int backGround)
{
	int Color = font + backGround * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}

void RSPDrawUI::outPutColorDot(int dotArray[], int posX, int posY, int sizeX, int sizeY)
{
	int tempColor = WHITE;

	for (int i = 0; i < sizeY; i++)
	{
		gotoXY(posX, posY + i);
		for (int j = 0; j < sizeX; j++)
		{
			if (dotArray[j + (i * sizeX)] != tempColor)
			{
				tempColor = dotArray[j + (i * sizeX)];
				textColor(tempColor, BLACK);
			}

			printf("﹥");
		}

		cout << '\n';
	}

	textColor(WHITE, BLACK);
}

void RSPDrawUI::gotoXY(int x, int y)
{
	COORD Pos = { x * 2 , y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

