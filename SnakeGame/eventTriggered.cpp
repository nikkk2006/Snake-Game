#include "functions.h"


bool eventTriggered(double interval) {
	double currentTime = GetTime();

	if (currentTime - lastUpdateTime >= interval) {
		lastUpdateTime = currentTime;
		return true;
	}
	return false;
}
