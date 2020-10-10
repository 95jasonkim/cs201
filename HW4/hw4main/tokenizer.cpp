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