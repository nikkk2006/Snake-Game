#include "startWindowsFunctions.h"


int main() {

	InitWindow(2 * MyC::offset + MyC::cellSize * MyC::cellCount, 2 * MyC::offset + MyC::cellSize * MyC::cellCount, "SnakeGame");
	SetTargetFPS(60);
	startTheMainLoop();

	return 0;
}