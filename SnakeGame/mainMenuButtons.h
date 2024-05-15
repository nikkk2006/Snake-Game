#ifndef MAIN_MENU_BUTTONS_H
#define MAIN_MENU_BUTTONS_H


#include "raylib.h"
#include "constants.h"
namespace MyC = MyConstants;


class Button {
public:
	bool buttonPressed;
	const int width;
	const int height;
	const char* m_text;
	const float m_y;
	const float m_textX;
	Rectangle button;

	Button(const char* text , const float y, const float textX);   // y - Расположение кнопки на экране по y
	void Draw();
};

class buttonStartTheGame : public Button{
public:
	buttonStartTheGame(const char* text = "start the game", const float y = 8.0, const float textX = 35.0);
};

class buttonShop : public Button {
public:
	buttonShop(const char* text = "shop", const float y = 12.0, const float textX = 110.0);
};

class buttonSettings : public Button{
public:
	buttonSettings(const char* text = "settings", const float y = 16.0, const float textX = 90.0);
};

class buttonExit : public Button{
public:
	buttonExit(const char* text = "exit", const float y = 20.0, const float textX = 120.0);
};

#endif // !MAIN_MENU_BUTTONS_H

