/*
Jason Kim
CS201 lab7
9/16/2020
*/
#include "intio.hpp"
#include <iostream>
using std::cout;
using std::endl;

//first code, input three numbers using getInt and print those three in an alligned column using putInt
void first()
{
	int x[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter an integer: ";
		x[i]= getInt();
	}
	for (int i = 0; i < 3; i++)
	{
		putInt(x[i], 10);
		cout << endl;
	}
}
//second code, input numbers until inputed zero and print the sum of all numbers
void second()
{
	int sum = 0;
	while (true)
	{
		cout << "Enter an integer(enter 0 to finish): ";
		int x = getInt();
		sum = sum + x;
		if (x == 0)break;
	}
	cout << "The sum of all the numbers is: ";
	putInt(sum, 10);
}

//third code inputs numbers until inputed zero and prints the smallest number inputed
void third()
{
	cout << "Enter an integer(enter 0 to finish): ";
	int s = getInt();
	if (s != 0)
	{
		while (true)
		{
			cout << "Enter an integer(enter 0 to finish): ";
			int x = getInt();
			if (x == 0)break;
			if (x < s)
			{
				s = x;
			}
		}
	}
	cout << "The smallest integer is: ";
	putInt(s, 10);

}

int main()
{
	//first();
	//second();
	//third();

	return 0;
}