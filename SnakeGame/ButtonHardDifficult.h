#ifndef BUTTON_HARD_DIFFICULT_H
#define BUTTON_HARD_DIFFICULT_H


#include "raylib.h"
#include "constants.h"

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

#endif // !BUTTON_HARD_DIFFICULT_H



