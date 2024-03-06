#include "Food.h"
#include "Snake.h"
#include "Game.h"
#include "functions.h"
#include "mainWindow.h"
#include "mainMenu.h"


extern const Color green = { 173, 204, 96, 255 };
extern const Color darkGreen = { 43, 51, 24, 255 };
extern const Color red = { 191, 42, 57, 255 };

extern const int cellSize = 30;
extern const int cellCount = 25;
extern const int offset = 75;

extern double lastUpdateTime = 0.0;

extern const float speed = 0.15f;


int main() {

	mainMenu menu = mainMenu();

	while (menu.Update() && WindowShouldClose() == false) {
		BeginDrawing();

		// Updating
		menu.Update();

		// Drawing
		menu.Draw();

		EndDrawing();
	}


	return 0;
}