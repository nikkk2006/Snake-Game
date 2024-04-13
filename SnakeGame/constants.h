#ifndef CONSTANTS_H
#define CONSTANTS_H


#include "raylib.h"

namespace MyConstants {
	const Color red = { 191, 42, 57, 255 };
	const Color brown = { 51, 34, 24, 255 };

	// colors for snake
	const Color darkGreen = { 43, 51, 24, 255 };
	const Color black = { 29, 29, 31, 255 };
	const Color white = { 227, 227, 232, 255 };
	const Color gray = {122, 122, 122, 255};
	const Color pink = { 214, 122, 211, 255 };

	// colors for field
	const Color green = { 173, 204, 96, 255 };
	const Color fieldBlack = { 46, 46, 48, 255 };
	const Color fieldWhite = WHITE;
	const Color fieldGray = { 179, 179, 179, 255};
	const Color fieldPurple = { 129, 52, 207, 255};

	const int cellSize = 30;
	const int cellCount = 25;
	const int offset = 75;

	//radiobutton size
	const int size = 20;
}

#endif // !CONSTANTS_H

