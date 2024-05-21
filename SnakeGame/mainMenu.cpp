#include "startWindowsFunctions.h"


mainMenu::mainMenu() :
	screenWidth(2 * MyC::offset + MyC::cellSize * MyC::cellCount),
    screenHeight(2 * MyC::offset + MyC::cellSize * MyC::cellCount)
{}

mainMenu::~mainMenu(){
	CloseWindow();
}

void mainMenu::Draw(){

	BeginDrawing();
	ClearBackground(MyC::black);

	DrawRectangleLinesEx(Rectangle{ static_cast<float>(5),
static_cast<float>(5),
static_cast<float>(screenWidth - 10),
static_cast<float>(screenHeight - 10) }, 4, MyC::textYellow);
	DrawText("Snake Game", MyConstants::cellSize * 11, 10, 40, MyConstants::textYellow);
	buttonStart.Draw();
	buttonShop.Draw();
	buttonSettings.Draw();
	buttonExit.Draw();

	EndDrawing();
}

bool mainMenu::IsStartButtonPressed(){
	return CheckCollisionPointRec(GetMousePosition(), buttonStart.button) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}

bool mainMenu::IsStartShopButtonPressed(){
	return CheckCollisionPointRec(GetMousePosition(), buttonShop.button) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}

bool mainMenu::IsStartSettingsButtonPressed(){
	return CheckCollisionPointRec(GetMousePosition(), buttonSettings.button) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}

bool mainMenu::IsStartExitButtonPressed(){
	return CheckCollisionPointRec(GetMousePosition(), buttonExit.button) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}
