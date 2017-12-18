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
}

void Game::update()
{
	handleState(this->state);
}

void Game::draw()
{
	std::cout << word << '\n';
	std::cout << guess << '\n';
	std::cout << "Choose wisely: ";
	std::cout << '\n';
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

void Game::handleState(State state)
{
	switch (state)
	{
	case Game::playing:
		char letter;

		letter = toupper(_getch());

		if (validateLetter(letter))
		{
			guesses.push_back(letter);
		}
		break;
	case Game::over:
		std::cout << "See you again sometime!" << '\n';
		break;
	default:
		std::cerr << "Error: invalid game state" << '\n';
		break;
	}
}

bool Game::validateLetter(const char& letter)
{
	if (isalpha(letter))
	{
		for (size_t i = 0; i < word.size(); ++i)
		{
			if (word.at(i) == letter)
			{
				return true;
			}
		}
	}

	return false;
}
