#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H


#include <string>
#include "raylib.h"
#include "Game.h"


extern const int cellSize;
extern const int cellCount;
extern const int offset;
extern const float speed;

extern const Color green;
extern const Color darkGreen;
extern const Color red;

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



