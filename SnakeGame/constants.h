#ifndef CONSTANTS_H
#define CONSTANTS_H


#include "raylib.h"

namespace MyConstants {
	const Color red = { 191, 42, 57, 255 };

	// colors for snake
	const Color darkGreen = { 43, 51, 24, 255 };
	const Color black = { 29, 29, 31, 255 };
	const Color white = { 227, 227, 232, 255 };
	const Color gray = {122, 122, 122, 255};
	const Color darkOlive = { 200, 195, 179, 255 };

	// colors for field
	const Color green = { 173, 204, 96, 255 };
	const Color fieldBlack = { 50, 52, 55, 255 };
	const Color fieldGray = { 179, 179, 179, 255};
	const Color fieldOlive = { 218, 211, 193, 255 };

	// color for text
	const Color textYellow = { 226, 183, 20, 255 };
	const Color textWhite = { 209, 208, 197, 255 };

	// color for button
	const Color buttonDarkBlack = { 44, 46, 49, 255 };
	const Color buttonPressedColor = { 36, 36, 36, 255 };

	const int cellSize = 30;
	const int cellCount = 25;
	const int offset = 75;

	//radiobutton size
	const int size = 20;
}

#endif // !CONSTANTS_H

