#include "MainThemeWindow.h"


MainThemeWindow::MainThemeWindow() :
	screenWidth(2 * MyC::offset + MyC::cellSize * MyC::cellCount),
	screenHeight(2 * MyC::offset + MyC::cellSize * MyC::cellCount)
{}

MainThemeWindow::~MainThemeWindow() {
	CloseWindow();
}

bool MainThemeWindow::IsButtonBackPressed() {
	return CheckCollisionPointRec(GetMousePosition(), back.button) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}

void MainThemeWindow::Draw() {
	ClearBackground(MyC::black);

	DrawRectangleLinesEx(Rectangle{ static_cast<float>(5),
static_cast<float>(5),
static_cast<float>(screenWidth - 10),
static_cast<float>(screenHeight - 10) }, 4, MyC::textYellow);

	back.Draw();
}
