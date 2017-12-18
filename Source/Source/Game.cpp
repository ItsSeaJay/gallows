#include "Game.h"

Game::Game()
{

}

Game::~Game()
{

}

void Game::start()
{
	scribe.read();
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