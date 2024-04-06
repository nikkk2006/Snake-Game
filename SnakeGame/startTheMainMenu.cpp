#include "startTheMainMenu.h"


int startTheMainMenu(){

	mainMenu menu = mainMenu();
	int buttonPressed;

	while (!WindowShouldClose()) {

		// Drawing
		menu.Draw();

		if (menu.IsStartButtonPressed()) { return START; }


		// TODO
	}
}
