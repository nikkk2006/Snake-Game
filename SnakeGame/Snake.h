#ifndef SNAKE_H
#define SNAKE_H


#include "raylib.h"
#include "raymath.h"
#include <deque>


extern const Color darkGreen;
extern const int cellSize;
extern const int offset;

class Snake{
public:
	Vector2 direction = { 1, 0 };
	std::deque<Vector2> body = { Vector2{6, 9}, Vector2{5, 9}, Vector2{4, 9} };
	bool addSegment = false;

	void Draw();
	void Update();
	void Reset();
};

#endif // !SNAKE_H



