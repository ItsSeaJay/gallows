#include "Scribe.h"

Scribe::Scribe()
{

}

Scribe::~Scribe()
{

}

void Scribe::read()
{
	std::ifstream book;

	book.open(path);

	if (!book.fail())
	{
		std::cout << "Mischief managed";
	}
	else
	{
		std::cerr << "Error: dictionary could not be opened" << '\n';
	}
}

std::string Scribe::getPath()
{
	return this->path;
}

void Scribe::setPath(std::string path)
{
	this->path = path;
}
