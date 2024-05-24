#ifndef MAIN_GAME_OVER_MENU_H
#define MAIN_GAME_OVER_MENU_H


#include "raylib.h"
#include "constants.h"
#include "MainMenuButtons.h"


class MainGameOverMenu {
public:
	int screenWidth;
	int screenHeight;
	const char* title;

	// Buttons
	buttonStartTheGame buttonStart;
	buttonStartTheMenu buttonMenu;

	MainGameOverMenu();
	~MainGameOverMenu();
	void Draw();

	bool IsRestartButtonPressed();
	bool IsMenuButtonPressed();
};

#endif // !MAIN_GAME_OVER_MENU_H

