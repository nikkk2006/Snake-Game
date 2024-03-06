#include "buttonSettings.h"

buttonSettings::buttonSettings() : width(MyConstants::cellSize * 10), height(MyConstants::cellSize * 3), text("settings"), buttonPressed(false) {
	button = { static_cast<float>(MyConstants::cellSize * 2.5), static_cast<float>(MyConstants::cellSize * 11), static_cast<float>(width), static_cast<float>(height) };
}

void buttonSettings::Draw(){
	DrawRectangleRec(button, buttonPressed ? WHITE : MyConstants::darkGreen);
	DrawText(text, button.x + 90, button.y + 30, 30, BLACK);
}
