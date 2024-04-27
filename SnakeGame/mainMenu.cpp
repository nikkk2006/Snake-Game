#include "startWindowsFunctions.h"


mainMenu::mainMenu() : screenWidth(2 * C::offset + C::cellSize * C::cellCount),
					   screenHeight(2 * C::offset + C::cellSize * C::cellCount),
					   title("SnakeGame")
{
	InitWindow(screenWidth, screenHeight, title);
}

mainMenu::~mainMenu(){
	CloseWindow();
}

void mainMenu::Draw(){

	BeginDrawing();
	ClearBackground(MyConstants::black);

	DrawRectangleLinesEx(Rectangle{ static_cast<float>(5),
static_cast<float>(5),
static_cast<float>(screenWidth - 10),
static_cast<float>(screenHeight - 10) }, 4, C::textYellow);
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
