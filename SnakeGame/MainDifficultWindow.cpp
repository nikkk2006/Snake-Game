#include "MainDifficultWindow.h"


float snakeSpeed = SnakeSpeed::EASY;

MainDifficultWindow::MainDifficultWindow() : screenWidth(MyConstants::cellSize * 20), screenHeight(MyConstants::cellSize * 10), title("Difficult Menu") {
	InitWindow(screenWidth, screenHeight, title);
	SetTargetFPS(60);
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
	DrawText("choose the difficult", MyConstants::cellSize * 3.5, 10, 40, MyConstants::darkGreen);

	easyDifficult.Draw();
	mediumDifficult.Draw();
	hardDifficult.Draw();
	buttonBack.Draw();
}
