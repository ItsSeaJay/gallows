#pragma once

#include <iostream>
#include <string>

class Player
{
public:
	int getLives();
	void setLives(const int& lives);
	std::string status() const;
private:
	const int MAX_LIVES = 9;
	int lives = MAX_LIVES;
};

