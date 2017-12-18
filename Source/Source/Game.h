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
	void draw();
	void stop();

	bool hasStopped();

private:
	std::string title = "Gallows";
	bool stopped = false;
};
