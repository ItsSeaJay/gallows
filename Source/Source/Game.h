#pragma once

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
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

	bool hasStopped();

private:
	std::string title = "Gallows";
	std::string word;
	std::string guess;
	bool stopped = false;

	Scribe scribe;

	enum State
	{
		playing,
		over
	};

	State state = playing;
};
