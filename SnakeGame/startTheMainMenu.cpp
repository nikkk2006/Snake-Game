#include "startWindowsFunctions.h"


int startTheMainMenu(){

	mainMenu menu = mainMenu();
	int buttonPressed;

	while (!WindowShouldClose()) {

		// Drawing
		menu.Draw();

		if (menu.IsStartButtonPressed()) { return START; }
		if (menu.IsStartShopButtonPressed()) { return SHOP; }
		if (menu.IsStartExitButtonPressed()) { return EXIT; }


		// TODO
	}
}
