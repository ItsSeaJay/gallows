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
		std::cout << "You have " << player.getLives() << " lives remaining.";
		std::cout << '\n' << "Choose wisely: ";

		// Capture input
		letter = _getch();

		std::cout << letter;

		if (validateGuess(letter))
		{
			if (word.find(letter) != std::string::npos)
			{
				this->guess.push_back(letter);
			}
			else
			{
				player.setLives(player.getLives() - 1);
			}
			this->guesses.push_back(letter);
		}

		// Victory condition
		if (this->guess == this->word)
		{
			this->state = Won;
		}

		// Defeat condition
		if (player.getLives() <= 0)
		{
			this->state = Over;
		}
		break;
	case Game::Won:
		// TODO: Allow the player to restart the game
		std::cout << '\n';
		std::cout << "Conglaturations!" << '\n';
		std::cout << "You have completed a great game." << '\n';
		std::cout << "And prooved the justice of our culture." << '\n';
		std::cout << "Now go and rest our heroes!" << '\n';

		_getch();

		this->stopped = true;
		break;
	case Game::Over:
		std::cout << '\n';
		std::cout << "Better luck next time!" << '\n';

		_getch();

		this->stopped = true;
		break;
	default:
		std::cerr << "Error: invalid game state" << '\n';
		break;
	}
}

bool Game::validateGuess(const char& guess) const
{
	if (isalpha(guess))
	{
		if (!validator.search(guess, guesses))
		{
			return true;
		}
		else
		{
			std::cout << "\n" << "You already guessed that letter.";
		}
	}
	else
	{
		std::cout << "\n" << "Guess letters only.";
	}

	return false;
}
