#include "startWindowsFunctions.h"


GameStates gameState;

void startTheMainLoop() {

	gameState = GameStates::MENU;
	bool flag = true;

	while (!WindowShouldClose() && flag) {

		switch (gameState) {
		case static_cast<GameStates>(GameStates::MENU): startTheMainMenu(); break;
		case static_cast<GameStates>(GameStates::START_DIFFICULT_WINDOW): startTheDifficultWindow(); break;
		case static_cast<GameStates>(GameStates::START_GAME_OVER_WINDOW): startTheMainGameOverWindow(); break;
		case static_cast<GameStates>(GameStates::START_THE_GAME): startTheMainWindow(); break;
		case static_cast<GameStates>(GameStates::SHOP): startTheShopWindow(); break;
		case static_cast<GameStates>(GameStates::SETTINGS): startTheSettingsWindow(); break;
		case static_cast<GameStates>(GameStates::EXIT): flag = false; break;
		}
	}
}