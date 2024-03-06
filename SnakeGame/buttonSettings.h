#ifndef BUTTON_SETTINGS_H
#define BUTTON_SETTINGS_H


#include "raylib.h"


extern const int cellSize;
extern const Color darkGreen;

class buttonSettings{
public:
	bool buttonPressed;
	const int width;
	const int height;
	const char* text;
	Rectangle button;

	buttonSettings();
	void Draw();
};

#endif


