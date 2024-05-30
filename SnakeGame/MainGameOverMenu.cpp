#include "MainGameOverMenu.h"


extern bool defaultWhiteTheme;

MainGameOverMenu::MainGameOverMenu() :
	screenWidth(2 * MyConstants::offset + MyConstants::cellSize * MyConstants::cellCount),
	screenHeight(2 * MyConstants::offset + MyConstants::cellSize * MyConstants::cellCount)
{
}

MainGameOverMenu::~MainGameOverMenu(){
	CloseWindow();
}

void MainGameOverMenu::Draw(){
	BeginDrawing();
	ClearBackground(defaultWhiteTheme ? MyC::antiFlashWhite : MyC::black);

	DrawRectangleLinesEx(Rectangle{ static_cast<float>(5),
static_cast<float>(5),
static_cast<float>(screenWidth - 10),
static_cast<float>(screenHeight - 10) }, 4, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
	DrawText("Game Over", MyConstants::cellSize * 11, 10, 40, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);

	// Drawing Buttons
	buttonStart.Draw();
	buttonMenu.Draw();
}

bool MainGameOverMenu::IsRestartButtonPressed(){
	return CheckCollisionPointRec(GetMousePosition(), buttonStart.button) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}

bool MainGameOverMenu::IsMenuButtonPressed(){
	return CheckCollisionPointRec(GetMousePosition(), buttonMenu.button) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}
