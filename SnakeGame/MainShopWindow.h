#ifndef MAIN_SHOP_WINDOW
#define MAIN_SHOP_WINDOW


#include <string>
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
	buttonBack back;

	MainShopWindow();
	~MainShopWindow();
	bool IsButtonBackPressed();
	void Update();
	void Draw();
};
#endif // !MAIN_SHOP_WINDOW

