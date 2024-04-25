#include "startWindowsFunctions.h"


void startTheSettingsWindow() {

	MainSettingsWindow window = MainSettingsWindow();

	while (WindowShouldClose() == false) {
		BeginDrawing();

		// Updating
		//window.Update();

		// Drawing
		window.Draw();

		EndDrawing();
	}
}