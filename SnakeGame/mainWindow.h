#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H


#include <string>
#include "raylib.h"
#include "Game.h"
#include "constants.h"
namespace MyC = MyConstants;

extern float snakeSpeed;

class mainWindow{
public:
	int screenWidth;
	int screenHeight;
	const char* title;

	Game game;

	mainWindow();
	~mainWindow();
	void Update();
	void Draw();
};

#endif // !MAIN_WINDOW_H



