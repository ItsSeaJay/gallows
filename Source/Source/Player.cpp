#include "Player.h"

int Player::getLives()
{
	return this->lives;
}

void Player::setLives(const int& lives)
{
	this->lives = lives;
}

std::string Player::status() const
{
	std::string display;

	switch (this->lives)
	{
	case 9:
		break;
	case 8:
		display.push_back('\n');
		display.push_back('\n');
		display.push_back('\n');
		display.push_back('\n');
		display.push_back('\n');
		display.push_back('\n');
		display.push_back('\n');
		break;
	case 7:
		break;
	case 6:
		break;
	case 5:
		break;
	case 4:
		break;
	case 3:
		break;
	case 2:
		break;
	case 1:
		break;
	case 0:
		break;
	default:
		std::cerr << "Invalid number of lives on player!";
		break;
	}

	return display;
}
