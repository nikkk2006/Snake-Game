#include "startWindowsFunctions.h"


int main() {

	int pressedButton = startTheMainMenu();

	switch (pressedButton) {
	case START: startTheDifficultWindow(); break;
	case SHOP: startTheShopWindow(); break;
	case SETTINGS: startTheSettingsWindow(); break;
	case EXIT: break;
	}

	return 0;
}