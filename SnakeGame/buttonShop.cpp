#include "buttonShop.h"


buttonShop::buttonShop() : width(cellSize * 10), height(cellSize * 3), text("shop"), buttonPressed(false) {
	button = { static_cast<float>(cellSize * 2.5), static_cast<float>(cellSize * 7), static_cast<float>(width), static_cast<float>(height) };
}

void buttonShop::Draw(){
	DrawRectangleRec(button, buttonPressed ? WHITE : darkGreen);
	DrawText(text, button.x + 110, button.y + 30, 30, BLACK);
}
