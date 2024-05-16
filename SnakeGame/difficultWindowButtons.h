#ifndef DIFFICULT_WINDOW_BUTTONS_H
#define DIFFICULT_WINDOW_BUTTONS_H


#include "raylib.h"
#include "constants.h"
#include "MainMenuButtons.h"


class ButtonEasyDifficult{
public:
	bool buttonPressed;
	const int width;
	const int height;
	const char* text;
	Rectangle button;

	ButtonEasyDifficult();
	void Draw();
};

class ButtonMediumDifficult {
public:
	bool buttonPressed;
	const int width;
	const int height;
	const char* text;
	Rectangle button;

	ButtonMediumDifficult();
	void Draw();
};

class ButtonHardDifficult {
public:
	bool buttonPressed;
	const int width;
	const int height;
	const char* text;
	Rectangle button;

	ButtonHardDifficult();
	void Draw();
};

class ButtonBack {
public:
	bool buttonPressed;
	const int width;
	const int height;
	const char* text;
	Rectangle button;

	ButtonBack();
	void Draw();
};

#endif // !DIFFICULT_WINDOW_BUTTONS_H

