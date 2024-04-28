#include "startWindowsFunctions.h"


void startTheMainWindow() {

	mainWindow window = mainWindow();

	while (WindowShouldClose() == false) {
		BeginDrawing();

		// Updating
		window.Update();

		// Drawing
		window.Draw();

		EndDrawing();
	}
}