#include "MainShopWindow.h"


extern Color snakeColor;
extern Color fieldColor;
extern Color borderColor;
extern Color appleColor;


MainShopWindow::MainShopWindow() :
	screenWidth(2 * C::offset + C::cellSize * C::cellCount),
	screenHeight(2 * C::offset + C::cellSize * C::cellCount),

	// Initialization of snake's radiobuttons
	snakeDarkGreenRadioButton{false},
	snakeBlackRadioButton{false},
	snakeWhiteRadioButton{true},
	snakeGrayRadioButton{false},
	snakeDarkOliveRadioButton{false},

	// Initialization of field's radiobuttons
	fieldGreenRadioButton{false},
	fieldBlackRadioButton{true},
	fieldWhiteRadioButton{false},
	fieldGrayRadioButton{false},
	fieldOliveRadioButton{false},

	// Initialization of apple's radiobuttons
	appleRedRadioButton{true},
	appleBlackRadioButton{false},
	appleWhiteRadioButton{false},
	appleGrayRadioButton{false},
	appleDarkOliveRadioButton{false}
{}

MainShopWindow::~MainShopWindow(){
	CloseWindow();
}

int MainShopWindow::Update(){
	// radioButtons press check

	if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {

		// snakeDarkGreenRadioButton check
		if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 5, C::cellSize * 9, C::size, C::size })) {
			snakeDarkGreenRadioButton = true;
			snakeBlackRadioButton = false;
			snakeWhiteRadioButton = false;
			snakeGrayRadioButton = false;
			snakeDarkOliveRadioButton = false;
			snakeColor = C::darkGreen;
		}
		// snakeBlackRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 10, C::cellSize * 9, C::size, C::size })) {
			snakeBlackRadioButton = true;
			snakeDarkGreenRadioButton = false;
			snakeWhiteRadioButton = false;
			snakeGrayRadioButton = false;
			snakeDarkOliveRadioButton = false;
			snakeColor = C::black;
		}
		// snakeWhiteRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 15, C::cellSize * 9, C::size, C::size })) {
			snakeWhiteRadioButton = true;
			snakeBlackRadioButton = false;
			snakeDarkGreenRadioButton = false;
			snakeGrayRadioButton = false;
			snakeDarkOliveRadioButton = false;
			snakeColor = C::white;
		}
		// snakeGrayRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 20, C::cellSize * 9, C::size, C::size })) {
			snakeGrayRadioButton = true;
			snakeWhiteRadioButton = false;
			snakeBlackRadioButton = false;
			snakeDarkGreenRadioButton = false;
			snakeDarkOliveRadioButton = false;
			snakeColor = C::gray;
		}
		// snakeDarkOliveRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 25, C::cellSize * 9, C::size, C::size })) {
			snakeDarkOliveRadioButton = true;
			snakeGrayRadioButton = false;
			snakeWhiteRadioButton = false;
			snakeBlackRadioButton = false;
			snakeDarkGreenRadioButton = false;
			snakeColor = C::darkOlive;
		}

		// fieldGreenRadioButton check
		if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 5, C::cellSize * 15, C::size, C::size })) {
			fieldGreenRadioButton = true;
			fieldBlackRadioButton = false;
			fieldWhiteRadioButton = false;
			fieldGrayRadioButton = false;
			fieldOliveRadioButton = false;
			fieldColor = C::green;
			borderColor = C::darkGreen;
		}
		// fieldBlackRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 10, C::cellSize * 15, C::size, C::size })) {
			fieldBlackRadioButton = true;
			fieldGreenRadioButton = false;
			fieldWhiteRadioButton = false;
			fieldGrayRadioButton = false;
			fieldOliveRadioButton = false;
			fieldColor = C::fieldBlack;
		}
		// fieldWhiteRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 15, C::cellSize * 15, C::size, C::size })) {
			fieldWhiteRadioButton = true;
			fieldBlackRadioButton = false;
			fieldGreenRadioButton = false;
			fieldGrayRadioButton = false;
			fieldOliveRadioButton = false;
			fieldColor = C::textWhite;
			borderColor = C::black;
		}
		// fieldGrayRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 20, C::cellSize * 15, C::size, C::size })) {
			fieldGrayRadioButton = true;
			fieldWhiteRadioButton = false;
			fieldBlackRadioButton = false;
			fieldGreenRadioButton = false;
			fieldOliveRadioButton = false;
			fieldColor = C::fieldGray;
			borderColor = C::black;
		}
		// fieldOliveRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 25, C::cellSize * 15, C::size, C::size })) {
			fieldOliveRadioButton = true;
			fieldGrayRadioButton = false;
			fieldWhiteRadioButton = false;
			fieldBlackRadioButton = false;
			fieldGreenRadioButton = false;
			fieldColor = C::fieldOlive;
			borderColor = C::buttonDarkBlack;
		}

		// appleRedRadioButton check
		if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 5, C::cellSize * 21, C::size, C::size })) {
			appleRedRadioButton = true;
			appleBlackRadioButton = false;
			appleWhiteRadioButton = false;
			appleGrayRadioButton = false;
			appleDarkOliveRadioButton = false;
			appleColor = C::red;
		}
		// appleBlackRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 10, C::cellSize * 21, C::size, C::size })) {
			appleBlackRadioButton = true;
			appleRedRadioButton = false;
			appleWhiteRadioButton = false;
			appleGrayRadioButton = false;
			appleDarkOliveRadioButton = false;
			appleColor = C::black;
		}
		// appleWhiteRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 15, C::cellSize * 21, C::size, C::size })) {
			appleWhiteRadioButton = true;
			appleBlackRadioButton = false;
			appleRedRadioButton = false;
			appleGrayRadioButton = false;
			appleDarkOliveRadioButton = false;
			appleColor = C::white;
		}
		// appleGrayRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 20, C::cellSize * 21, C::size, C::size })) {
			appleGrayRadioButton = true;
			appleWhiteRadioButton = false;
			appleBlackRadioButton = false;
			appleRedRadioButton = false;
			appleDarkOliveRadioButton = false;
			appleColor = C::gray;
		}
		// appleDarkOliveRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 25, C::cellSize * 21, C::size, C::size })) {
			appleDarkOliveRadioButton = true;
			appleGrayRadioButton = false;
			appleWhiteRadioButton = false;
			appleBlackRadioButton = false;
			appleRedRadioButton = false;
			appleColor = C::darkOlive;
		}
	}

	if (CheckCollisionPointRec(GetMousePosition(), startTheGame.button)) {
		if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {

			CloseWindow();

			startTheDifficultWindow();                
			return false;
		}
	}
	return true;
}

void MainShopWindow::Draw(){
	ClearBackground(MyConstants::black);

	DrawRectangleLinesEx(Rectangle{ static_cast<float>(5),
static_cast<float>(5),
static_cast<float>(screenWidth - 10),
static_cast<float>(screenHeight - 10) }, 4, C::textYellow);
	DrawText("choose the skins", MyConstants::cellSize * 9, 10, 40, MyConstants::textYellow);

	DrawText("Snake: ", MyConstants::cellSize * 2, MyConstants::cellSize * 4, 40, MyConstants::textYellow);
	DrawText("Field: ", MyConstants::cellSize * 2, MyConstants::cellSize * 10, 40, MyConstants::textYellow);
	DrawText("Apple: ", MyConstants::cellSize * 2, MyConstants::cellSize * 16, 40, MyConstants::textYellow);

	// Drawing snake color radiobuttons
	DrawRectangle(C::cellSize * 5, C::cellSize * 9, C::size, C::size, snakeDarkGreenRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 4.3, C::cellSize * 6, C::size * 3, C::size * 3, C::darkGreen);

	DrawRectangle(C::cellSize * 10, C::cellSize * 9, C::size, C::size, snakeBlackRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 9.3, C::cellSize * 6, C::size * 3, C::size * 3, C::black);

	DrawRectangle(C::cellSize * 15, C::cellSize * 9, C::size, C::size, snakeWhiteRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 14.3, C::cellSize * 6, C::size * 3, C::size * 3, C::white);

	DrawRectangle(C::cellSize * 20, C::cellSize * 9, C::size, C::size, snakeGrayRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 19.3, C::cellSize * 6, C::size * 3, C::size * 3, C::gray);

	DrawRectangle(C::cellSize * 25, C::cellSize * 9, C::size, C::size, snakeDarkOliveRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 24.3, C::cellSize * 6, C::size * 3, C::size * 3, C::darkOlive);

	// Drawing field color radiobuttons
	DrawRectangle(C::cellSize * 5, C::cellSize * 15, C::size, C::size, fieldGreenRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 4.3, C::cellSize * 12, C::size * 3, C::size * 3, C::green);

	DrawRectangle(C::cellSize * 10, C::cellSize * 15, C::size, C::size, fieldBlackRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 9.3, C::cellSize * 12, C::size * 3, C::size * 3, C::fieldBlack);

	DrawRectangle(C::cellSize * 15, C::cellSize * 15, C::size, C::size, fieldWhiteRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 14.3, C::cellSize * 12, C::size * 3, C::size * 3, C::textWhite);

	DrawRectangle(C::cellSize * 20, C::cellSize * 15, C::size, C::size, fieldGrayRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 19.3, C::cellSize * 12, C::size * 3, C::size * 3, C::fieldGray);

	DrawRectangle(C::cellSize * 25, C::cellSize * 15, C::size, C::size, fieldOliveRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 24.3, C::cellSize * 12, C::size * 3, C::size * 3, C::fieldOlive);

	// Drawing apple color radioubuttons
	DrawRectangle(C::cellSize * 5, C::cellSize * 21, C::size, C::size, appleRedRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 4.3, C::cellSize * 18, C::size * 3, C::size * 3, C::red);

	DrawRectangle(C::cellSize * 10, C::cellSize * 21, C::size, C::size, appleBlackRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 9.3, C::cellSize * 18, C::size * 3, C::size * 3, C::black);

	DrawRectangle(C::cellSize * 15, C::cellSize * 21, C::size, C::size, appleWhiteRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 14.3, C::cellSize * 18, C::size * 3, C::size * 3, C::white);

	DrawRectangle(C::cellSize * 20, C::cellSize * 21, C::size, C::size, appleGrayRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 19.3, C::cellSize * 18, C::size * 3, C::size * 3, C::gray);

	DrawRectangle(C::cellSize * 25, C::cellSize * 21, C::size, C::size, appleDarkOliveRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 24.3, C::cellSize * 18, C::size * 3, C::size * 3, C::darkOlive);

	// Drawing line around colors
	float x = 4.3;

	for (int i = 0; i < 5; i++) {
		DrawRectangleLinesEx(Rectangle{ C::cellSize * x, C::cellSize * 6, C::size * 3, C::size * 3 }, 4, C::textYellow);
		x += 5;
	}
	x = 4.3;

	for (int i = 0; i < 5; i++) {
		DrawRectangleLinesEx(Rectangle{ C::cellSize * x, C::cellSize * 18, C::size * 3, C::size * 3 }, 4, C::textYellow);
		x += 5;
	}
	x = 4.3;

	for (int i = 0; i < 5; i++) {
		DrawRectangleLinesEx(Rectangle{ C::cellSize * x, C::cellSize * 12, C::size * 3, C::size * 3 }, 4, C::textYellow);
		x += 5;
	}

	// Drawing buttons
	startTheGame.Draw();
}
