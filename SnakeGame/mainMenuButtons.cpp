#include "mainMenuButtons.h"


Button::Button(const char* text, const float x, const float y, const float textX) :
	width(MyConstants::cellSize * 10),
	height(MyConstants::cellSize * 3),
	m_text(text),
	m_textX(textX),
	m_x(x),
	m_y(y),
	buttonPressed(false)
{
	button = { static_cast<float>(MyConstants::cellSize * m_x), static_cast<float>(MyConstants::cellSize * m_y), static_cast<float>(width), static_cast<float>(height) };
}

void Button::Draw() {
	if (CheckCollisionPointRec(GetMousePosition(), button)) {
		DrawRectangleRounded(button, 0.5, 6, MyConstants::buttonDarkBlack);
	}
	else {
		DrawRectangleRounded(button, 0.5, 6, MyConstants::buttonPressedColor);
	}
	DrawText(m_text, button.x + m_textX, button.y + 30, 30, MyConstants::textWhite);
}


buttonStartTheGame::buttonStartTheGame(const char* text, const float x, const float y, const float textX) : Button(text, x, y, textX) {}

buttonSettings::buttonSettings(const char* text, const float x, const float y, const float textX) : Button(text, x, y, textX) {}

buttonShop::buttonShop(const char* text, const float x, const float y, const float textX) : Button(text, x, y, textX) {}

buttonExit::buttonExit(const char* text, const float x, const float y, const float textX) : Button(text, x, y, textX) {}