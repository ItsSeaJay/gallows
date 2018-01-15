#pragma once

#include <string>

class Player
{
public:
	Player();
	~Player();

	int getLives();
	void setLives(int lives);
private:
	int lives = 9;
	std::string name = "John";
};

