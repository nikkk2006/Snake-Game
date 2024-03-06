#ifndef MAIN_DIFFICULT_WINDOW_H
#define MAIN_DIFFICULT_WINDOW_H


#include "constants.h"
#include "ButtonEasyDifficult.h"
#include "ButtonMediumDifficult.h"
#include "ButtonHardDifficult.h"

class MainDifficultWindow {
public:
	int screenWidth;
	int screenHeight;
	const char* title;

	// Buttons
	ButtonEasyDifficult easyDifficult;
	ButtonMediumDifficult mediumDifficult;
	ButtonHardDifficult hardDifficult;

	MainDifficultWindow();
	~MainDifficultWindow();
	void Update();
	void Draw();
};

#endif // !MAIN_DIFFICULT_WINDOW_H



