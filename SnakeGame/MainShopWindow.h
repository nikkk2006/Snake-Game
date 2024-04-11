#ifndef MAIN_SHOP_WINDOW
#define MAIN_SHOP_WINDOW


#include "constants.h"
namespace C = MyConstants;

class MainShopWindow {
public:
	int screenWidth;
	int screenHeight;
	const char* title;

	MainShopWindow();
	~MainShopWindow();
	void Update();
	void Draw();
};
#endif // !MAIN_SHOP_WINDOW

