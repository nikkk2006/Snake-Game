#include "startWindowsFunctions.h"


float snakeSpeed = SnakeSpeed::EASY;

MainDifficultWindow::MainDifficultWindow() : screenWidth(2 * C::offset + C::cellSize * C::cellCount),
											 screenHeight(2 * C::offset + C::cellSize * C::cellCount)
{
}

MainDifficultWindow::~MainDifficultWindow(){
	CloseWindow();
}

bool MainDifficultWindow::Update(){

	// Button easy difficult
	if (CheckCollisionPointRec(GetMousePosition(), easyDifficult.button)) {
		if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
			snakeSpeed = SnakeSpeed::EASY;
			easyDifficult.buttonPressed = true;

			CloseWindow();
			startTheMainWinow();
			return false;
		}
	}
	else {
		easyDifficult.buttonPressed = false;
	}

	// Button medium difficult
	if (CheckCollisionPointRec(GetMousePosition(), mediumDifficult.button)) {
		if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
			snakeSpeed = SnakeSpeed::MEDIUM;
			mediumDifficult.buttonPressed = true;

			CloseWindow();
			startTheMainWinow();
			return false;
		}
	}
	else {
		mediumDifficult.buttonPressed = false;
	}

	if (CheckCollisionPointRec(GetMousePosition(), hardDifficult.button)) {
		if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
			snakeSpeed = SnakeSpeed::HARD;
			hardDifficult.buttonPressed = true;

			CloseWindow();
			startTheMainWinow();
			return false;
		}
	}
	else {
		hardDifficult.buttonPressed = false;
	}
	return true;
}

void MainDifficultWindow::Draw(){
	ClearBackground(MyConstants::green);

	DrawRectangleLinesEx(Rectangle{ static_cast<float>(5),
static_cast<float>(5),
static_cast<float>(screenWidth - 10),
static_cast<float>(screenHeight - 10) }, 4, C::darkGreen);
	DrawText("choose the difficult", MyConstants::cellSize * 9, 10, 40, MyConstants::darkGreen);

	easyDifficult.Draw();
	mediumDifficult.Draw();
	hardDifficult.Draw();
	buttonBack.Draw();
}
