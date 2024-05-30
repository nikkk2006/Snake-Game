#include "MainShopWindow.h"


extern Color snakeColor;
extern Color fieldColor;
extern Color borderColor;
extern Color appleColor;
extern GameStates gameState;
extern bool defaultWhiteTheme;

std::string defaultSnakeColor = "snakeWhiteRadioButton";
std::string defaultFieldColor = "fieldBlackRadioButton";
std::string defaultAppleColor = "appleRedRadioButton";



// function that returns the radio button rectangle with values
Rectangle createRectangle(const int x, const int y) {
	return { (float)MyC::cellSize * x, (float)MyC::cellSize * y, MyC::size, MyC::size };
}

// function that return true if any radioButton pressed
bool IsRadioButtonPressed(Rectangle coordinates) {
	return CheckCollisionPointRec(GetMousePosition(), coordinates) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}


MainShopWindow::MainShopWindow() :
	screenWidth(2 * MyC::offset + MyC::cellSize * MyC::cellCount),
	screenHeight(2 * MyC::offset + MyC::cellSize * MyC::cellCount)
{}

MainShopWindow::~MainShopWindow(){
	CloseWindow();
}

bool MainShopWindow::IsButtonBackPressed(){
	return CheckCollisionPointRec(GetMousePosition(), back.button) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}

void MainShopWindow::Update(){
	// radioButtons press check

	if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
		
		// snakeDarkGreenRadioButton check
		if (IsRadioButtonPressed(createRectangle(5, 9))) {
			defaultSnakeColor = "snakeDarkGreenRadioButton";
			snakeColor = MyC::darkGreen;
		}
		// snakeBlackRadioButton check
		if (IsRadioButtonPressed(createRectangle(10, 9))) {
			defaultSnakeColor = "snakeBlackRadioButton";
			snakeColor = MyC::black;
		}
		// snakeWhiteRadioButton check
		if (IsRadioButtonPressed(createRectangle(15, 9))) {
			defaultSnakeColor = "snakeWhiteRadioButton";
			snakeColor = MyC::white;
		}
		// snakeGrayRadioButton check
		if (IsRadioButtonPressed(createRectangle(20, 9))) {
			defaultSnakeColor = "snakeGrayRadioButton";
			snakeColor = MyC::gray;
		}
		// snakeDarkOliveRadioButton check
		if (IsRadioButtonPressed(createRectangle(25, 9))) {
			defaultSnakeColor = "snakeDarkOliveRadioButton";
			snakeColor = MyC::darkOlive;
		}

		// fieldGreenRadioButton check
		if (IsRadioButtonPressed(createRectangle(5, 15))) {
			defaultFieldColor = "fieldGreenRadioButton";
			fieldColor = MyC::green;
			borderColor = MyC::darkGreen;
		}
		// fieldBlackRadioButton check
		if (IsRadioButtonPressed(createRectangle(10, 15))) {
			defaultFieldColor = "fieldBlackRadioButton";
			fieldColor = MyC::fieldBlack;
		}
		// fieldWhiteRadioButton check
		if (IsRadioButtonPressed(createRectangle(15, 15))) {
			defaultFieldColor = "fieldWhiteRadioButton";
			fieldColor = MyC::textWhite;
			borderColor = MyC::black;
		}
		// fieldGrayRadioButton check
		if (IsRadioButtonPressed(createRectangle(20, 15))) {
			defaultFieldColor = "fieldGrayRadioButton";
			fieldColor = MyC::fieldGray;
			borderColor = MyC::black;
		}
		// fieldOliveRadioButton check
		else if (IsRadioButtonPressed(createRectangle(25, 15))) {
			defaultFieldColor = "fieldOliveRadioButton";
			fieldColor = MyC::fieldOlive;
			borderColor = MyC::buttonDarkBlack;
		}

		// appleRedRadioButton check
		if (IsRadioButtonPressed(createRectangle(5, 21))) {
			defaultAppleColor = "appleRedRadioButton";
			appleColor = MyC::red;
		}
		// appleBlackRadioButton check
		else if (IsRadioButtonPressed(createRectangle(10, 21))) {
			defaultAppleColor = "appleBlackRadioButton";
			appleColor = MyC::black;
		}
		// appleWhiteRadioButton check
		else if (IsRadioButtonPressed(createRectangle(15, 21))) {
			defaultAppleColor = "appleWhiteRadioButton";
			appleColor = MyC::white;
		}
		// appleGrayRadioButton check
		else if (IsRadioButtonPressed(createRectangle(20, 21))) {
			defaultAppleColor = "appleGrayRadioButton";
			appleColor = MyC::gray;
		}
		// appleDarkOliveRadioButton check
		else if (IsRadioButtonPressed(createRectangle(25, 21))) {
			defaultAppleColor = "appleDarkOliveRadioButton";
			appleColor = MyC::darkOlive;
		}
	}
}

void MainShopWindow::Draw(){
	ClearBackground(defaultWhiteTheme ? MyC::antiFlashWhite : MyC::black);

	DrawRectangleLinesEx(Rectangle{ static_cast<float>(5),
static_cast<float>(5),
static_cast<float>(screenWidth - 10),
static_cast<float>(screenHeight - 10) }, 4, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
	DrawText("choose the skins", MyC::cellSize * 9, 10, 40, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);

	DrawText("Snake: ", MyC::cellSize * 2, MyC::cellSize * 4, 40, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
	DrawText("Field: ", MyC::cellSize * 2, MyC::cellSize * 10, 40, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
	DrawText("Apple: ", MyC::cellSize * 2, MyC::cellSize * 16, 40, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
	
	// Drawing snake color radiobuttons
	DrawRectangle(MyC::cellSize * 5, MyC::cellSize * 9, MyC::size, MyC::size, defaultSnakeColor == "snakeDarkGreenRadioButton" ? GREEN : defaultWhiteTheme ? MyC::slateGray : BLACK);
	DrawRectangle(MyC::cellSize * 4.3, MyC::cellSize * 6, MyC::size * 3, MyC::size * 3, MyC::darkGreen);

	DrawRectangle(MyC::cellSize * 10, MyC::cellSize * 9, MyC::size, MyC::size, defaultSnakeColor == "snakeBlackRadioButton" ? GREEN : defaultWhiteTheme ? MyC::slateGray : BLACK);
	DrawRectangle(MyC::cellSize * 9.3, MyC::cellSize * 6, MyC::size * 3, MyC::size * 3, MyC::black);

	DrawRectangle(MyC::cellSize * 15, MyC::cellSize * 9, MyC::size, MyC::size, defaultSnakeColor == "snakeWhiteRadioButton" ? GREEN : defaultWhiteTheme ? MyC::slateGray : BLACK);
    DrawRectangle(MyC::cellSize * 14.3, MyC::cellSize * 6, MyC::size * 3, MyC::size * 3, MyC::white);

	DrawRectangle(MyC::cellSize * 20, MyC::cellSize * 9, MyC::size, MyC::size, defaultSnakeColor == "snakeGrayRadioButton" ? GREEN : defaultWhiteTheme ? MyC::slateGray : BLACK);
    DrawRectangle(MyC::cellSize * 19.3, MyC::cellSize * 6, MyC::size * 3, MyC::size * 3, MyC::gray);

	DrawRectangle(MyC::cellSize * 25, MyC::cellSize * 9, MyC::size, MyC::size, defaultSnakeColor == "snakeDarkOliveRadioButton" ? GREEN : defaultWhiteTheme ? MyC::slateGray : BLACK);
    DrawRectangle(MyC::cellSize * 24.3, MyC::cellSize * 6, MyC::size * 3, MyC::size * 3, MyC::darkOlive);

	// Drawing field color radiobuttons
	DrawRectangle(MyC::cellSize * 5, MyC::cellSize * 15, MyC::size, MyC::size, defaultFieldColor == "fieldGreenRadioButton" ? GREEN : defaultWhiteTheme ? MyC::slateGray : BLACK);
	DrawRectangle(MyC::cellSize * 4.3, MyC::cellSize * 12, MyC::size * 3, MyC::size * 3, MyC::green);
	
	DrawRectangle(MyC::cellSize * 10, MyC::cellSize * 15, MyC::size, MyC::size, defaultFieldColor == "fieldBlackRadioButton" ? GREEN : defaultWhiteTheme ? MyC::slateGray : BLACK);
	DrawRectangle(MyC::cellSize * 9.3, MyC::cellSize * 12, MyC::size * 3, MyC::size * 3, MyC::fieldBlack);
	
	DrawRectangle(MyC::cellSize * 15, MyC::cellSize * 15, MyC::size, MyC::size, defaultFieldColor == "fieldWhiteRadioButton" ? GREEN : defaultWhiteTheme ? MyC::slateGray : BLACK);
	DrawRectangle(MyC::cellSize * 14.3, MyC::cellSize * 12, MyC::size * 3, MyC::size * 3, MyC::textWhite);
	
	DrawRectangle(MyC::cellSize * 20, MyC::cellSize * 15, MyC::size, MyC::size, defaultFieldColor == "fieldGrayRadioButton" ? GREEN : defaultWhiteTheme ? MyC::slateGray : BLACK);
	DrawRectangle(MyC::cellSize * 19.3, MyC::cellSize * 12, MyC::size * 3, MyC::size * 3, MyC::fieldGray);
	
	DrawRectangle(MyC::cellSize * 25, MyC::cellSize * 15, MyC::size, MyC::size, defaultFieldColor == "fieldOliveRadioButton" ? GREEN : defaultWhiteTheme ? MyC::slateGray : BLACK);
	DrawRectangle(MyC::cellSize * 24.3, MyC::cellSize * 12, MyC::size * 3, MyC::size * 3, MyC::fieldOlive);

	// Drawing apple color radioubuttons
	DrawRectangle(MyC::cellSize * 5, MyC::cellSize * 21, MyC::size, MyC::size, defaultAppleColor == "appleRedRadioButton" ? GREEN : defaultWhiteTheme ? MyC::slateGray : BLACK);
	DrawRectangle(MyC::cellSize * 4.3, MyC::cellSize * 18, MyC::size * 3, MyC::size * 3, MyC::red);

	DrawRectangle(MyC::cellSize * 10, MyC::cellSize * 21, MyC::size, MyC::size, defaultAppleColor == "appleBlackRadioButton" ? GREEN : defaultWhiteTheme ? MyC::slateGray : BLACK);
	DrawRectangle(MyC::cellSize * 9.3, MyC::cellSize * 18, MyC::size * 3, MyC::size * 3, MyC::black);

	DrawRectangle(MyC::cellSize * 15, MyC::cellSize * 21, MyC::size, MyC::size, defaultAppleColor == "appleWhiteRadioButton" ? GREEN : defaultWhiteTheme ? MyC::slateGray : BLACK);
	DrawRectangle(MyC::cellSize * 14.3, MyC::cellSize * 18, MyC::size * 3, MyC::size * 3, MyC::white);

	DrawRectangle(MyC::cellSize * 20, MyC::cellSize * 21, MyC::size, MyC::size, defaultAppleColor == "appleGrayRadioButton" ? GREEN : defaultWhiteTheme ? MyC::slateGray : BLACK);
	DrawRectangle(MyC::cellSize * 19.3, MyC::cellSize * 18, MyC::size * 3, MyC::size * 3, MyC::gray);

	DrawRectangle(MyC::cellSize * 25, MyC::cellSize * 21, MyC::size, MyC::size, defaultAppleColor == "appleDarkOliveRadioButton" ? GREEN : defaultWhiteTheme ? MyC::slateGray : BLACK);
	DrawRectangle(MyC::cellSize * 24.3, MyC::cellSize * 18, MyC::size * 3, MyC::size * 3, MyC::darkOlive);

	// Drawing line around colors
	float x = 4.3;

	for (int i = 0; i < 5; i++) {
		DrawRectangleLinesEx(Rectangle{ MyC::cellSize * x, MyC::cellSize * 6, MyC::size * 3, MyC::size * 3 }, 4, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
		x += 5;
	}
	x = 4.3;

	for (int i = 0; i < 5; i++) {
		DrawRectangleLinesEx(Rectangle{ MyC::cellSize * x, MyC::cellSize * 18, MyC::size * 3, MyC::size * 3 }, 4, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
		x += 5;
	}
	x = 4.3;

	for (int i = 0; i < 5; i++) {
		DrawRectangleLinesEx(Rectangle{ MyC::cellSize * x, MyC::cellSize * 12, MyC::size * 3, MyC::size * 3 }, 4, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
		x += 5;
	}

	// Drawing buttons
	back.Draw();
}
