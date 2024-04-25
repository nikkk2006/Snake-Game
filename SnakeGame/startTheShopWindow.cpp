#include "startWindowsFunctions.h"


void startTheShopWindow() {
	
	MainShopWindow window = MainShopWindow();

	while (window.Update() && WindowShouldClose() == false) {
		BeginDrawing();

		// Updating
		window.Update();

		// Drawing
		window.Draw();

		EndDrawing();
	}
}