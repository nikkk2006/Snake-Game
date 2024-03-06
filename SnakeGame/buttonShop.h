#ifndef BUTTON_SHOP
#define BUTTON_SHOP


#include "raylib.h"


extern const int cellSize;
extern const Color darkGreen;

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

#endif
