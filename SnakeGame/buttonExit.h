#ifndef BUTTON_EXIT_H
#define BUTTON_EXIT_H


#include "raylib.h"


extern const int cellSize;
extern const Color darkGreen;

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



