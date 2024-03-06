#include "buttonSettings.h"

buttonSettings::buttonSettings() : width(cellSize * 10), height(cellSize * 3), text("settings"), buttonPressed(false) {
	button = { static_cast<float>(cellSize * 2.5), static_cast<float>(cellSize * 11), static_cast<float>(width), static_cast<float>(height) };
}

void buttonSettings::Draw(){
	DrawRectangleRec(button, buttonPressed ? WHITE : darkGreen);
	DrawText(text, button.x + 90, button.y + 30, 30, BLACK);
}
