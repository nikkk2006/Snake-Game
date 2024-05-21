#include "startWindowsFunctions.h"


extern GameStates gameState;

void startTheDifficultWindow(){

	MainDifficultWindow window = MainDifficultWindow();

	BeginDrawing();

	// Drawing
	window.Draw();

	if (window.IsButtonEasyPressed()) {
		snakeSpeed = SnakeSpeed::EASY;
		gameState = GameStates::START_THE_GAME;
	}
	else if (window.IsButtonMediumPressed()) {
		snakeSpeed = SnakeSpeed::MEDIUM;
		gameState = GameStates::START_THE_GAME;
	}
	else if (window.IsButtonHardPressed()) {
		snakeSpeed = SnakeSpeed::HARD;
		gameState = GameStates::START_THE_GAME;
	}

	if (window.IsButtonBackPressed()) {
		gameState = GameStates::MENU;
	}

	EndDrawing();
}
