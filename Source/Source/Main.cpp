#include <iostream>
#include "Game.h"

int main(int argc, char* argv[])
{
	Game game;

	game.start();

	while (!game.getStopped())
	{
		game.update();
	}

	game.stop();

	return 0;
}