#include "startWindowsFunctions.h"


void startTheShopWindow() {
	
	MainShopWindow window = MainShopWindow();

	BeginDrawing();

	// Updating
	window.Update();

	// Drawing
	window.Draw();

	EndDrawing();

}