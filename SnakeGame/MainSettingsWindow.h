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
	buttonShop shopButton{"shop", 10.0, 17.0, 10.0, 3.0};

	MainSettingsWindow();
	~MainSettingsWindow();
	bool Update();
	void Draw();
};

#endif // !MAIN_SETTINGS_WINDOW_H

