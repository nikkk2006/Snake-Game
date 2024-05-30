#include "MainSettingsWindow.h"


extern bool defaulWhiteTheme;

bool defaultOnRadioButton = true;
bool defaultWhiteTheme = true;

MainSettingsWindow::MainSettingsWindow() : 
    screenWidth(2 * MyC::offset + MyC::cellSize * MyC::cellCount),
    screenHeight(2 * MyC::offset + MyC::cellSize * MyC::cellCount)
{}

MainSettingsWindow::~MainSettingsWindow() {
    CloseWindow();
}

bool MainSettingsWindow::IsOnRadioButtonPressed() {
    return CheckCollisionPointRec(GetMousePosition(), { MyC::cellSize * 12, MyC::cellSize * 12, MyC::size, MyC::size }) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}

bool MainSettingsWindow::IsOffRadioButtonPressed() {
    return CheckCollisionPointRec(GetMousePosition(), { MyC::cellSize * 17, MyC::cellSize * 12, MyC::size, MyC::size }) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}

bool MainSettingsWindow::IsButtonBackPressed() {
    return CheckCollisionPointRec(GetMousePosition(), back.button) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}

bool MainSettingsWindow::IsButtonControlsPressed() {
    return CheckCollisionPointRec(GetMousePosition(), controls.button) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}

bool MainSettingsWindow::IsDarkThemeRadioButtonPressed(){
    return CheckCollisionPointRec(GetMousePosition(), { MyC::cellSize * 12, MyC::cellSize * 18.5, MyC::size, MyC::size }) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}

bool MainSettingsWindow::IsWhiteThemeRadioButtonPressed() {
    return CheckCollisionPointRec(GetMousePosition(), { MyC::cellSize * 17, MyC::cellSize * 18.5, MyC::size, MyC::size }) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}

void MainSettingsWindow::Update() {
    if (IsOnRadioButtonPressed()) {
        defaultOnRadioButton = true;
    }
    if (IsOffRadioButtonPressed()) {
        defaultOnRadioButton = false;
    }

    if (IsDarkThemeRadioButtonPressed()) {
        defaultWhiteTheme = false;
    }
    if (IsWhiteThemeRadioButtonPressed()) {
        defaultWhiteTheme = true;
    }
}

void MainSettingsWindow::Draw() {
    ClearBackground((defaultWhiteTheme == true) ? MyC::antiFlashWhite : MyC::black);

    DrawRectangleLinesEx(Rectangle{ static_cast<float>(5),
static_cast<float>(5),
static_cast<float>(screenWidth - 10),
static_cast<float>(screenHeight - 10) }, 4, (defaultWhiteTheme == true) ? MyC::frenchGray : MyC::textYellow);

    DrawText("settings", MyConstants::cellSize * 12.5, 10, 40, defaultWhiteTheme  ? MyC::frenchGray : MyC::textYellow);
    DrawText("sounds:", MyConstants::cellSize * 12.5, 200, 40, defaultWhiteTheme  ? MyC::frenchGray : MyC::textYellow);
    DrawText("On", MyConstants::cellSize * 11.5, 280, 40, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
    DrawText("Off", MyConstants::cellSize * 16.5, 280, 40, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
    DrawText("theme:", MyConstants::cellSize * 13.0, 410, 40, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
    DrawText("Dark", MyConstants::cellSize * 9.5, 490, 40, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
    DrawText("White", MyConstants::cellSize * 16.5, 490, 40, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);

    // Drawing radio buttons for sounds(On, Off)
    DrawRectangle(MyC::cellSize * 12, MyC::cellSize * 12, MyC::size, MyC::size, defaultOnRadioButton ? GREEN : defaultWhiteTheme ? MyC::slateGray : BLACK);
    DrawRectangle(MyC::cellSize * 17, MyC::cellSize * 12, MyC::size, MyC::size, defaultOnRadioButton ? defaultWhiteTheme ? MyC::slateGray : BLACK : GREEN);
    DrawRectangle(MyC::cellSize * 12, MyC::cellSize * 18.5, MyC::size, MyC::size, defaultWhiteTheme ? defaultWhiteTheme ? MyC::slateGray : BLACK : GREEN);
    DrawRectangle(MyC::cellSize * 17, MyC::cellSize * 18.5, MyC::size, MyC::size, defaultWhiteTheme ? GREEN : defaultWhiteTheme ? MyC::slateGray : BLACK);

    // Drawing Buttons
    back.Draw();
    controls.Draw();

    DrawText("Created by Nikitosik_2006", MyConstants::cellSize * 20, 850, 20, defaultWhiteTheme ? MyC::frenchGray : MyC::textYellow);
}
