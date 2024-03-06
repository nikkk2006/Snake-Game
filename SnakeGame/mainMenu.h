#ifndef MAIN_MENU_H
#define MAIN_MENU_H


#include "raylib.h"
#include "buttonStartTheGame.h"
#include "buttonShop.h"
#include "buttonSettings.h"
#include "buttonExit.h"


extern const int cellSize;
extern const Color green;

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



