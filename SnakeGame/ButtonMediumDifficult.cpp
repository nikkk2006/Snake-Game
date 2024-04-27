#include "difficultWindowButtons.h"

ButtonMediumDifficult::ButtonMediumDifficult() : width(MyConstants::cellSize * 6), height(MyConstants::cellSize * 3), text("medium"), buttonPressed(false){
	button = { static_cast<float>(MyConstants::cellSize * 13), static_cast<float>(MyConstants::cellSize * 3), static_cast<float>(width), static_cast<float>(height) };
}

void ButtonMediumDifficult::Draw(){
	DrawRectangleRounded(button, 0.5, 6, MyConstants::buttonDarkBlack);
	DrawText(text, button.x + 30, button.y + 15, 30, MyConstants::textWhite);
}
