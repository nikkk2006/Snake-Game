#include "mainWindow.h"


Color fieldColor = MyConstants::black;

mainWindow::mainWindow() : screenWidth(2 * C::offset + C::cellSize * C::cellCount),
						   screenHeight(2 * C::offset + C::cellSize * C::cellCount)
{
}

void mainWindow::Draw() {
	ClearBackground(fieldColor);

	DrawRectangleLinesEx(Rectangle{ static_cast<float>(C::offset - 5),
		static_cast<float>(C::offset - 5),
		static_cast<float>(C::cellSize* C::cellCount + 10),
		static_cast<float>(C::cellSize * C::cellCount + 10)}, 5, C::textYellow);

	DrawText("Retro Snake", C::offset - 5, 20, 40, C::textYellow);
	DrawText(TextFormat("Score: %i", game.score), C::offset - 5, C::offset + C::cellSize * C::cellCount + 10, 40, C::textYellow);

	std::string strHighScore = std::to_string(game.highScore);
	int scoreWidth = MeasureText(strHighScore.c_str(), 40);  
	DrawText(strHighScore.c_str(), C::offset + C::cellSize * C::cellCount - scoreWidth + 5, C::offset + C::cellSize * C::cellCount + 10, 40, C::textYellow);

	game.Draw();

}

mainWindow::~mainWindow(){
	CloseWindow();
}

void mainWindow::Update() {
	if (eventTriggered(snakeSpeed)) {
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

