#include "startTheMainWindow.h"


void startTheMainWinow() {

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