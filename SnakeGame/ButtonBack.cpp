#include "difficultWindowButtons.h"


ButtonBack::ButtonBack() : width(MyConstants::cellSize * 6), height(MyConstants::cellSize * 3), text("back"), buttonPressed(false) {
	button = { static_cast<float>(MyConstants::cellSize * 13), static_cast<float>(MyConstants::cellSize * 24), static_cast<float>(width), static_cast<float>(height) };
}

void ButtonBack::Draw(){
	DrawRectangleRounded(button, 0.5, 6, MyConstants::darkGreen);
	DrawText(text, button.x + 40, button.y + 15, 30, BLACK);
}
