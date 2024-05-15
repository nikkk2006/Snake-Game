#ifndef MAIN_SHOP_WINDOW
#define MAIN_SHOP_WINDOW


#include "constants.h"
#include "difficultWindowButtons.h"
#include "startWindowsFunctions.h"
namespace MyC = MyConstants;





class MainShopWindow {
public:
	int screenWidth;
	int screenHeight;
	const char* title;

	// Buttons
	buttonStartTheGame startTheGame{ "start the game", 25.0, 35.0 };

	// Snake radiobuttons pressed check
	bool snakeDarkGreenRadioButton;
	bool snakeBlackRadioButton;
	bool snakeWhiteRadioButton;
	bool snakeGrayRadioButton;
	bool snakeDarkOliveRadioButton;
	// Field radiobuttons pressed check
	bool fieldGreenRadioButton;
	bool fieldBlackRadioButton;
	bool fieldWhiteRadioButton;
	bool fieldGrayRadioButton;
	bool fieldOliveRadioButton;
	// Apple radiobuttons pressed check
	bool appleRedRadioButton;
	bool appleBlackRadioButton;
	bool appleWhiteRadioButton;
	bool appleGrayRadioButton;
	bool appleDarkOliveRadioButton;

	MainShopWindow();
	~MainShopWindow();
	int Update();
	void Draw();
};
#endif // !MAIN_SHOP_WINDOW

