#ifndef MAIN_THEME_WINDOW_H
#define MAIN_THEME_WINDOW_H


#include "mainMenuButtons.h"


class MainThemeWindow {
public:
	int screenWidth;
	int screenHeight;
	const char* title;

	// Buttons
	buttonBack back;

	MainThemeWindow();
	~MainThemeWindow();
	bool IsButtonBackPressed();
	void Draw();
};

#endif // !MAIN_THEME_WINDOW_H

