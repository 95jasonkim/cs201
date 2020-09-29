/*
Jason Kim
CS201 kelvin.cpp
9/29/2020
*/
#include<iostream>
using std::cin;
using std::cout;
using std::endl;


double ctok(double c)
{
	double k = c + 273.15;
	return k;
}

int main()
{
	double c;
	cout << "Enter a Celsius temperature to convert to Kelvin: ";
	cin >> c;
	double k = ctok(c);
	if (k < 0)
	{
		cout << "Error: not a plausible value" << endl;
	}
	else
	{
		cout << k << '\n';
	}
}