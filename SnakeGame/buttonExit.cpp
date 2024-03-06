#include "buttonExit.h"


buttonExit::buttonExit() : width(MyConstants::cellSize * 10), height(MyConstants::cellSize * 3), text("exit"), buttonPressed(false) {
	button = button = { static_cast<float>(MyConstants::cellSize * 2.5), static_cast<float>(MyConstants::cellSize * 15), static_cast<float>(width), static_cast<float>(height) };
}

void buttonExit::Draw(){
	DrawRectangleRec(button, buttonPressed ? WHITE : MyConstants::darkGreen);
	DrawText(text, button.x + 120, button.y + 30, 30, BLACK);
}
