#ifndef MAIN_SETTINGS_WINDOW_H
#define MAIN_SETTINGS_WINDOW_H


#include "constants.h"
#include "MainMenuButtons.h"
#include "startWindowsFunctions.h"
namespace MyC = MyConstants;


class MainSettingsWindow {
public:
	int screenWidth;
	int screenHeight;
	const char* title;

	// Buttons
	buttonBack back;
	buttonControls controls;

	MainSettingsWindow();
	~MainSettingsWindow();
	bool IsOnRadioButtonPressed();
	bool IsOffRadioButtonPressed();
	bool IsDarkThemeRadioButtonPressed();
	bool IsWhiteThemeRadioButtonPressed();
	bool IsButtonBackPressed();
	bool IsButtonControlsPressed();
	void Draw();
	void Update();
};

#endif // !MAIN_SETTINGS_WINDOW_H

