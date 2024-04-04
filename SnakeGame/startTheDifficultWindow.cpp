#include "startTheDifficultWindow.h"


void startTheDifficultWindow(){

	MainDifficultWindow window = MainDifficultWindow();

	while (window.Update() && WindowShouldClose() == false) {
		BeginDrawing();

		// Updating
		window.Update();

		// Drawing
		window.Draw();

		EndDrawing();
	}
}
