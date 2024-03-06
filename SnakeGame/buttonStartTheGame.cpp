#include "buttonStartTheGame.h"


buttonStartTheGame::buttonStartTheGame() : width(MyConstants::cellSize * 10), height(MyConstants::cellSize * 3), text("start the game"), buttonPressed(false){
	button = { static_cast<float>(MyConstants::cellSize * 2.5), static_cast<float>(MyConstants::cellSize * 3), static_cast<float>(width), static_cast<float>(height) };
}

void buttonStartTheGame::Draw(){
	DrawRectangleRec(button, buttonPressed ? WHITE : MyConstants::darkGreen);
	DrawText(text, button.x + 35, button.y + 30, 30, BLACK);
}
