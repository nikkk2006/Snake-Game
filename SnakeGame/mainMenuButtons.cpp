#include "mainMenuButtons.h"


Button::Button(const char* text, const float x, const float y, const float width, const float height, const float textX) :
	m_width(MyConstants::cellSize * width),
	m_height(MyConstants::cellSize * height),
	m_text(text),
	m_textX(textX),
	m_x(x),
	m_y(y)
{
	button = { static_cast<float>(MyConstants::cellSize * m_x), static_cast<float>(MyConstants::cellSize * m_y), static_cast<float>(m_width), static_cast<float>(m_height) };
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


buttonStartTheGame::buttonStartTheGame(const char* text, const float x, const float y, const float width, const float height, const float textX) : Button(text, x, y, width, height, textX) {}

buttonSettings::buttonSettings(const char* text, const float x, const float y, const float width, const float height, const float textX) : Button(text, x, y, width, height, textX) {}

buttonShop::buttonShop(const char* text, const float x, const float y, const float width, const float height, const float textX) : Button(text, x, y, width, height, textX) {}

buttonExit::buttonExit(const char* text, const float x, const float y, const float width, const float height, const float textX) : Button(text, x, y, width, height, textX) {}

buttonBack::buttonBack(const char* text, const float x, const float y, const float width, const float height, const float textX) : Button(text, x, y, width, height, textX) {}

buttonStartTheMenu::buttonStartTheMenu(const char* text, const float x, const float y, const float width, const float height, const float textX) : Button(text, x, y, width, height, textX) {}

buttonControls::buttonControls(const char* text, const float x, const float y, const float width, const float height, const float textX) : Button(text, x, y, width, height, textX) {}
