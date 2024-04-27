#include "difficultWindowButtons.h"


// Button easy difficult
ButtonEasyDifficult::ButtonEasyDifficult() : width(MyConstants::cellSize * 6), height(MyConstants::cellSize * 3), text("easy"), buttonPressed(false) {
	button = { static_cast<float>(MyConstants::cellSize * 6), static_cast<float>(MyConstants::cellSize * 3), static_cast<float>(width), static_cast<float>(height) };
}

void ButtonEasyDifficult::Draw() {
	DrawRectangleRounded(button, 0.5, 6, MyConstants::buttonDarkBlack);
	DrawText(text, button.x + 40, button.y + 15, 30, MyConstants::textWhite);
}

// Button medium difficult
ButtonMediumDifficult::ButtonMediumDifficult() : width(MyConstants::cellSize * 6), height(MyConstants::cellSize * 3), text("medium"), buttonPressed(false) {
	button = { static_cast<float>(MyConstants::cellSize * 13), static_cast<float>(MyConstants::cellSize * 3), static_cast<float>(width), static_cast<float>(height) };
}

void ButtonMediumDifficult::Draw() {
	DrawRectangleRounded(button, 0.5, 6, MyConstants::buttonDarkBlack);
	DrawText(text, button.x + 30, button.y + 15, 30, MyConstants::textWhite);
}

// Button hard difficult
ButtonHardDifficult::ButtonHardDifficult() : width(MyConstants::cellSize * 6), height(MyConstants::cellSize * 3), text("hard"), buttonPressed(false) {
	button = { static_cast<float>(MyConstants::cellSize * 20), static_cast<float>(MyConstants::cellSize * 3), static_cast<float>(width), static_cast<float>(height) };
}

void ButtonHardDifficult::Draw() {
	DrawRectangleRounded(button, 0.5, 6, MyConstants::buttonDarkBlack);
	DrawText(text, button.x + 40, button.y + 15, 30, MyConstants::textWhite);
}
