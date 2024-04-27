#include "Snake.h"


Color snakeColor = MyConstants::textWhite;

void Snake::Draw(){

	for (auto iterator = body.begin(); iterator != body.end(); iterator++) {
		float x = iterator->x;
		float y = iterator->y;

		Rectangle segment{ MyConstants::offset + x * MyConstants::cellSize, MyConstants::offset + y * MyConstants::cellSize, (float)MyConstants::cellSize, (float)MyConstants::cellSize };
		DrawRectangleRounded(segment, 0.5, 6, snakeColor);   // change the color of the snake
	}
}

void Snake::Update(){

	body.push_front(Vector2Add(body[0], direction));
	if (addSegment) {		
		addSegment = false;
	}
	else {
		body.pop_back();
	}

}

void Snake::Reset(){

	body = { Vector2{6, 9}, Vector2{5, 9}, Vector2{4, 9} };
	direction = { 1, 0 };
}
