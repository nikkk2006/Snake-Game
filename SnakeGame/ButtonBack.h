#ifndef BUTTON_BACK_H
#define BUTTON_BACK_H


#include "raylib.h"
#include "constants.h"

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

#endif // !BUTTON_BACK_H

