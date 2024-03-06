#include "mainMenu.h"


int main() {

	mainMenu menu = mainMenu();

	while (menu.Update() && WindowShouldClose() == false) {
		BeginDrawing();

		// Updating
		menu.Update();

		// Drawing
		menu.Draw();

		EndDrawing();
	}

	return 0;
}