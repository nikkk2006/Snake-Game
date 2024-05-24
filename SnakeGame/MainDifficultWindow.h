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
	ButtonEasyDifficult easyDifficult{ "easy", 10.0, 12.0, 10.0, 3.0, 110.0 };
	ButtonMediumDifficult mediumDifficult{"medium", 10.0, 16.0, 10.0, 3.0, 100.0 };
	ButtonHardDifficult hardDifficult{"hard", 10.0, 20.0, 10.0, 3.0, 110.0 };
	buttonBack back{ "back", 10.0, 25.0, 10.0, 3.0, 115.0 };

	MainDifficultWindow();
	~MainDifficultWindow();
	bool IsButtonEasyPressed();
	bool IsButtonMediumPressed();
	bool IsButtonHardPressed();
	bool IsButtonBackPressed();
	void Draw();
};

#endif // !MAIN_DIFFICULT_WINDOW_H



