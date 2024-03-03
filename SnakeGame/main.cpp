#include "Food.h"
#include "Snake.h"
#include "Game.h"
#include "functions.h"


extern const Color green = { 173, 204, 96, 255 };
extern const Color darkGreen = { 43, 51, 24, 255 };
extern const Color red = { 191, 42, 57, 255 };

extern const int cellSize = 30;
extern const int cellCount = 25;
extern const int offset = 75;

extern double lastUpdateTime = 0.0;


int main() {

	InitWindow(2 * offset + cellSize * cellCount, 2 * offset + cellSize * cellCount, "Retro Snake");
	SetTargetFPS(60);

	Game game = Game();

	while (WindowShouldClose() == false) {
		BeginDrawing();

		// Updating
		if (eventTriggered(0.15)) {
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
			game.snake.direction = {-1, 0};
			game.running = true;
		}
		if ((IsKeyPressed(KEY_RIGHT) || IsKeyPressed(KEY_D)) && game.snake.direction.x != -1) {
			game.snake.direction = { 1, 0 };
			game.running = true;
		}

		// Drawing
		ClearBackground(green);
		DrawRectangleLinesEx(Rectangle{offset - 5, offset - 5, cellSize * cellCount + 10, cellSize * cellCount + 10 }, 5, darkGreen);
		DrawText("Retro Snake", offset - 5, 20, 40, darkGreen);
		DrawText(TextFormat("Score: %i", game.score), offset - 5, offset + cellSize * cellCount + 10, 40, darkGreen);

		std::string strHighScore = std::to_string(game.highScore);
		int scoreWidth = MeasureText(strHighScore.c_str(), 40);    // width of number
		DrawText(strHighScore.c_str(), offset + cellSize * cellCount - scoreWidth + 5, offset + cellSize * cellCount + 10, 40, darkGreen);

		game.Draw();

		EndDrawing();
	}

	CloseWindow();

	return 0;
}