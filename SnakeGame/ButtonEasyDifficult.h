#ifndef BUTTON_EASY_DIFFICULT_H
#define BUTTON_EASY_DIFFICULT_H


#include "raylib.h"
#include "constants.h"

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

#endif // !BUTTON_EASY_DIFFICULT_H



