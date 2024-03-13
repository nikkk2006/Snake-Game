#include "ButtonBack.h"


ButtonBack::ButtonBack() : width(MyConstants::cellSize * 5), height(MyConstants::cellSize * 2), text("back"), buttonPressed(false) {
	button = { static_cast<float>(MyConstants::cellSize * 8), static_cast<float>(MyConstants::cellSize * 6), static_cast<float>(width), static_cast<float>(height) };
}

void ButtonBack::Draw(){
	DrawRectangleRounded(button, 0.5, 6, MyConstants::darkGreen);
	DrawText(text, button.x + 40, button.y + 15, 30, BLACK);
}
