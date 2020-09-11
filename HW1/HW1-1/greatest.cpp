/*
Jason Kim
CS201 HW1 greatest.cpp
9/11/2020
*/
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	int g=0;
	while (true)
	{
		cout << "Enter a positive integer (type 0 to finish): ";
		int i=0;
		cin >> i;
		if (i == 0) break;
		if (i > g)
		{
			g = i;
		}
	}
	if (g > 0)
	{
		cout << "The greatest integer entered is " << g;
	}
	else
	{
		cout << "No positive integers were entered";
	}
	return 0;
}