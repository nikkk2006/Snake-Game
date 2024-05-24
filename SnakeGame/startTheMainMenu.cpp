#include "startWindowsFunctions.h"


extern GameStates gameState;

void startTheMainMenu(){

	mainMenu menu = mainMenu();

	BeginDrawing();

	// Drawing
	menu.Draw();

	if (menu.IsStartButtonPressed()) {gameState = GameStates::START_DIFFICULT_WINDOW; }
	else if (menu.IsShopButtonPressed()) { gameState = GameStates::SHOP; }
	else if (menu.IsExitButtonPressed()) { gameState = GameStates::EXIT; }
	else if (menu.IsSettingsButtonPressed()) { gameState = GameStates::SETTINGS; }	

}
