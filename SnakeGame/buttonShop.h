#ifndef BUTTON_SHOP
#define BUTTON_SHOP


#include "raylib.h"
#include "constants.h"


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
