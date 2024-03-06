#include "startTheMainWindow.h"


void startTheMainWinow() {

	mainWindow menu = mainWindow();

	while (WindowShouldClose() == false) {
		BeginDrawing();

		// Updating
		menu.Update();

		// Drawing
		menu.Draw();

		EndDrawing();
	}
}