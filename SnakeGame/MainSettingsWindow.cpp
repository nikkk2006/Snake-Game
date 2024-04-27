#include "MainSettingsWindow.h"


MainSettingsWindow::MainSettingsWindow() : 
	screenWidth(2 * C::offset + C::cellSize * C::cellCount),
	screenHeight(2 * C::offset + C::cellSize * C::cellCount)
{
}

MainSettingsWindow::~MainSettingsWindow(){
	CloseWindow();
}

void MainSettingsWindow::Draw(){
	ClearBackground(MyConstants::black);

	DrawRectangleLinesEx(Rectangle{ static_cast<float>(5),
static_cast<float>(5),
static_cast<float>(screenWidth - 10),
static_cast<float>(screenHeight - 10) }, 4, C::textYellow);

	DrawText("settings", MyConstants::cellSize * 12.5, 10, 40, MyConstants::textYellow);
}
