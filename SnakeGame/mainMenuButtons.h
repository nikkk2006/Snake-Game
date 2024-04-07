#ifndef MAIN_MENU_BUTTONS_H
#define MAIN_MENU_BUTTONS_H


#include "raylib.h"
#include "constants.h"


class buttonStartTheGame {
public:
	bool buttonPressed;
	const int width;
	const int height;
	const char* text;
	Rectangle button;

	buttonStartTheGame();
	void Draw();
};

class buttonShop {
public:
	bool buttonPressed;
	const int width;
	const int height;
	const char* text;
	Rectangle button;

	buttonShop();
	void Draw();
};

class buttonSettings {
public:
	bool buttonPressed;
	const int width;
	const int height;
	const char* text;
	Rectangle button;

	buttonSettings();
	void Draw();
};

class buttonExit {
public:
	bool buttonPressed;
	const int width;
	const int height;
	const char* text;
	Rectangle button;

	buttonExit();
	void Draw();
};

#endif // !MAIN_MENU_BUTTONS_H

