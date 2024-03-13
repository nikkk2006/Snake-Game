//#include "mainMenu.h"
#include "MainDifficultWindow.h"


int main() {

	MainDifficultWindow menu = MainDifficultWindow();

	while (WindowShouldClose() == false) {
		BeginDrawing();

		// Updating
		menu.Update();

		// Drawing
		menu.Draw();

		EndDrawing();
	}

	return 0;
}