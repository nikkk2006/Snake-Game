#include "functions.h"


bool elementInDeque(Vector2& element, std::deque<Vector2> deque) {

	for (auto iterator = deque.begin(); iterator != deque.end(); iterator++) {
		if (Vector2Equals(*iterator, element)) {
			return true;
		}
	}
	return false;
}