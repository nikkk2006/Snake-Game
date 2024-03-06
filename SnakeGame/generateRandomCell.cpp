#include "functions.h"


Vector2 generateRandomCell() {
	float x = GetRandomValue(0, MyConstants::cellCount - 1);
	float y = GetRandomValue(0, MyConstants::cellCount - 1);

	return Vector2{ x, y };
}