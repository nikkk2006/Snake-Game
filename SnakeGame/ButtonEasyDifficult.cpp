#include "ButtonEasyDifficult.h"


ButtonEasyDifficult::ButtonEasyDifficult() : width(MyConstants::cellSize * 6), height(MyConstants::cellSize * 3), text("easy"), buttonPressed(false) {
	button = { static_cast<float>(MyConstants::cellSize * 6), static_cast<float>(MyConstants::cellSize * 3), static_cast<float>(width), static_cast<float>(height) };
}

void ButtonEasyDifficult::Draw(){
	DrawRectangleRounded(button, 0.5, 6, MyConstants::darkGreen);
	DrawText(text, button.x + 40, button.y + 15, 30, BLACK);
}
