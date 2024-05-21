#ifndef MAIN_DIFFICULT_WINDOW_H
#define MAIN_DIFFICULT_WINDOW_H


#include "constants.h"
#include "snakeSpeed.h"
#include "difficultWindowButtons.h"


class MainDifficultWindow {
public:
	int screenWidth;
	int screenHeight;
	const char* title;

	// Buttons
	ButtonEasyDifficult easyDifficult;
	ButtonMediumDifficult mediumDifficult;
	ButtonHardDifficult hardDifficult;
	buttonBack back{ "back", 10.0, 25.0, 10.0, 3.0, 125.0 };

	MainDifficultWindow();
	~MainDifficultWindow();
	bool IsButtonEasyPressed();
	bool IsButtonMediumPressed();
	bool IsButtonHardPressed();
	bool IsButtonBackPressed();
	void Draw();
};

#endif // !MAIN_DIFFICULT_WINDOW_H



