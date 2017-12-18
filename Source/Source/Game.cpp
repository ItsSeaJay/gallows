#include "Game.h"

Game::Game()
{
	// TODO: Finish constructor
}

Game::~Game()
{
	// TODO: Finish destructor
}

void Game::start()
{
	srand(time(0));

	scribe.read();
	word = scribe.getRandomWord();
	std::cout << word;
}

void Game::update()
{

}

void Game::draw()
{

}

void Game::stop()
{
	if (!stopped)
	{
		this->stopped = true;
	}
}

bool Game::hasStopped()
{
	return this->stopped;
}