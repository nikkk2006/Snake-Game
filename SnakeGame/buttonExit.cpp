#include "buttonExit.h"


buttonExit::buttonExit() : width(MyConstants::cellSize * 10), height(MyConstants::cellSize * 3), text("exit"), buttonPressed(false) {
	button = { static_cast<float>(MyConstants::cellSize * 10), static_cast<float>(MyConstants::cellSize * 20), static_cast<float>(width), static_cast<float>(height) };
}

void buttonExit::Draw(){
	DrawRectangleRounded(button, 0.5, 6, MyConstants::darkGreen);
	DrawText(text, button.x + 120, button.y + 30, 30, BLACK);
}
