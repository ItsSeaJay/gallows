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
	if (randomise)
	{
		srand(time(0));
	}
	else
	{
		srand(0);
	}

	scribe.read();
	word = scribe.getRandomWord();
}

void Game::update()
{
	handleState(this->state);
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
	case Game::Playing:
		char letter;
		std::cout << '\n';
		std::cout << word << '\n';
		std::cout << guess << '\n';

		for (size_t letter = 0; letter < guesses.size(); ++letter)
		{
			std::cout << guesses.at(letter);
		}

		std::cout << '\n';
		std::cout << "Choose wisely: ";

		letter = toupper(_getch());

		if (validateGuess(letter))
		{
			guesses.push_back(letter);
		}

		if (this->guess == this->word)
		{
			this->state = Won;
		}
		break;
	case Game::Won:
		std::cout << "Conglaturations! ";
		break;
	case Game::Over:
		std::cout << "See you again sometime!" << '\n';
		break;
	default:
		std::cerr << "Error: invalid game state" << '\n';
		break;
	}
}

bool Game::validateGuess(const char& guess) const
{
	if (!validator.search(guess, guesses))
	{
		if (isalpha(guess))
		{
			return true;
		}
	}

	return false;
}
