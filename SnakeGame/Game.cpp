#include "Game.h"


Game::Game(){
	InitAudioDevice();
	eatSound = LoadSound("Sounds/eat.mp3");
	wallSound = LoadSound("Sounds/wall.mp3");
	readHighScore();
}

Game::~Game(){
	UnloadSound(eatSound);
	UnloadSound(wallSound);
	CloseAudioDevice();
}

void Game::Draw(){
	food.Draw();
	snake.Draw();
}

void Game::Update(){

	if (running) {
		snake.Update();
		checkCollisionWithFood();
		checkCollisionWithEdges();
		checkCollisionWithTail();
	}
}

void Game::checkCollisionWithFood(){

	if (Vector2Equals(snake.body[0], food.position)) {
		food.position = food.generateRandomPos(snake.body);
		snake.addSegment = true;
		score++;
		PlaySound(eatSound);
	}
}

void Game::checkCollisionWithEdges(){
	
	if (snake.body[0].x == MyConstants::cellCount || snake.body[0].x == -1) {
		GameOver();
	}
	if (snake.body[0].y == MyConstants::cellCount || snake.body[0].y == -1) {
		GameOver();
	}
}

void Game::checkCollisionWithTail(){

	std::deque<Vector2> headlessBody = snake.body;
	headlessBody.pop_front();

	if (elementInDeque(snake.body[0], headlessBody)) {
		GameOver();
	}
}

void Game::readHighScore(){
	
	std::ifstream inputFile("highScore.txt");

	if (inputFile.is_open()) {
		std::string strData;
		int intValue;

		std::getline(inputFile, strData);
		std::stringstream ss(strData);
		ss >> intValue;

		if (intValue > highScore) {
			highScore = intValue;
		}

		inputFile.close();
	}
}

void Game::saveHighScore(){
	std::ofstream outputFile("highScore.txt");

	if (outputFile.is_open()) {
		outputFile << highScore << std::endl;

		outputFile.close();
	}
}

void Game::GameOver(){
	snake.Reset();
	food.position = food.generateRandomPos(snake.body);
	running = false;

	if (score > highScore) {
		highScore = score;
		saveHighScore();
	}
	score = 0;
	PlaySound(wallSound);
}
