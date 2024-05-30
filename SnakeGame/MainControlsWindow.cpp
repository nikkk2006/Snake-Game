#include "MainControlsWindow.h"


extern bool defaultWhiteTheme;

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

	ClearBackground((defaultWhiteTheme == true) ? MyC::antiFlashWhite : MyC::black);

	DrawRectangleLinesEx(Rectangle{ static_cast<float>(5),
static_cast<float>(5),
static_cast<float>(screenWidth - 10),
static_cast<float>(screenHeight - 10) }, 4, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
	DrawText("Controls", MyC::cellSize * 12, 10, 40, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
	DrawText("w, PgUp - moving up", MyC::cellSize * 2, 150, 40, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
	DrawText("s, PgDown - moving down", MyC::cellSize * 2, 200, 40, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
	DrawText("a, PgLeft - moving left", MyC::cellSize * 2, 250, 40, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
	DrawText("d, PgRight - moving right", MyC::cellSize * 2, 300, 40, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
	DrawText("Your goal is to collect as many apples as possible.", MyC::cellSize * 2, 500, 30, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
	DrawText("You should avoid hitting walls and yourself.", MyC::cellSize * 2, 550, 30, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
	DrawText("Good luck))", MyC::cellSize * 2, 600, 30, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);

	back.Draw();
}
