#ifndef MAIN_SETTINGS_WINDOW_H
#define MAIN_SETTINGS_WINDOW_H


#include "constants.h"
namespace C = MyConstants;


class MainSettingsWindow {
public:
	int screenWidth;
	int screenHeight;
	const char* title;

	// Buttons


	MainSettingsWindow();
	~MainSettingsWindow();
	int Update();
	void Draw();
};

#endif // !MAIN_SETTINGS_WINDOW_H

