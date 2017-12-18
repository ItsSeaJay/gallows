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
}

void Game::update()
{
	word = scribe.getRandomWord();
}

void Game::draw()
{
	std::cout << word;
}

void Game::stop()
{
	if (!stopped)
	{
		this->stopped = true;
	}
}

bool Game::hasStopped() const
{
	return this->stopped;
}