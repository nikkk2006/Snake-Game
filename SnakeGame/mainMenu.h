#ifndef MAIN_MENU_H
#define MAIN_MENU_H


#include "raylib.h"
#include "buttonStartTheGame.h"
#include "buttonShop.h"


extern const int cellSize;
extern const Color green;

class mainMenu{
public:
	int screenWidth;
	int screenHeight;
	const char* title;
	buttonStartTheGame buttonStart;
	buttonShop buttonShop;

	mainMenu();
	~mainMenu();
	void Update();
	void Draw();
};

#endif // !MAIN_MENU_H



