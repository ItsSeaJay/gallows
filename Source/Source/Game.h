#pragma once

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <conio.h>
#include "Scribe.h"
#include "Validator.h"

class Game
{
public:
	Game();
	~Game();

	void start();
	void update();
	void draw();
	void stop();

	bool hasStopped() const;

private:
	std::string title = "Gallows";
	std::string word;
	std::string guess;
	std::vector<char> guesses;
	bool stopped = false;

	Scribe scribe;
	Validator validator;

	enum State
	{
		playing,
		won,
		over
	};

	State state = playing;

	void handleState(State state);
	bool validateGuess(const char& letter) const;
};
