#pragma once

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <conio.h>

#include "Player.h"
#include "Scribe.h"
#include "Validator.h"

class Game
{
public:
	void start();
	void update();
	void stop();

	bool getStopped() const;

private:
	std::string title = "Gallows";
	std::string word;
	std::string guess;
	std::vector<char> guesses;
	bool stopped = false;
	bool randomise = true;
	int round = 1;

	Player player;
	Scribe scribe;
	Validator validator;

	enum State
	{
		Playing,
		Won,
		Over
	};

	State state = Playing;

	void handleState(State state);
	bool validateGuess(const char& letter) const;
};
