#include "startWindowsFunctions.h"


void startTheSettingsWindow() {

	MainSettingsWindow window = MainSettingsWindow();

	while (window.Update() == false && WindowShouldClose() == false) {
		BeginDrawing();

		// Updating
		window.Update();

		// Drawing
		window.Draw();

		EndDrawing();
	}
}