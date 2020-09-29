/*
Jason Kim
CS201 lab12 userInput.cpp
9/28/2020
*/
#include"userInput.hpp"
using std::vector;
using std::string;
#include<iostream>
using std::cin;

void getUserStrings(vector<string>& words)
{
	while (true)
	{
		string word;
		getline(cin, word);
		if (word == "end")break;
		words.push_back(word);
	}
}

bool hasChar(const string& str, const char& c)
{
	return str.find(c) != std::string::npos;
}