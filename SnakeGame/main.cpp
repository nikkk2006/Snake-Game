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

	//InitWindow(cellSize * 15, cellSize * 20, "Menu");
	//Image icon = LoadImage("snakeIcon.png");;
	//SetWindowIcon(icon);
	//UnloadImage(icon);

	//buttonStartTheGame buttonStart = buttonStartTheGame();

	//while (WindowShouldClose() == false) {
	//	BeginDrawing();

	//	if (CheckCollisionPointRec(GetMousePosition(), buttonStart.button)) {
	//		if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
	//			buttonStart.buttonPressed = true;

	//			CloseWindow();
	//			break;
	//		}
	//	}
	//	else {
	//		buttonStart.buttonPressed = false;
	//	}

	//	ClearBackground(green);
	//	DrawText("Snake Game", cellSize * 4, 10, 40, darkGreen);
	//	buttonStart.Draw();


	//	EndDrawing();
	//}

	//InitWindow(2 * offset + cellSize * cellCount, 2 * offset + cellSize * cellCount, "Retro Snake");
	//SetTargetFPS(60);

	//Game game = Game();
	//mainWindow window = mainWindow();

	//while (WindowShouldClose() == false) {
	//	BeginDrawing();

	//	// Updating
	//	window.Update();

	//	// Drawing
	//	window.Draw();

	//	EndDrawing();
	//}
	//mainWindow window = mainWindow();
	mainMenu menu = mainMenu();

	while (WindowShouldClose() == false) {
		BeginDrawing();

		// Updating
		menu.Update();

		// Drawing
		menu.Draw();

		EndDrawing();
	}


	return 0;
}