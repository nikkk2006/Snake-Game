#include "mainMenu.h"


int main() {

	mainMenu menu = mainMenu();

	while (menu.Update() && WindowShouldClose() == false) {		

		// Updating
		menu.Update();

		// Drawing
		menu.Draw();

	}

	return 0;
}