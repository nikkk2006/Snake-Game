#ifndef DIFFICULT_WINDOW_BUTTONS_H
#define DIFFICULT_WINDOW_BUTTONS_H


#include "raylib.h"
#include "constants.h"
#include "MainMenuButtons.h"


class ButtonEasyDifficult : public Button{
public:
	ButtonEasyDifficult(const char* text = "easy", const float x = 6, const float y = 3, const float width = 6, const float height = 3, const float textX = 50);
};

class ButtonMediumDifficult : public Button {
public:
	ButtonMediumDifficult(const char* text = "medium", const float x = 13, const float y = 3, const float width = 6, const float height = 3, const float textX = 40);
};

class ButtonHardDifficult : public Button{
public:
	ButtonHardDifficult(const char* text = "hard", const float x = 20, const float y = 3, const float width = 6, const float height = 3, const float textX = 50);
};

#endif // !DIFFICULT_WINDOW_BUTTONS_H

