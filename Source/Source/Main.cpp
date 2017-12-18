#include <iostream>
#include "Game.h"

int main(int argc, char** argv[])
{
	Game game;

	game.start();

	while (game.isPlaying())
	{
		game.update();
	}

	return 0;
}