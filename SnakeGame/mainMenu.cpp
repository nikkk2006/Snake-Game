#include "mainMenu.h"


mainMenu::mainMenu() : screenWidth(MyConstants::cellSize * 15), screenHeight(MyConstants::cellSize * 20), title("Main Menu") {
	InitWindow(screenWidth, screenHeight, title);
	SetTargetFPS(60);
}

mainMenu::~mainMenu(){
	CloseWindow();
}

bool mainMenu::Update(){
	// Button Start
	if (CheckCollisionPointRec(GetMousePosition(), buttonStart.button)) {
		if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
			buttonStart.buttonPressed = true;

			CloseWindow();
			startTheMainWinow();
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
	if (CheckCollisionPointRec(GetMousePosition(), buttonSettings.button)) {
		if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
			buttonSettings.buttonPressed = true;
			// TODO
		}
	}
	else {
		buttonSettings.buttonPressed = false;
	}

	// Button Exit
	if (CheckCollisionPointRec(GetMousePosition(), buttonExit.button)) {
		if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
			buttonExit.buttonPressed = true;
			return false;
		}
	}
	else {
		buttonExit.buttonPressed = false;
	}

	return true;
}

void mainMenu::Draw(){
	ClearBackground(MyConstants::green);
	DrawRectangleLinesEx(Rectangle{ static_cast<float>(5),
	static_cast<float>(5),
	static_cast<float>(screenWidth - 10),
	static_cast<float>(screenHeight - 10) }, 4, C::darkGreen);
	DrawText("Snake Game", MyConstants::cellSize * 4, 10, 40, MyConstants::darkGreen);
	buttonStart.Draw();
	buttonShop.Draw();
	buttonSettings.Draw();
	buttonExit.Draw();
}
