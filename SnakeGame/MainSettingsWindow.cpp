#include "MainSettingsWindow.h"


bool defaultOnRadioButton = true;

MainSettingsWindow::MainSettingsWindow() : 
    screenWidth(2 * MyC::offset + MyC::cellSize * MyC::cellCount),
    screenHeight(2 * MyC::offset + MyC::cellSize * MyC::cellCount)
{}

MainSettingsWindow::~MainSettingsWindow() {
    CloseWindow();
}

bool MainSettingsWindow::IsOnRadioButtonPressed() {
    return CheckCollisionPointRec(GetMousePosition(), { MyC::cellSize * 12, MyC::cellSize * 13, MyC::size, MyC::size }) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}

bool MainSettingsWindow::IsOffRadioButtonPressed() {
    return CheckCollisionPointRec(GetMousePosition(), { MyC::cellSize * 17, MyC::cellSize * 13, MyC::size, MyC::size }) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}

bool MainSettingsWindow::IsButtonBackPressed() {
    return CheckCollisionPointRec(GetMousePosition(), back.button) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}

void MainSettingsWindow::Update() {
    if (IsOnRadioButtonPressed()) {
        defaultOnRadioButton = true;
        //isAudioPlay = true;
    }
    if (IsOffRadioButtonPressed()) {
        defaultOnRadioButton = false;
        //isAudioPlay = false;
    }
}

void MainSettingsWindow::Draw() {
    ClearBackground(MyConstants::black);

    DrawRectangleLinesEx(Rectangle{ static_cast<float>(5),
static_cast<float>(5),
static_cast<float>(screenWidth - 10),
static_cast<float>(screenHeight - 10) }, 4, MyC::textYellow);

    DrawText("settings", MyConstants::cellSize * 12.5, 10, 40, MyConstants::textYellow);
    DrawText("sounds:", MyConstants::cellSize * 12.5, 300, 40, MyConstants::textWhite);
    DrawText("On", MyConstants::cellSize * 11.5, 420, 40, MyConstants::textWhite);
    DrawText("Off", MyConstants::cellSize * 16.5, 420, 40, MyConstants::textWhite);

    // Drawing radio buttons for sounds(On, Off)
    DrawRectangle(MyC::cellSize * 12, MyC::cellSize * 13, MyC::size, MyC::size, defaultOnRadioButton ? GREEN : BLACK);
    DrawRectangle(MyC::cellSize * 17, MyC::cellSize * 13, MyC::size, MyC::size, defaultOnRadioButton ? BLACK : GREEN);

    // Drawing Buttons
    back.Draw();

    DrawText("Created by Nikitosik_2006", MyConstants::cellSize * 20, 850, 20, MyConstants::textWhite);
}
