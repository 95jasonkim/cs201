/*
Jason Kim
CS201 lab 14 main.cpp
10/2/2020
*/
#include"lab14.hpp"
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	cout << "Enter a word to be shrinked: ";
	string word;
	getline(cin, word);

	shrink(word);

	shrinkTriangle(word);

}