#include "MainShopWindow.h"


extern Color snakeColor;
extern Color fieldColor;
extern Color borderColor;
extern Color appleColor;


// function that returns the radio button rectangle with values
Rectangle createRectangle(const int x, const int y) {
	return { (float)MyC::cellSize * x, (float)MyC::cellSize * y, MyC::size, MyC::size };
}


MainShopWindow::MainShopWindow() :
	screenWidth(2 * MyC::offset + MyC::cellSize * MyC::cellCount),
	screenHeight(2 * MyC::offset + MyC::cellSize * MyC::cellCount),

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
		if (CheckCollisionPointRec(GetMousePosition(), createRectangle(5, 9))) {
			snakeDarkGreenRadioButton = true;
			snakeBlackRadioButton = false;
			snakeWhiteRadioButton = false;
			snakeGrayRadioButton = false;
			snakeDarkOliveRadioButton = false;
			snakeColor = MyC::darkGreen;
		}
		// snakeBlackRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(10, 9))) {
			snakeBlackRadioButton = true;
			snakeDarkGreenRadioButton = false;
			snakeWhiteRadioButton = false;
			snakeGrayRadioButton = false;
			snakeDarkOliveRadioButton = false;
			snakeColor = MyC::black;
		}
		// snakeWhiteRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(15, 9))) {
			snakeWhiteRadioButton = true;
			snakeBlackRadioButton = false;
			snakeDarkGreenRadioButton = false;
			snakeGrayRadioButton = false;
			snakeDarkOliveRadioButton = false;
			snakeColor = MyC::white;
		}
		// snakeGrayRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(20, 9))) {
			snakeGrayRadioButton = true;
			snakeWhiteRadioButton = false;
			snakeBlackRadioButton = false;
			snakeDarkGreenRadioButton = false;
			snakeDarkOliveRadioButton = false;
			snakeColor = MyC::gray;
		}
		// snakeDarkOliveRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(25, 9))) {
			snakeDarkOliveRadioButton = true;
			snakeGrayRadioButton = false;
			snakeWhiteRadioButton = false;
			snakeBlackRadioButton = false;
			snakeDarkGreenRadioButton = false;
			snakeColor = MyC::darkOlive;
		}

		// fieldGreenRadioButton check
		if (CheckCollisionPointRec(GetMousePosition(), createRectangle(5, 15))) {
			fieldGreenRadioButton = true;
			fieldBlackRadioButton = false;
			fieldWhiteRadioButton = false;
			fieldGrayRadioButton = false;
			fieldOliveRadioButton = false;
			fieldColor = MyC::green;
			borderColor = MyC::darkGreen;
		}
		// fieldBlackRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(10, 15))) {
			fieldBlackRadioButton = true;
			fieldGreenRadioButton = false;
			fieldWhiteRadioButton = false;
			fieldGrayRadioButton = false;
			fieldOliveRadioButton = false;
			fieldColor = MyC::fieldBlack;
		}
		// fieldWhiteRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(15, 15))) {
			fieldWhiteRadioButton = true;
			fieldBlackRadioButton = false;
			fieldGreenRadioButton = false;
			fieldGrayRadioButton = false;
			fieldOliveRadioButton = false;
			fieldColor = MyC::textWhite;
			borderColor = MyC::black;
		}
		// fieldGrayRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(20, 15))) {
			fieldGrayRadioButton = true;
			fieldWhiteRadioButton = false;
			fieldBlackRadioButton = false;
			fieldGreenRadioButton = false;
			fieldOliveRadioButton = false;
			fieldColor = MyC::fieldGray;
			borderColor = MyC::black;
		}
		// fieldOliveRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(25, 15))) {
			fieldOliveRadioButton = true;
			fieldGrayRadioButton = false;
			fieldWhiteRadioButton = false;
			fieldBlackRadioButton = false;
			fieldGreenRadioButton = false;
			fieldColor = MyC::fieldOlive;
			borderColor = MyC::buttonDarkBlack;
		}

		// appleRedRadioButton check
		if (CheckCollisionPointRec(GetMousePosition(), createRectangle(5, 21))) {
			appleRedRadioButton = true;
			appleBlackRadioButton = false;
			appleWhiteRadioButton = false;
			appleGrayRadioButton = false;
			appleDarkOliveRadioButton = false;
			appleColor = MyC::red;
		}
		// appleBlackRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(10, 21))) {
			appleBlackRadioButton = true;
			appleRedRadioButton = false;
			appleWhiteRadioButton = false;
			appleGrayRadioButton = false;
			appleDarkOliveRadioButton = false;
			appleColor = MyC::black;
		}
		// appleWhiteRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(15, 21))) {
			appleWhiteRadioButton = true;
			appleBlackRadioButton = false;
			appleRedRadioButton = false;
			appleGrayRadioButton = false;
			appleDarkOliveRadioButton = false;
			appleColor = MyC::white;
		}
		// appleGrayRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(20, 21))) {
			appleGrayRadioButton = true;
			appleWhiteRadioButton = false;
			appleBlackRadioButton = false;
			appleRedRadioButton = false;
			appleDarkOliveRadioButton = false;
			appleColor = MyC::gray;
		}
		// appleDarkOliveRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(25, 21))) {
			appleDarkOliveRadioButton = true;
			appleGrayRadioButton = false;
			appleWhiteRadioButton = false;
			appleBlackRadioButton = false;
			appleRedRadioButton = false;
			appleColor = MyC::darkOlive;
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
	ClearBackground(MyC::black);

	DrawRectangleLinesEx(Rectangle{ static_cast<float>(5),
static_cast<float>(5),
static_cast<float>(screenWidth - 10),
static_cast<float>(screenHeight - 10) }, 4, MyC::textYellow);
	DrawText("choose the skins", MyC::cellSize * 9, 10, 40, MyC::textYellow);

	DrawText("Snake: ", MyC::cellSize * 2, MyC::cellSize * 4, 40, MyC::textYellow);
	DrawText("Field: ", MyC::cellSize * 2, MyC::cellSize * 10, 40, MyC::textYellow);
	DrawText("Apple: ", MyC::cellSize * 2, MyC::cellSize * 16, 40, MyC::textYellow);

	// Drawing snake color radiobuttons
	DrawRectangle(MyC::cellSize * 5, MyC::cellSize * 9, MyC::size, MyC::size, snakeDarkGreenRadioButton ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 4.3, MyC::cellSize * 6, MyC::size * 3, MyC::size * 3, MyC::darkGreen);

	DrawRectangle(MyC::cellSize * 10, MyC::cellSize * 9, MyC::size, MyC::size, snakeBlackRadioButton ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 9.3, MyC::cellSize * 6, MyC::size * 3, MyC::size * 3, MyC::black);

	DrawRectangle(MyC::cellSize * 15, MyC::cellSize * 9, MyC::size, MyC::size, snakeWhiteRadioButton ? GREEN : BLACK);
    DrawRectangle(MyC::cellSize * 14.3, MyC::cellSize * 6, MyC::size * 3, MyC::size * 3, MyC::white);

	DrawRectangle(MyC::cellSize * 20, MyC::cellSize * 9, MyC::size, MyC::size, snakeGrayRadioButton ? GREEN : BLACK);
    DrawRectangle(MyC::cellSize * 19.3, MyC::cellSize * 6, MyC::size * 3, MyC::size * 3, MyC::gray);

    DrawRectangle(MyC::cellSize * 25, MyC::cellSize * 9, MyC::size, MyC::size, snakeDarkOliveRadioButton ? GREEN : BLACK);
    DrawRectangle(MyC::cellSize * 24.3, MyC::cellSize * 6, MyC::size * 3, MyC::size * 3, MyC::darkOlive);

	// Drawing field color radiobuttons
	DrawRectangle(MyC::cellSize * 5, MyC::cellSize * 15, MyC::size, MyC::size, fieldGreenRadioButton ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 4.3, MyC::cellSize * 12, MyC::size * 3, MyC::size * 3, MyC::green);
	
	DrawRectangle(MyC::cellSize * 10, MyC::cellSize * 15, MyC::size, MyC::size, fieldBlackRadioButton ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 9.3, MyC::cellSize * 12, MyC::size * 3, MyC::size * 3, MyC::fieldBlack);
	
	DrawRectangle(MyC::cellSize * 15, MyC::cellSize * 15, MyC::size, MyC::size, fieldWhiteRadioButton ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 14.3, MyC::cellSize * 12, MyC::size * 3, MyC::size * 3, MyC::textWhite);
	
	DrawRectangle(MyC::cellSize * 20, MyC::cellSize * 15, MyC::size, MyC::size, fieldGrayRadioButton ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 19.3, MyC::cellSize * 12, MyC::size * 3, MyC::size * 3, MyC::fieldGray);
	
	DrawRectangle(MyC::cellSize * 25, MyC::cellSize * 15, MyC::size, MyC::size, fieldOliveRadioButton ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 24.3, MyC::cellSize * 12, MyC::size * 3, MyC::size * 3, MyC::fieldOlive);

	// Drawing apple color radioubuttons
	DrawRectangle(MyC::cellSize * 5, MyC::cellSize * 21, MyC::size, MyC::size, appleRedRadioButton ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 4.3, MyC::cellSize * 18, MyC::size * 3, MyC::size * 3, MyC::red);

	DrawRectangle(MyC::cellSize * 10, MyC::cellSize * 21, MyC::size, MyC::size, appleBlackRadioButton ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 9.3, MyC::cellSize * 18, MyC::size * 3, MyC::size * 3, MyC::black);

	DrawRectangle(MyC::cellSize * 15, MyC::cellSize * 21, MyC::size, MyC::size, appleWhiteRadioButton ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 14.3, MyC::cellSize * 18, MyC::size * 3, MyC::size * 3, MyC::white);

	DrawRectangle(MyC::cellSize * 20, MyC::cellSize * 21, MyC::size, MyC::size, appleGrayRadioButton ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 19.3, MyC::cellSize * 18, MyC::size * 3, MyC::size * 3, MyC::gray);

	DrawRectangle(MyC::cellSize * 25, MyC::cellSize * 21, MyC::size, MyC::size, appleDarkOliveRadioButton ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 24.3, MyC::cellSize * 18, MyC::size * 3, MyC::size * 3, MyC::darkOlive);

	// Drawing line around colors
	float x = 4.3;

	for (int i = 0; i < 5; i++) {
		DrawRectangleLinesEx(Rectangle{ MyC::cellSize * x, MyC::cellSize * 6, MyC::size * 3, MyC::size * 3 }, 4, MyC::textYellow);
		x += 5;
	}
	x = 4.3;

	for (int i = 0; i < 5; i++) {
		DrawRectangleLinesEx(Rectangle{ MyC::cellSize * x, MyC::cellSize * 18, MyC::size * 3, MyC::size * 3 }, 4, MyC::textYellow);
		x += 5;
	}
	x = 4.3;

	for (int i = 0; i < 5; i++) {
		DrawRectangleLinesEx(Rectangle{ MyC::cellSize * x, MyC::cellSize * 12, MyC::size * 3, MyC::size * 3 }, 4, MyC::textYellow);
		x += 5;
	}

	// Drawing buttons
	startTheGame.Draw();
}
