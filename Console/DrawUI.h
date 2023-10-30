#pragma once
#include "GameManager.h"

class DrawUI : GameManager
{
private:

public:
	DrawUI();
	~DrawUI();

	void drawTitleScene(int posX, int posY);
	void drawGameScene(void);

	int selctTitleMenu(int posX, int posY);
};

