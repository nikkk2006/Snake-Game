#include "MainControlsWindow.h"


MainControlsWindow::MainControlsWindow() :
	screenWidth(2 * MyC::offset + MyC::cellSize * MyC::cellCount),
	screenHeight(2 * MyC::offset + MyC::cellSize * MyC::cellCount)
{}

MainControlsWindow::~MainControlsWindow(){
	CloseWindow();
}

bool MainControlsWindow::IsButtonBackPressed(){
	return CheckCollisionPointRec(GetMousePosition(), back.button) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}

void MainControlsWindow::Draw(){

	ClearBackground(MyC::black);

	DrawRectangleLinesEx(Rectangle{ static_cast<float>(5),
static_cast<float>(5),
static_cast<float>(screenWidth - 10),
static_cast<float>(screenHeight - 10) }, 4, MyC::textYellow);
	DrawText("Controls", MyC::cellSize * 12, 10, 40, MyC::textYellow);
	DrawText("w, PgUp - moving up", MyC::cellSize * 2, 150, 40, MyC::textWhite);
	DrawText("s, PgDown - moving down", MyC::cellSize * 2, 200, 40, MyC::textWhite);
	DrawText("a, PgLeft - moving left", MyC::cellSize * 2, 250, 40, MyC::textWhite);
	DrawText("d, PgRight - moving right", MyC::cellSize * 2, 300, 40, MyC::textWhite);
	DrawText("Your goal is to collect as many apples as possible.", MyC::cellSize * 2, 500, 30, MyC::textWhite);
	DrawText("You should avoid hitting walls and yourself.", MyC::cellSize * 2, 550, 30, MyC::textWhite);
	DrawText("Good luck))", MyC::cellSize * 2, 600, 30, MyC::textWhite);

	back.Draw();
}
