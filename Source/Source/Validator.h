#pragma once

#include <string>
#include <vector>

class Validator
{
public:
	Validator();
	~Validator();

	bool vectorContainsChar(const char& term, const std::vector<char>& search) const;
};
