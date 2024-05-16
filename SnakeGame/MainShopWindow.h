#ifndef MAIN_SHOP_WINDOW
#define MAIN_SHOP_WINDOW


#include <map>
#include <string>
#include "constants.h"
#include "difficultWindowButtons.h"
#include "startWindowsFunctions.h"
namespace MyC = MyConstants;
using MyMapRB = std::map<std::string, bool>;


class MainShopWindow {
public:
	int screenWidth;
	int screenHeight;
	const char* title;

	// Buttons
	buttonStartTheGame startTheGame{ "start the game", 25.0, 35.0 };

	// Radio buttons pressed check
	MyMapRB RadioButtonsFlags = {
		{"snakeDarkGreenRadioButton", false},
		{"snakeBlackRadioButton", false},
		{"snakeWhiteRadioButton", true},
		{"snakeGrayRadioButton", false},
		{"snakeDarkOliveRadioButton", false},

		{"fieldGreenRadioButton", false},
		{"fieldBlackRadioButton", true},
		{"fieldWhiteRadioButton", false},
		{"fieldGrayRadioButton", false},
		{"fieldOliveRadioButton", false},

		{"appleRedRadioButton", true},
		{"appleBlackRadioButton", false},
		{"appleWhiteRadioButton", false},
		{"appleGrayRadioButton", false},
		{"appleDarkOliveRadioButton", false}
	};

	MainShopWindow();
	~MainShopWindow();
	int Update();
	void Draw();
};
#endif // !MAIN_SHOP_WINDOW

