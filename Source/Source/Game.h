#pragma once

#include <iostream>
#include <string>

class Game
{
public:
	Game();
	~Game();

	void start();
	void update();
	void stop();

	bool isStopped();
private:
	std::string title = "Gallows";
	bool stopped = false;
};
