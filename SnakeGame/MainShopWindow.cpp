#include "MainShopWindow.h"

MainShopWindow::MainShopWindow() :
	screenWidth(2 * C::offset + C::cellSize * C::cellCount),
	screenHeight(2 * C::offset + C::cellSize * C::cellCount),

	snakeDarkGreenRadioButton{true},
	snakeBlackRadioButton{false},
	snakeWhiteRadioButton{false},
	snakeGrayRadioButton{false},
	snakePinkRadioButton{false},

	fieldGreenRadioButton{true},
	fieldBlackRadioButton{false},
	fieldWhiteRadioButton{false},
	fieldGrayRadioButton{false},
	fieldPurpleRadioButton{false}
{
}

MainShopWindow::~MainShopWindow(){
	CloseWindow();
}

void MainShopWindow::Update(){
	// radioButtons press check

	if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {

		// snakeDarkGreenRadioButton check
		if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 5, C::cellSize * 13, C::size, C::size })) {
			snakeDarkGreenRadioButton = true;
			snakeBlackRadioButton = false;
			snakeWhiteRadioButton = false;
			snakeGrayRadioButton = false;
			snakePinkRadioButton = false;
		}
		// snakeBlackRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 10, C::cellSize * 13, C::size, C::size })) {
			snakeBlackRadioButton = true;
			snakeDarkGreenRadioButton = false;
			snakeWhiteRadioButton = false;
			snakeGrayRadioButton = false;
			snakePinkRadioButton = false;
		}
		// snakeWhiteRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 15, C::cellSize * 13, C::size, C::size })) {
			snakeWhiteRadioButton = true;
			snakeBlackRadioButton = false;
			snakeDarkGreenRadioButton = false;
			snakeGrayRadioButton = false;
			snakePinkRadioButton = false;
		}
		// snakeGrayRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 20, C::cellSize * 13, C::size, C::size })) {
			snakeGrayRadioButton = true;
			snakeWhiteRadioButton = false;
			snakeBlackRadioButton = false;
			snakeDarkGreenRadioButton = false;
			snakePinkRadioButton = false;
		}
		// snakePinkRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 25, C::cellSize * 13, C::size, C::size })) {
			snakePinkRadioButton = true;
			snakeGrayRadioButton = false;
			snakeWhiteRadioButton = false;
			snakeBlackRadioButton = false;
			snakeDarkGreenRadioButton = false;
		}
		// fieldGreenRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 5, C::cellSize * 21, C::size, C::size })) {
			fieldGreenRadioButton = true;
			fieldBlackRadioButton = false;
			fieldWhiteRadioButton = false;
			fieldGrayRadioButton = false;
			fieldPurpleRadioButton = false;
		}
		// fieldBlackRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 10, C::cellSize * 21, C::size, C::size })) {
			fieldBlackRadioButton = true;
			fieldGreenRadioButton = false;
			fieldWhiteRadioButton = false;
			fieldGrayRadioButton = false;
			fieldPurpleRadioButton = false;
		}
		// fieldWhiteRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 15, C::cellSize * 21, C::size, C::size })) {
			fieldWhiteRadioButton = true;
			fieldBlackRadioButton = false;
			fieldGreenRadioButton = false;
			fieldGrayRadioButton = false;
			fieldPurpleRadioButton = false;
		}
		// fieldGrayRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 20, C::cellSize * 21, C::size, C::size })) {
			fieldGrayRadioButton = true;
			fieldWhiteRadioButton = false;
			fieldBlackRadioButton = false;
			fieldGreenRadioButton = false;
			fieldPurpleRadioButton = false;
		}
		// fieldPurpleRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 25, C::cellSize * 21, C::size, C::size })) {
			fieldPurpleRadioButton = true;
			fieldGrayRadioButton = false;
			fieldWhiteRadioButton = false;
			fieldBlackRadioButton = false;
			fieldGreenRadioButton = false;
		}
	}
}

void MainShopWindow::Draw(){
	ClearBackground(MyConstants::green);

	DrawRectangleLinesEx(Rectangle{ static_cast<float>(5),
static_cast<float>(5),
static_cast<float>(screenWidth - 10),
static_cast<float>(screenHeight - 10) }, 4, C::darkGreen);
	DrawText("choose the skins", MyConstants::cellSize * 9, 10, 40, MyConstants::darkGreen);

	DrawText("Snake: ", MyConstants::cellSize * 2, MyConstants::cellSize * 8, 40, MyConstants::darkGreen);
	DrawText("Field: ", MyConstants::cellSize * 2, MyConstants::cellSize * 16, 40, MyConstants::darkGreen);

	// Drawing snake color radiobuttons
	DrawRectangle(C::cellSize * 5, C::cellSize * 13, C::size, C::size, snakeDarkGreenRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 4.3, C::cellSize * 10, C::size * 3, C::size * 3, C::darkGreen);

	DrawRectangle(C::cellSize * 10, C::cellSize * 13, C::size, C::size, snakeBlackRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 9.3, C::cellSize * 10, C::size * 3, C::size * 3, C::black);

	DrawRectangle(C::cellSize * 15, C::cellSize * 13, C::size, C::size, snakeWhiteRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 14.3, C::cellSize * 10, C::size * 3, C::size * 3, C::white);

	DrawRectangle(C::cellSize * 20, C::cellSize * 13, C::size, C::size, snakeGrayRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 19.3, C::cellSize * 10, C::size * 3, C::size * 3, C::gray);

	DrawRectangle(C::cellSize * 25, C::cellSize * 13, C::size, C::size, snakePinkRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 24.3, C::cellSize * 10, C::size * 3, C::size * 3, C::pink);

	// Drawing field color radiobuttons
	DrawRectangle(C::cellSize * 5, C::cellSize * 21, C::size, C::size, fieldGreenRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 4.3, C::cellSize * 18, C::size * 3, C::size * 3, C::green);

	DrawRectangle(C::cellSize * 10, C::cellSize * 21, C::size, C::size, fieldBlackRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 9.3, C::cellSize * 18, C::size * 3, C::size * 3, C::fieldBlack);

	DrawRectangle(C::cellSize * 15, C::cellSize * 21, C::size, C::size, fieldWhiteRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 14.3, C::cellSize * 18, C::size * 3, C::size * 3, C::fieldWhite);

	DrawRectangle(C::cellSize * 20, C::cellSize * 21, C::size, C::size, fieldGrayRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 19.3, C::cellSize * 18, C::size * 3, C::size * 3, C::fieldGray);

	DrawRectangle(C::cellSize * 25, C::cellSize * 21, C::size, C::size, fieldPurpleRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 24.3, C::cellSize * 18, C::size * 3, C::size * 3, C::fieldPurple);

	// Drawing line around colors
	float x = 4.3;
	for (int i = 0; i < 5; i++) {
		DrawRectangleLinesEx(Rectangle{ C::cellSize * x, C::cellSize * 10, C::size * 3, C::size * 3 }, 4, C::brown);
		x += 5;
	}
	x = 4.3;

	for (int i = 0; i < 5; i++) {
		DrawRectangleLinesEx(Rectangle{ C::cellSize * x, C::cellSize * 18, C::size * 3, C::size * 3 }, 4, C::brown);
		x += 5;
	}
}
