/*
Jason Kim
CS201 lab20
10/21/2020
*/
#define _USE_MATH_DEFINES
#include<cmath>

#include<iostream>
using std::cout;
using std::endl;
#include<iomanip>

void printCos(int angle)
{
	double mycos = cos(angle * M_PI / 180);
	cout << std::setw(3) << angle << "  ";
	cout << std::setw(11) << std::setprecision(8) << std::fixed << mycos << endl;
}

void printExp(int n)
{
	double myexp = exp(n / 10);
	cout << std::setw(3) << n << "  ";
	cout << std::setprecision(8) << std::scientific << myexp << endl;
}

int main()
{
	for (size_t i = 0; i <= 180; i+=5)
	{
		printCos(i);
		//printExp(i);
	}

}