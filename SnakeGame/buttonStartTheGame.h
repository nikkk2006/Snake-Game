#ifndef BUTTON_START_THE_GAME
#define BUTTON_START_THE_GAME


#include "raylib.h"


extern const int cellSize;
extern const Color darkGreen;


class buttonStartTheGame{
public:
	bool buttonPressed;
	const int width;
	const int height;
	const char* text;
	Rectangle button;

	buttonStartTheGame();
	void Draw();
};

#endif // !BUTTON_START_THE_GAME



