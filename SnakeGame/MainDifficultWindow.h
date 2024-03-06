#ifndef MAIN_DIFFICULT_WINDOW_H
#define MAIN_DIFFICULT_WINDOW_H


#include "constants.h"

class MainDifficultWindow {
public:
	int screenWidth;
	int screenHeight;
	const char* title;

	// Buttons

	MainDifficultWindow();
	~MainDifficultWindow();
	void Update();
	void Draw();
};

#endif // !MAIN_DIFFICULT_WINDOW_H



