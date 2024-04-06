#include "startTheMainMenu.h"


int main() {

	int pressedButton = startTheMainMenu();

	switch (pressedButton) {
	case START: startTheDifficultWindow(); break;
	case SHOP: // TODO; break;
	case SETTINGS: // TODO; break;
	case EXIT: break;
	}

	return 0;
}