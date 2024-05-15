#include "mainWindow.h"


Color fieldColor = MyConstants::black;
Color borderColor = MyConstants::textYellow;


mainWindow::mainWindow() : screenWidth(2 * MyC::offset + MyC::cellSize * MyC::cellCount),
						   screenHeight(2 * MyC::offset + MyC::cellSize * MyC::cellCount)
{
}

void mainWindow::Draw() {
	ClearBackground(fieldColor);

	DrawRectangleLinesEx(Rectangle{ static_cast<float>(MyC::offset - 5),
		static_cast<float>(MyC::offset - 5),
		static_cast<float>(MyC::cellSize* MyC::cellCount + 10),
		static_cast<float>(MyC::cellSize * MyC::cellCount + 10)}, 5, borderColor);

	DrawText("Retro Snake", MyC::offset - 5, 20, 40, borderColor);
	DrawText(TextFormat("Score: %i", game.score), MyC::offset - 5, MyC::offset + MyC::cellSize * MyC::cellCount + 10, 40, borderColor);

	std::string strHighScore = std::to_string(game.highScore);
	int scoreWidth = MeasureText(strHighScore.c_str(), 40);  
	DrawText(strHighScore.c_str(), MyC::offset + MyC::cellSize * MyC::cellCount - scoreWidth + 5, MyC::offset + MyC::cellSize * MyC::cellCount + 10, 40, borderColor);

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

