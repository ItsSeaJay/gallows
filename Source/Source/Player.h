#pragma once

#include <iostream>
#include <string>

class Player
{
public:
	int getLives();
	void setLives(const int& lives);
	std::string status();
private:
	const int MAX_LIVES = 7;
	int lives = MAX_LIVES;
};

