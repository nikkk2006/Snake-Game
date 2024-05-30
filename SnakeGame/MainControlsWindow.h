#ifndef MAIN_CONTROLS_WINDOW_H
#define MAIN_CONTROLS_WINDOW_H


#include "mainMenuButtons.h"


class MainControlsWindow {
public:
	int screenWidth;
	int screenHeight;
	const char* title;

	// Buttons
	buttonBack back;

	MainControlsWindow();
	~MainControlsWindow();
	bool IsButtonBackPressed();
	void Draw();
};

#endif // !MAIN_CONTROLS_WINDOW_H

