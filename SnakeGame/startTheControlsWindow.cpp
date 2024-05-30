#include "startWindowsFunctions.h"


extern GameStates gameState;

void startTheControlsWindow() {

	MainControlsWindow window = MainControlsWindow();

	if (window.IsButtonBackPressed()) {
		gameState = GameStates::SETTINGS;
	}

	BeginDrawing();

	// Drawing
	window.Draw();

	EndDrawing();
}