#include "buttonStartTheGame.h"


buttonStartTheGame::buttonStartTheGame() : width(MyConstants::cellSize * 10), height(MyConstants::cellSize * 3), text("start the game"), buttonPressed(false){
	button = { static_cast<float>(MyConstants::cellSize * 10), static_cast<float>(MyConstants::cellSize * 8), static_cast<float>(width), static_cast<float>(height) };
}

void buttonStartTheGame::Draw(){
	DrawRectangleRounded(button, 0.5, 6, MyConstants::darkGreen);
	DrawText(text, button.x + 35, button.y + 30, 30, BLACK);
}
