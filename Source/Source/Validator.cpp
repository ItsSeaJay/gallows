#include "Validator.h"

Validator::Validator()
{
	// TODO: Finish constructor
}

Validator::~Validator()
{
	// TODO: Finish destructor
}

bool Validator::search(const char& term, const std::vector<char>& search) const
{
	for (int currentChar = 0; currentChar < search.size(); ++currentChar)
	{
		if (search.at(currentChar) == term)
		{
			return true;
		}
	}

	return false;
}
