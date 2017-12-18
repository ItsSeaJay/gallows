#pragma once

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <conio.h>
#include "Scribe.h"

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

	enum State
	{
		playing,
		over
	};

	State state = playing;

	void handleState(State state);
	bool validateLetter(const char& letter);
};
