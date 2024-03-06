#include "mainMenu.h"


mainMenu::mainMenu() : screenWidth(cellSize * 15), screenHeight(cellSize * 20), title("Main Menu") {
	InitWindow(screenWidth, screenHeight, title);
	SetTargetFPS(60);
}

mainMenu::~mainMenu(){
	CloseWindow();
}

void mainMenu::Update(){
	// Button Start
	if (CheckCollisionPointRec(GetMousePosition(), buttonStart.button)) {
		if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
			buttonStart.buttonPressed = true;
			// TODO
		}
	}
	else {
		buttonStart.buttonPressed = false;
	}

	// Button Shop
	if (CheckCollisionPointRec(GetMousePosition(), buttonShop.button)) {
		if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
			buttonShop.buttonPressed = true;
			// TODO
		}
	}
	else {
		buttonShop.buttonPressed = false;
	}

	// Button Settings
}

void mainMenu::Draw(){
	ClearBackground(green);
	DrawText("Snake Game", cellSize * 4, 10, 40, darkGreen);
	buttonStart.Draw();
	buttonShop.Draw();
}
