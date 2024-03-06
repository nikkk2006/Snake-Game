#include "buttonExit.h"


buttonExit::buttonExit() : width(cellSize * 10), height(cellSize * 3), text("exit"), buttonPressed(false) {
	button = button = { static_cast<float>(cellSize * 2.5), static_cast<float>(cellSize * 15), static_cast<float>(width), static_cast<float>(height) };
}

void buttonExit::Draw(){
	DrawRectangleRec(button, buttonPressed ? WHITE : darkGreen);
	DrawText(text, button.x + 120, button.y + 30, 30, BLACK);
}
