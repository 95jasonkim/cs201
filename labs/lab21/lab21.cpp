/*
Jason Kim
CS201 lab21
10/23/2020
*/
#include "truncstruct.hpp"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<string>
using std::getline;
using std::string;

int main()
{
	cout << "Type in some text: " << endl;
	string s;
	getline(cin, s);
	cout << "Type in a number: " << endl;
	string n;
	getline(cin, n);
	size_t num = std::stoi(n);
	cout << "Text now truncated: "<<endl;
	cout << trunc(StringInfo { s,num }).str << endl;
}