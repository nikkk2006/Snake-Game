#ifndef MAIN_MENU_H
#define MAIN_MENU_H


#include "raylib.h"
#include "mainMenuButtons.h"
#include "constants.h"
#include "enums.h"


class mainMenu{
public:
	int screenWidth;
	int screenHeight;
	const char* title;

	// Buttons
	buttonStartTheGame buttonStart;
	buttonShop buttonShop;
	buttonSettings buttonSettings;
	buttonExit buttonExit;

	mainMenu();
	~mainMenu();
	void Draw();

	bool IsStartButtonPressed();
	bool IsShopButtonPressed();
	bool IsSettingsButtonPressed();
	bool IsExitButtonPressed();
};

#endif // !MAIN_MENU_H



