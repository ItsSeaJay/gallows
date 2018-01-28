#include "Player.h"

int Player::getLives()
{
	return this->lives;
}

void Player::setLives(const int& lives)
{
	this->lives = lives;
}

std::string Player::status()
{
	std::string display = "";

	switch (this->lives)
	{
	case 7:
		display += "-------- \n";
		display += "| \n";
		display += "| \n";
		display += "| \n";
		display += "| \n";
		display += "| \n";
		display += "|\\ \n";
		display += "======== \n";
		break;
	case 6:
		display += "-------- \n";
		display += "|      o\n";
		display += "| \n";
		display += "| \n";
		display += "| \n";
		display += "| \n";
		display += "|\\ \n";
		display += "======== \n";
		break;
	case 5:
		display += "-------- \n";
		display += "|      o \n";
		display += "|      | \n";
		display += "|      | \n";
		display += "| \n";
		display += "| \n";
		display += "|\\ \n";
		display += "======== \n";
		break;
	case 4:
		display += "-------- \n";
		display += "|      o \n";
		display += "|     /| \n";
		display += "|      | \n";
		display += "| \n";
		display += "| \n";
		display += "|\\ \n";
		display += "======== \n";
		break;
	case 3:
		display += "-------- \n";
		display += "|      o \n";
		display += "|     /|\ \n";
		display += "|      | \n";
		display += "| \n";
		display += "| \n";
		display += "|\\ \n";
		display += "======== \n";
		break;
	case 2:
		display += "-------- \n";
		display += "|      o \n";
		display += "|     <|\ \n";
		display += "|      | \n";
		display += "|     / \n";
		display += "| \n";
		display += "|\\ \n";
		display += "======== \n";
		break;
	case 1:
		display += "-------- \n";
		display += "|      o \n";
		display += "|     <|> \n";
		display += "|      | \n";
		display += "|     / \ \n";
		display += "| \n";
		display += "|\\ \n";
		display += "======== \n";
		break;
	case 0:
		display += "-------- \n";
		display += "|      I\n";
		display += "|      o  \n";
		display += "|     <|>\n";
		display += "|      |  \n";
		display += "|     / \ \n";
		display += "|\\ \n";
		display += "======== \n";
		break;
	default:
		std::cerr << "Invalid number of lives on player!";
		break;
	}

	return display;
}
