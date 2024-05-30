#include "startWindowsFunctions.h"


extern bool isAudioPlay;
extern GameStates gameState;

void startTheSettingsWindow() {

	MainSettingsWindow window = MainSettingsWindow();

	while (!WindowShouldClose() && gameState == GameStates::SETTINGS) {


		if (window.IsButtonBackPressed()) {
			gameState = GameStates::MENU;
		}
		if (window.IsButtonControlsPressed()) {
			gameState = GameStates::CONTROLS;
		}

		// Draw
		BeginDrawing();
		window.Draw();

		// Update
		window.Update();

		EndDrawing();
	}
}

