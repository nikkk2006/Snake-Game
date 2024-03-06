#ifndef FOOD_H
#define FOOD_H


#include "raylib.h"
#include <deque>
#include "functions.h"
#include "constants.h"
#include <algorithm>


class Food{
public:
	Vector2 position;

	Food(std::deque<Vector2> snakeBody);
	void Draw();
	Vector2 generateRandomPos(std::deque<Vector2>& snakeBody);
};

#endif // !FOOD_H



