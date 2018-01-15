#pragma once

#include <string>
#include <vector>

class Validator
{
public:
	Validator();
	~Validator();

	bool search(const char& term, const std::vector<char>& search) const;
};
