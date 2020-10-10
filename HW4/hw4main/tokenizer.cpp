/*
Jason Kim
CS201 hw4 tokenizer.cpp
10/9/2020
*/
#include"tokenizer.hpp"

bool ReadLine(string& str)
{
	cout << "Enter a line of text: ";
	getline(cin, str);
	return !str.empty();
}

unsigned StringToTokensWS(const string& input, vector<string>& tokens)
{
	istringstream in(input);
	string token;
	int count=0;
	while (in)
	{
		in >> token;
		tokens.push_back(token);
		count++;
	}
	tokens.push_back("");
	return count;
}