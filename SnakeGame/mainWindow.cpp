#include "mainWindow.h"


mainWindow::mainWindow() : screenWidth(2 * offset + cellSize * cellCount),
						   screenHeight(2 * offset + cellSize * cellCount),
						   title("Retro Snake")
{
	InitWindow(screenWidth, screenHeight, title);
	SetTargetFPS(60);
}

void mainWindow::Draw() {
	ClearBackground(green);

	DrawRectangleLinesEx(Rectangle{ static_cast<float>(offset - 5),
		static_cast<float>(offset - 5),
		static_cast<float>(cellSize* cellCount + 10),
		static_cast<float>(cellSize * cellCount + 10)}, 5, darkGreen);

	DrawText("Retro Snake", offset - 5, 20, 40, darkGreen);
	DrawText(TextFormat("Score: %i", game.score), offset - 5, offset + cellSize * cellCount + 10, 40, darkGreen);

	std::string strHighScore = std::to_string(game.highScore);
	int scoreWidth = MeasureText(strHighScore.c_str(), 40);  
	DrawText(strHighScore.c_str(), offset + cellSize * cellCount - scoreWidth + 5, offset + cellSize * cellCount + 10, 40, darkGreen);

	game.Draw();

}

mainWindow::~mainWindow(){
	CloseWindow();
}

void mainWindow::Update() {
	if (eventTriggered(speed)) {
		game.Update();
	}

	if ((IsKeyPressed(KEY_UP) || IsKeyPressed(KEY_W)) && game.snake.direction.y != 1) {
		game.snake.direction = { 0, -1 };
		game.running = true;
	}
	if ((IsKeyPressed(KEY_DOWN) || IsKeyPressed(KEY_S)) && game.snake.direction.y != -1) {
		game.snake.direction = { 0, 1 };
		game.running = true;
	}
	if ((IsKeyPressed(KEY_LEFT) || IsKeyPressed(KEY_A)) && game.snake.direction.x != 1) {
		game.snake.direction = { -1, 0 };
		game.running = true;
	}
	if ((IsKeyPressed(KEY_RIGHT) || IsKeyPressed(KEY_D)) && game.snake.direction.x != -1) {
		game.snake.direction = { 1, 0 };
		game.running = true;
	}
}

