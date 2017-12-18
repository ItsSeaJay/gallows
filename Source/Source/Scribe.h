#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Scribe
{
public:
	Scribe();
	~Scribe();

	void read();

	std::string getPath();
	void setPath(std::string path);

private:
	std::vector<std::string> dictionary;
	std::string path = "Data/dictionary.txt";
};
