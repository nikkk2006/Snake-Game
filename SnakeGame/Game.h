#ifndef GAME_H
#define GAME_H


#include "Snake.h"
#include "Food.h"

class Game{
public:
	Snake snake = Snake();
	Food food = Food(snake.body);
	bool running = true;
	int score = 0;

	Sound eatSound;
	Sound wallSound;

	Game();
	~Game();
	void Draw();
	void Update();
	void checkCollisionWithFood();
	void checkCollisionWithEdges();
	void checkCollisionWithTail();
	void GameOver();
};

#endif // !GAME_H



