#include "MainDifficultWindow.h"


MainDifficultWindow::MainDifficultWindow() : screenWidth(MyConstants::cellSize * 20), screenHeight(MyConstants::cellSize * 10), title("Difficult Menu") {
	InitWindow(screenWidth, screenHeight, title);
	SetTargetFPS(60);
}

MainDifficultWindow::~MainDifficultWindow(){
	CloseWindow();
}

void MainDifficultWindow::Update(){

}

void MainDifficultWindow::Draw(){
	ClearBackground(MyConstants::green);
	DrawText("choose the difficult", MyConstants::cellSize * 3.5, 10, 40, MyConstants::darkGreen);
}
