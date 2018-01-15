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

	// Ensure that the current guess and the word are the same length
	for (size_t letter = 0; letter < word.size(); letter++)
	{
		this->guess.push_back('*');
	}

	// Output welcome message
	std::cout << '\'' << this->title;
	std::cout << "\' by Callum John @ItsSeaJay 2018" << '\n';
	std::cout << "Released under the MIT Open Source License." << "\n";
	std::cout << "See https://opensource.org/licenses/MIT for more information.";
	std::cout << '\n';
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
		std::cout << "Round: " << this->round << '\n';
		std::cout << '\n';
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
			// If the guessed letter is part of the word
			if (word.find(letter) != std::string::npos)
			{
				// Add all occurences to the guess
				// TODO: Move this into a function
				for (size_t position = 0; position < word.size(); ++position)
				{
					if (letter == word.at(position))
					{
						guess.at(position) = letter;
					}
				}
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

		// Update round
		++this->round;
		break;
	case Game::Won:
		// TODO: Allow the player to restart the game
		std::cout << '\n';
		std::cout << "You escape the gallows." << '\n';
		std::cout << "For now..." << '\n';

		this->stopped = true;
		break;
	case Game::Over:
		std::cout << '\n';
		std::cout << "The word on the executioner's lips was: " << word;
		std::cout << "Better luck next time!" << '\n';

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
