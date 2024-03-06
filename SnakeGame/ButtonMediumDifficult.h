#ifndef BUTTON_MEDIUM_DIFFICULT
#define BUTTON_MEDIUM_DIFFICULT


#include "raylib.h"
#include "constants.h"

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

#endif // !BUTTON_MEDIUM_DIFFICULT



