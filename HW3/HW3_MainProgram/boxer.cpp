/*
Jason Kim
CS 201 boxer.cpp
9/28/2020
*/
#include"boxer.hpp"

void boxer(string word, int box)
{
	for (int i = 1; i <= box; i++)
	{
		cout << ast(word.size() + 2 + 2 * box) << endl;
	}
	string space;
	space.resize(word.size() + 2, ' ');
	cout << ast(box) << space << ast(box) << endl;
	cout << ast(box) << " " << word << " " << ast(box) << endl;
	cout << ast(box) << space << ast(box)<<endl;
	for (int i = 1; i <= box; i++)
	{
		cout << ast(word.size() + 2 + 2 * box)<<endl;
	}
}

string ast(int n)
{
	string ast;
	ast.resize(n, '*');
	return ast; 
}