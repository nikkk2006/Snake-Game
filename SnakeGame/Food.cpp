#include "Food.h"


Food::Food(std::deque<Vector2> snakeBody) {
	position = generateRandomPos(snakeBody);
}

void Food::Draw(){

	Rectangle segment{ offset + position.x * cellSize, offset + position.y * cellSize, (float)cellSize, (float)cellSize };
	DrawRectangleRounded(segment, 0.5, 6, red);
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



