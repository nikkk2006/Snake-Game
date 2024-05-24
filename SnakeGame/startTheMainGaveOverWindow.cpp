#include "startWindowsFunctions.h"


extern GameStates gameState;

void startTheMainGameOverWindow() {

	MainGameOverMenu menu = MainGameOverMenu();

	BeginDrawing();

	// Drawing
	menu.Draw();

	if (menu.IsMenuButtonPressed()) { gameState = GameStates::MENU; }
	else if (menu.IsRestartButtonPressed()) { gameState = GameStates::START_THE_GAME; }

	EndDrawing();
}