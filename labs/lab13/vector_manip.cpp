/*
Jason Kim
CS201 lab13
9/30/2020
*/
#include "vector_manip.hpp"


void firstLetterChange(std::vector<std::string>& strVec, const char& c)
{
	for (auto& word : strVec)
	{
		word[0] = c;
	}
}

void addUserStrings(std::vector<std::string>& strVec, const std::string sentinel)
{
	while(true)
	{
		std::string word;
		std::cin >> word;
		if (word == sentinel)break;
		strVec.push_back(word);
	}

}