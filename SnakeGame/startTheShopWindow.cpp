#include "startWindowsFunctions.h"


extern GameStates gameState;

void startTheShopWindow() {
	
	MainShopWindow window = MainShopWindow();

	while (!WindowShouldClose() && gameState == GameStates::SHOP) {
		if (window.IsButtonBackPressed()) {
			gameState = GameStates::MENU;
		}

		window.Update();

		BeginDrawing();

		// Drawing
		window.Draw();

		EndDrawing();
	}
}