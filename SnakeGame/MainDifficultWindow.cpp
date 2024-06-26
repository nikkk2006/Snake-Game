#include "startWindowsFunctions.h"


extern bool defaultWhiteTheme;

float snakeSpeed = SnakeSpeed::EASY;
extern GameStates gameState;


MainDifficultWindow::MainDifficultWindow() :
	screenWidth(2 * MyC::offset + MyC::cellSize * MyC::cellCount),
	screenHeight(2 * MyC::offset + MyC::cellSize * MyC::cellCount)
{}

MainDifficultWindow::~MainDifficultWindow(){
	CloseWindow();
}

bool MainDifficultWindow::IsButtonEasyPressed(){
	return CheckCollisionPointRec(GetMousePosition(), easyDifficult.button) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}

bool MainDifficultWindow::IsButtonMediumPressed() {
	return CheckCollisionPointRec(GetMousePosition(), mediumDifficult.button) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}

bool MainDifficultWindow::IsButtonHardPressed() {
	return CheckCollisionPointRec(GetMousePosition(), hardDifficult.button) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}

bool MainDifficultWindow::IsButtonBackPressed() {
	return CheckCollisionPointRec(GetMousePosition(), back.button) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}

void MainDifficultWindow::Draw(){
	ClearBackground((defaultWhiteTheme == true) ? MyC::antiFlashWhite : MyC::black);

	DrawRectangleLinesEx(Rectangle{ static_cast<float>(5),
static_cast<float>(5),
static_cast<float>(screenWidth - 10),
static_cast<float>(screenHeight - 10) }, 4, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
	DrawText("choose the difficult", MyConstants::cellSize * 9, 10, 40, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);

	easyDifficult.Draw();
	mediumDifficult.Draw();
	hardDifficult.Draw();
	back.Draw();
}
