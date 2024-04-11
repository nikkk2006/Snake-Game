#include "MainShopWindow.h"

MainShopWindow::MainShopWindow() : screenWidth(2 * C::offset + C::cellSize * C::cellCount),
screenHeight(2 * C::offset + C::cellSize * C::cellCount)
{
}

MainShopWindow::~MainShopWindow(){
	CloseWindow();
}

void MainShopWindow::Update(){
	
}

void MainShopWindow::Draw(){
	ClearBackground(MyConstants::green);

	DrawRectangleLinesEx(Rectangle{ static_cast<float>(5),
static_cast<float>(5),
static_cast<float>(screenWidth - 10),
static_cast<float>(screenHeight - 10) }, 4, C::darkGreen);
	DrawText("choose the skins", MyConstants::cellSize * 9, 10, 40, MyConstants::darkGreen);

	DrawText("Snake: ", MyConstants::cellSize * 2, MyConstants::cellSize * 8, 40, MyConstants::darkGreen);
	DrawText("Field: ", MyConstants::cellSize * 2, MyConstants::cellSize * 16, 40, MyConstants::darkGreen);
}
