#include "RSPGameManager.h"
#include "RSPDrawUI.h"
#include "RSPPlayer.h"
#include "RSPComputer.h"
#include "RSPReferee.h"

void main()
{
	RSPGameManager gameManager;
	RSPDrawUI drawUI;
	RSPPlayer player;
	RSPComputer computer;
	RSPReferee referee;

	// √ ±‚»≠
	gameManager.Init();

	int pHand;
	int cHand;
	int result;

	while (true)
	{
		pHand = drawUI.darwHandMenu(36, 15);

		system("cls");

		player.setHand(pHand);

		drawUI.gotoXY(16, 2);
		cout << "Player" << endl;
		drawUI.drawHand(pHand, 0, 4);

		cHand = computer.GetHand();
		drawUI.gotoXY(59, 2);
		cout << "Computer" << endl;
		drawUI.drawHand(cHand, 43, 4);

		result = referee.getResult(pHand, cHand);
		drawUI.drawResult(result, 33, 10);
	}
}