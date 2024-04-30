#include "MainSettingsWindow.h"


extern bool isAudioPlay;

MainSettingsWindow::MainSettingsWindow() : 
	screenWidth(2 * C::offset + C::cellSize * C::cellCount),
	screenHeight(2 * C::offset + C::cellSize * C::cellCount),
	soundsOnRadioButton{true},
	soundsOffRadioButton{false}
{
}

MainSettingsWindow::~MainSettingsWindow(){
	CloseWindow();
}

bool MainSettingsWindow::Update() {
	if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {

		// soundsOnRadioButton check
		if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 12, C::cellSize * 13, C::size, C::size })) {
			soundsOnRadioButton = true;
			soundsOffRadioButton = false;
		}
		// soundsOffRadioButton check
		else if (CheckCollisionPointRec(GetMousePosition(), { C::cellSize * 17, C::cellSize * 13, C::size, C::size })) {
			soundsOffRadioButton = true;
			soundsOnRadioButton = false;
			isAudioPlay = false;
		}
	}

	// Updating shopButton
	if (CheckCollisionPointRec(GetMousePosition(), shopButton.button)) {
		if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {

			CloseWindow();
			startTheShopWindow();
			return true;
		}
	}
	return false;
}

void MainSettingsWindow::Draw(){
	ClearBackground(MyConstants::black);

	DrawRectangleLinesEx(Rectangle{ static_cast<float>(5),
static_cast<float>(5),
static_cast<float>(screenWidth - 10),
static_cast<float>(screenHeight - 10) }, 4, C::textYellow);

	DrawText("settings", MyConstants::cellSize * 12.5, 10, 40, MyConstants::textYellow);
	DrawText("sounds:", MyConstants::cellSize * 12.5, 300, 40, MyConstants::textWhite);
	DrawText("On", MyConstants::cellSize * 11.5, 420, 40, MyConstants::textWhite);
	DrawText("Off", MyConstants::cellSize * 16.5, 420, 40, MyConstants::textWhite);

	// Drawing radioButtins for sounds(On, Off)
	DrawRectangle(C::cellSize * 12, C::cellSize * 13, C::size, C::size, soundsOnRadioButton ? GREEN : BLACK);
	DrawRectangle(C::cellSize * 17, C::cellSize * 13, C::size, C::size, soundsOffRadioButton ? GREEN : BLACK);

	//Drawing Buttons
	shopButton.Draw();

	DrawText("Created by Nikitosik_2006", MyConstants::cellSize * 20,850, 20, MyConstants::textWhite);
}
