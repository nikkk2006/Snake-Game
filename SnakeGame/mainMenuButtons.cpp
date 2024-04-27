#include "mainMenuButtons.h"


Button::Button(const char* text, const float y, const float textX) :
	width(MyConstants::cellSize * 10),
	height(MyConstants::cellSize * 3),
	m_text(text),
	m_textX(textX),
	m_y(y),
	buttonPressed(false)
{
	button = { static_cast<float>(MyConstants::cellSize * 10), static_cast<float>(MyConstants::cellSize * m_y), static_cast<float>(width), static_cast<float>(height) };
}

void Button::Draw() {
	DrawRectangleRounded(button, 0.5, 6, MyConstants::buttonDarkBlack);
	DrawText(m_text, button.x + m_textX, button.y + 30, 30, C::textWhite);
}


buttonStartTheGame::buttonStartTheGame(const char* text, const float y, const float textX) : Button(text, y, textX) {}

buttonSettings::buttonSettings(const char* text, const float y, const float textX) : Button(text, y, textX) {}

buttonShop::buttonShop(const char* text, const float y, const float textX) : Button(text, y, textX) {}

buttonExit::buttonExit(const char* text, const float y, const float textX) : Button(text, y, textX) {}