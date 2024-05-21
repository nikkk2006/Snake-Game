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

	// radiobuttons for sounds
	bool soundsOnRadioButton;
	bool soundsOffRadioButton;

	// Buttons
	buttonBack back;

	MainSettingsWindow();
	~MainSettingsWindow();
	bool IsOnRadioButtonPressed();
	bool IsOffRadioButtonPressed();
	bool IsButtonBackPressed();
	void Draw();
	void Update();
};

#endif // !MAIN_SETTINGS_WINDOW_H

