#ifndef MAIN_MENU_H
#define MAIN_MENU_H


#include "raylib.h"
#include "startTheMainWindow.h"
#include "startTheDifficultWindow.h"
#include "buttonStartTheGame.h"
#include "buttonShop.h"
#include "buttonSettings.h"
#include "buttonExit.h"
#include "constants.h"


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
	bool Update();
	void Draw();
};

#endif // !MAIN_MENU_H



