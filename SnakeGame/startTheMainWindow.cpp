#include "startWindowsFunctions.h"


extern GameStates gameState;

void startTheMainWindow() {

	mainWindow window = mainWindow();

	while (!WindowShouldClose() && window.game.running) {

		BeginDrawing();

		// Drawing
		window.Draw();

		// Updating
		window.Update();


		EndDrawing();
		gameState = GameStates::START_GAME_OVER_WINDOW;
	}

	
}