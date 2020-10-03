/*
Jason Kim
CS201 lab 14.cpp
10/2/2020
*/
#include"lab14.hpp"
#include<iostream>
using std::cout;
using std::endl;


void shrink(const string& word)
{
	for (int i = word.size(); i >0; i--)
	{
		cout << word.substr(0,i) << endl;
	}
	cout << endl;
}



void shrinkTriangle(const string& word)
{
	string blank(word.size()/2, ' ');
	for (int i = 0; i <= word.size()/2; i++)
	{
		cout << blank.substr(0,i) <<word.substr(i, word.size() - i * 2) << endl;
	}
	cout << endl;
}

