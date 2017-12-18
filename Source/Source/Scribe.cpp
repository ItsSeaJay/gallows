#include "Scribe.h"

Scribe::Scribe()
{

}

Scribe::~Scribe()
{

}

void Scribe::read()
{
	std::ifstream book(path);

	if (book.is_open())
	{
		std::string line;

		while (getline(book, line))
		{
			if (line != "")
			{
				dictionary.push_back(line);
			}
		}

		book.close();
	}
	else
	{
		std::cerr << "Error: dictionary could not be opened" << '\n';
	}
}

std::string Scribe::getRandomWord()
{
	return dictionary.at(rand() % dictionary.size());
}

std::string Scribe::getPath()
{
	return this->path;
}

void Scribe::setPath(std::string path)
{
	this->path = path;
}
