#include "startWindowsFunctions.h"


int startTheMainMenu(){

	mainMenu menu = mainMenu();

	while (!WindowShouldClose()) {

		// Drawing
		menu.Draw();

		if (menu.IsStartButtonPressed()) { return START; }
		if (menu.IsStartShopButtonPressed()) { return SHOP; }
		if (menu.IsStartExitButtonPressed()) { return EXIT; }
		if (menu.IsStartSettingsButtonPressed()) { return SETTINGS; }
	}
}
