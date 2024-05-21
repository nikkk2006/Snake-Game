#include "MainShopWindow.h"


extern Color snakeColor;
extern Color fieldColor;
extern Color borderColor;
extern Color appleColor;
extern GameStates gameState;


// function that returns the radio button rectangle with values
Rectangle createRectangle(const int x, const int y) {
	return { (float)MyC::cellSize * x, (float)MyC::cellSize * y, MyC::size, MyC::size };
}


MainShopWindow::MainShopWindow() :
	screenWidth(2 * MyC::offset + MyC::cellSize * MyC::cellCount),
	screenHeight(2 * MyC::offset + MyC::cellSize * MyC::cellCount)
{}

MainShopWindow::~MainShopWindow(){
	CloseWindow();
}

int MainShopWindow::Update(){
	// radioButtons press check

	if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
		std::string lastPressed;

		// snakeDarkGreenRadioButton check
		if (CheckCollisionPointRec(GetMousePosition(), createRectangle(5, 9))) {
			RadioButtonsFlags["snakeDarkGreenRadioButton"] = true;
			RadioButtonsFlags["snakeBlackRadioButton"] = false;
			RadioButtonsFlags["snakeWhiteRadioButton"] = false;
			RadioButtonsFlags["snakeGrayRadioButton"] = false;
			RadioButtonsFlags["snakeDarkOliveRadioButton"] = false;
			snakeColor = MyC::darkGreen;
		}
		// snakeBlackRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(10, 9))) {			
			RadioButtonsFlags["snakeBlackRadioButton"] = true;
			RadioButtonsFlags["snakeDarkGreenRadioButton"] = false;
			RadioButtonsFlags["snakeWhiteRadioButton"] = false;
			RadioButtonsFlags["snakeGrayRadioButton"] = false;
			RadioButtonsFlags["snakeDarkOliveRadioButton"] = false;
			snakeColor = MyC::black;
		}
		// snakeWhiteRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(15, 9))) {
			RadioButtonsFlags["snakeWhiteRadioButton"] = true;
			RadioButtonsFlags["snakeBlackRadioButton"] = false;
			RadioButtonsFlags["snakeDarkGreenRadioButton"] = false;
			RadioButtonsFlags["snakeGrayRadioButton"] = false;
			RadioButtonsFlags["snakeDarkOliveRadioButton"] = false;
			snakeColor = MyC::white;
		}
		// snakeGrayRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(20, 9))) {				
			RadioButtonsFlags["snakeGrayRadioButton"] = true;
			RadioButtonsFlags["snakeWhiteRadioButton"] = false;
			RadioButtonsFlags["snakeBlackRadioButton"] = false;
			RadioButtonsFlags["snakeDarkGreenRadioButton"] = false;
			RadioButtonsFlags["snakeDarkOliveRadioButton"] = false;
			snakeColor = MyC::gray;
		}
		// snakeDarkOliveRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(25, 9))) {
			RadioButtonsFlags["snakeDarkOliveRadioButton"] = true;
			RadioButtonsFlags["snakeGrayRadioButton"] = false;
			RadioButtonsFlags["snakeWhiteRadioButton"] = false;
			RadioButtonsFlags["snakeBlackRadioButton"] = false;
			RadioButtonsFlags["snakeDarkGreenRadioButton"] = false;
			snakeColor = MyC::darkOlive;
		}

		// fieldGreenRadioButton check
		if (CheckCollisionPointRec(GetMousePosition(), createRectangle(5, 15))) {
			RadioButtonsFlags["fieldGreenRadioButton"] = true;
			RadioButtonsFlags["fieldBlackRadioButton"] = false;
			RadioButtonsFlags["fieldWhiteRadioButton"] = false;
			RadioButtonsFlags["fieldGrayRadioButton"] = false;
			RadioButtonsFlags["fieldOliveRadioButton"] = false;
			fieldColor = MyC::green;
			borderColor = MyC::darkGreen;
		}
		// fieldBlackRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(10, 15))) {
			RadioButtonsFlags["fieldBlackRadioButton"] = true;
			RadioButtonsFlags["fieldGreenRadioButton"] = false;
			RadioButtonsFlags["fieldWhiteRadioButton"] = false;
			RadioButtonsFlags["fieldGrayRadioButton"] = false;
			RadioButtonsFlags["fieldOliveRadioButton"] = false;
			fieldColor = MyC::fieldBlack;
		}
		// fieldWhiteRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(15, 15))) {
			RadioButtonsFlags["fieldWhiteRadioButton"] = true;
			RadioButtonsFlags["fieldBlackRadioButton"] = false;
			RadioButtonsFlags["fieldGreenRadioButton"] = false;
			RadioButtonsFlags["fieldGrayRadioButton"] = false;
			RadioButtonsFlags["fieldOliveRadioButton"] = false;
			fieldColor = MyC::textWhite;
			borderColor = MyC::black;
		}
		// fieldGrayRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(20, 15))) {
			RadioButtonsFlags["fieldGrayRadioButton"] = true;
			RadioButtonsFlags["fieldWhiteRadioButton"] = false;
			RadioButtonsFlags["fieldBlackRadioButton"] = false;
			RadioButtonsFlags["fieldGreenRadioButton"] = false;
			RadioButtonsFlags["fieldOliveRadioButton"] = false;
			fieldColor = MyC::fieldGray;
			borderColor = MyC::black;
		}
		// fieldOliveRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(25, 15))) {
			RadioButtonsFlags["fieldOliveRadioButton"] = true;
			RadioButtonsFlags["fieldGrayRadioButton"] = false;
			RadioButtonsFlags["fieldWhiteRadioButton"] = false;
			RadioButtonsFlags["fieldBlackRadioButton"] = false;
			RadioButtonsFlags["fieldGreenRadioButton"] = false;
			fieldColor = MyC::fieldOlive;
			borderColor = MyC::buttonDarkBlack;
		}

		// appleRedRadioButton check
		if (CheckCollisionPointRec(GetMousePosition(), createRectangle(5, 21))) {
			RadioButtonsFlags["appleRedRadioButton"] = true;
			RadioButtonsFlags["appleBlackRadioButton"] = false;
			RadioButtonsFlags["appleWhiteRadioButton"] = false;
			RadioButtonsFlags["appleGrayRadioButton"] = false;
			RadioButtonsFlags["appleDarkOliveRadioButton"] = false;
			appleColor = MyC::red;
		}
		// appleBlackRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(10, 21))) {
			RadioButtonsFlags["appleBlackRadioButton"] = true;
			RadioButtonsFlags["appleRedRadioButton"] = false;
			RadioButtonsFlags["appleWhiteRadioButton"] = false;
			RadioButtonsFlags["appleGrayRadioButton"] = false;
			RadioButtonsFlags["appleDarkOliveRadioButton"] = false;
			appleColor = MyC::black;
		}
		// appleWhiteRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(15, 21))) {
			RadioButtonsFlags["appleWhiteRadioButton"] = true;
			RadioButtonsFlags["appleBlackRadioButton"] = false;
			RadioButtonsFlags["appleRedRadioButton"] = false;
			RadioButtonsFlags["appleGrayRadioButton"] = false;
			RadioButtonsFlags["appleDarkOliveRadioButton"] = false;
			appleColor = MyC::white;
		}
		// appleGrayRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(20, 21))) {
			RadioButtonsFlags["appleGrayRadioButton"] = true;
			RadioButtonsFlags["appleWhiteRadioButton"] = false;
			RadioButtonsFlags["appleBlackRadioButton"] = false;
			RadioButtonsFlags["appleRedRadioButton"] = false;
			RadioButtonsFlags["appleDarkOliveRadioButton"] = false;
			appleColor = MyC::gray;
		}
		// appleDarkOliveRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), createRectangle(25, 21))) {
			RadioButtonsFlags["appleDarkOliveRadioButton"] = true;
			RadioButtonsFlags["appleGrayRadioButton"] = false;
			RadioButtonsFlags["appleWhiteRadioButton"] = false;
			RadioButtonsFlags["appleBlackRadioButton"] = false;
			RadioButtonsFlags["appleRedRadioButton"] = false;
			appleColor = MyC::darkOlive;
		}
	}

	if (CheckCollisionPointRec(GetMousePosition(), back.button)) {
		if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {

			gameState = GameStates::MENU;
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
	DrawRectangle(MyC::cellSize * 5, MyC::cellSize * 9, MyC::size, MyC::size, RadioButtonsFlags["snakeDarkGreenRadioButton"] ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 4.3, MyC::cellSize * 6, MyC::size * 3, MyC::size * 3, MyC::darkGreen);

	DrawRectangle(MyC::cellSize * 10, MyC::cellSize * 9, MyC::size, MyC::size, RadioButtonsFlags["snakeBlackRadioButton"] ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 9.3, MyC::cellSize * 6, MyC::size * 3, MyC::size * 3, MyC::black);

	DrawRectangle(MyC::cellSize * 15, MyC::cellSize * 9, MyC::size, MyC::size, RadioButtonsFlags["snakeWhiteRadioButton"] ? GREEN : BLACK);
    DrawRectangle(MyC::cellSize * 14.3, MyC::cellSize * 6, MyC::size * 3, MyC::size * 3, MyC::white);

	DrawRectangle(MyC::cellSize * 20, MyC::cellSize * 9, MyC::size, MyC::size, RadioButtonsFlags["snakeGrayRadioButton"] ? GREEN : BLACK);
    DrawRectangle(MyC::cellSize * 19.3, MyC::cellSize * 6, MyC::size * 3, MyC::size * 3, MyC::gray);

	DrawRectangle(MyC::cellSize * 25, MyC::cellSize * 9, MyC::size, MyC::size, RadioButtonsFlags["snakeDarkOliveRadioButton"] ? GREEN : BLACK);
    DrawRectangle(MyC::cellSize * 24.3, MyC::cellSize * 6, MyC::size * 3, MyC::size * 3, MyC::darkOlive);

	// Drawing field color radiobuttons
	DrawRectangle(MyC::cellSize * 5, MyC::cellSize * 15, MyC::size, MyC::size, RadioButtonsFlags["fieldGreenRadioButton"] ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 4.3, MyC::cellSize * 12, MyC::size * 3, MyC::size * 3, MyC::green);
	
	DrawRectangle(MyC::cellSize * 10, MyC::cellSize * 15, MyC::size, MyC::size, RadioButtonsFlags["fieldBlackRadioButton"] ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 9.3, MyC::cellSize * 12, MyC::size * 3, MyC::size * 3, MyC::fieldBlack);
	
	DrawRectangle(MyC::cellSize * 15, MyC::cellSize * 15, MyC::size, MyC::size, RadioButtonsFlags["fieldWhiteRadioButton"] ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 14.3, MyC::cellSize * 12, MyC::size * 3, MyC::size * 3, MyC::textWhite);
	
	DrawRectangle(MyC::cellSize * 20, MyC::cellSize * 15, MyC::size, MyC::size, RadioButtonsFlags["fieldGrayRadioButton"] ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 19.3, MyC::cellSize * 12, MyC::size * 3, MyC::size * 3, MyC::fieldGray);
	
	DrawRectangle(MyC::cellSize * 25, MyC::cellSize * 15, MyC::size, MyC::size, RadioButtonsFlags["fieldOliveRadioButton"] ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 24.3, MyC::cellSize * 12, MyC::size * 3, MyC::size * 3, MyC::fieldOlive);

	// Drawing apple color radioubuttons
	DrawRectangle(MyC::cellSize * 5, MyC::cellSize * 21, MyC::size, MyC::size, RadioButtonsFlags["appleRedRadioButton"] ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 4.3, MyC::cellSize * 18, MyC::size * 3, MyC::size * 3, MyC::red);

	DrawRectangle(MyC::cellSize * 10, MyC::cellSize * 21, MyC::size, MyC::size, RadioButtonsFlags["appleBlackRadioButton"] ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 9.3, MyC::cellSize * 18, MyC::size * 3, MyC::size * 3, MyC::black);

	DrawRectangle(MyC::cellSize * 15, MyC::cellSize * 21, MyC::size, MyC::size, RadioButtonsFlags["appleWhiteRadioButton"] ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 14.3, MyC::cellSize * 18, MyC::size * 3, MyC::size * 3, MyC::white);

	DrawRectangle(MyC::cellSize * 20, MyC::cellSize * 21, MyC::size, MyC::size, RadioButtonsFlags["appleGrayRadioButton"] ? GREEN : BLACK);
	DrawRectangle(MyC::cellSize * 19.3, MyC::cellSize * 18, MyC::size * 3, MyC::size * 3, MyC::gray);

	DrawRectangle(MyC::cellSize * 25, MyC::cellSize * 21, MyC::size, MyC::size, RadioButtonsFlags["appleDarkOliveRadioButton"] ? GREEN : BLACK);
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
	back.Draw();
}
