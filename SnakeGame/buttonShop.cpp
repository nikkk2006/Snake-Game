#include "buttonShop.h"


buttonShop::buttonShop() : width(MyConstants::cellSize * 10), height(MyConstants::cellSize * 3), text("shop"), buttonPressed(false) {
	button = { static_cast<float>(MyConstants::cellSize * 2.5), static_cast<float>(MyConstants::cellSize * 7), static_cast<float>(width), static_cast<float>(height) };
}

void buttonShop::Draw(){
	DrawRectangleRounded(button, 0.5, 6, MyConstants::darkGreen);
	DrawText(text, button.x + 110, button.y + 30, 30, BLACK);
}
