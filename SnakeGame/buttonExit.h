#ifndef BUTTON_EXIT_H
#define BUTTON_EXIT_H


#include "raylib.h"
#include "constants.h"


class buttonExit{
public:
	bool buttonPressed;
	const int width;
	const int height;
	const char* text;
	Rectangle button;

	buttonExit();
	void Draw();
};

#endif // !BUTTON_EXIT_H



