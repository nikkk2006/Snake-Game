#ifndef MAIN_SHOP_WINDOW
#define MAIN_SHOP_WINDOW


#include "constants.h"
namespace C = MyConstants;

class MainShopWindow {
public:
	int screenWidth;
	int screenHeight;
	const char* title;

	// Snake radiobuttons pressed check
	bool snakeDarkGreenRadioButton;
	bool snakeBlackRadioButton;
	bool snakeWhiteRadioButton;
	bool snakeGrayRadioButton;
	bool snakePinkRadioButton;
	// Field radiobuttons pressed check
	bool fieldGreenRadioButton;
	bool fieldBlackRadioButton;
	bool fieldWhiteRadioButton;
	bool fieldGrayRadioButton;
	bool fieldPurpleRadioButton;

	MainShopWindow();
	~MainShopWindow();
	void Update();
	void Draw();
};
#endif // !MAIN_SHOP_WINDOW

