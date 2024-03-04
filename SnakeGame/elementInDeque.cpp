#include "functions.h"


bool elementInDeque(Vector2& element, std::deque<Vector2> deque) {

	auto iterator = deque.begin();
	while (iterator != deque.end()) {
		if (Vector2Equals(*iterator, element)) {
			return true;
		}
		iterator++;
	}
	return false;
}