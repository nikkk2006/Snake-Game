#include "startWindowsFunctions.h"


extern GameStates gameState;

void startTheThemeWindow() {

	MainThemeWindow window = MainThemeWindow();

	if (window.IsButtonBackPressed()) {
		gameState = GameStates::SETTINGS;
	}

}