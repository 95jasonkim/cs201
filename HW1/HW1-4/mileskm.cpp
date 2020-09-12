/*
Jason Kim
CS201 HW1 mileskm.cpp
9/11/2020
*/
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	float m;
	float k;
	cout << "Enter miles to be converted to kilometers: ";
	cin >> m;
	k = m * 1.609;
	cout << std::setprecision(3) << std::fixed;
	cout << m << " miles is equal to " << k << " kilometers.";
	
	return 0;
}