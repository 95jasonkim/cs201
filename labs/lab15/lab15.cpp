/*
Jason Kim
CS201 lab15.cpp
10/5/2020
*/
#include"lab15.hpp"

void partOne(string num)
{
	istringstream in(num);
	int n;
	in >> n;
	if (!in)
	{
		cout << "Error: no integer found" << endl;
	}
	else
	{
		cout << n * n << endl;
	}
}

bool partTwo(string num, int& n)
{
	istringstream in(num);
	in >> n;
	return !in;
}

