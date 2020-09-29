/*
Jason Kim
CS201 kelvin.cpp
9/29/2020
*/
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

/*original ctok function
double ctok(double c)
{
	int k = c + 273.15; // k needs to be a double as well or the .15 will be excluded
	return int; // is not returning anything, should return k
}
*/

double ctok(double c)
{
	double k = c + 273.15;
	return k;
}

/*original main function
int main()
{
	double c = 0; // no need to set c as 0
	cin >> d; // is placing in d instead of c
	double k = ctok("c"); // no "" needed
	Cout << k << '/n'; // cout should not be capitalized and line break is \n
}
*/

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