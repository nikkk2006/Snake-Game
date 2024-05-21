#include "startWindowsFunctions.h"


extern GameStates gameState;

void startTheMainMenu(){

	mainMenu menu = mainMenu();

	BeginDrawing();

	// Drawing
	menu.Draw();

	if (menu.IsStartButtonPressed()) {gameState = GameStates::START_DIFFICULT_WINDOW; }
	else if (menu.IsStartShopButtonPressed()) { gameState = GameStates::SHOP; }
	else if (menu.IsStartExitButtonPressed()) { gameState = GameStates::EXIT; }
	else if (menu.IsStartSettingsButtonPressed()) { gameState = GameStates::SETTINGS; }	

}
