#ifndef FOOD_H
#define FOOD_H


#include "raylib.h"
#include <deque>
#include "functions.h"


extern const int cellSize;
extern const int cellCount;
extern const int offset;

extern const Color red;

class Food{
public:
	Vector2 position;

	Food(std::deque<Vector2> snakeBody);
	void Draw();
	Vector2 generateRandomPos(std::deque<Vector2>& snakeBody);
};

#endif // !FOOD_H



