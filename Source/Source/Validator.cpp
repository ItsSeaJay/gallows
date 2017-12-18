#include "Validator.h"

Validator::Validator()
{

}

Validator::~Validator()
{

}

bool Validator::vectorContainsChar(const char & term, const std::vector<char>& search) const
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
