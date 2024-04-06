#include "ButtonHardDifficult.h"


ButtonHardDifficult::ButtonHardDifficult() : width(MyConstants::cellSize * 6), height(MyConstants::cellSize * 3), text("hard"), buttonPressed(false){
	button = { static_cast<float>(MyConstants::cellSize * 20), static_cast<float>(MyConstants::cellSize * 3), static_cast<float>(width), static_cast<float>(height) };
}

void ButtonHardDifficult::Draw(){
	DrawRectangleRounded(button, 0.5, 6, MyConstants::darkGreen);
	DrawText(text, button.x + 40, button.y + 15, 30, BLACK);
}
