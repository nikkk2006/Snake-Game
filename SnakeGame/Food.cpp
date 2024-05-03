#include "Food.h"


Color appleColor = MyConstants::red;

Food::Food(std::deque<Vector2> snakeBody) {
	position = generateRandomPos(snakeBody);
}

void Food::Draw(){

	Rectangle segment{ MyConstants::offset + position.x * MyConstants::cellSize, MyConstants::offset + position.y * MyConstants::cellSize, (float)MyConstants::cellSize, (float)MyConstants::cellSize };
	DrawRectangleRounded(segment, 0.5, 6, appleColor);
}

Vector2 Food::generateRandomPos(std::deque<Vector2>& snakeBody) {
	Vector2 position = generateRandomCell();

	std::transform(snakeBody.begin(), snakeBody.end(), snakeBody.begin(), [&](Vector2& vector) {
		if (Vector2Equals(vector, position)) {
			position = generateRandomCell();
		}

		return vector;
		});
	return position;
}



