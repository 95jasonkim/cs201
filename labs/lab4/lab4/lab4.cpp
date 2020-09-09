/*
Jason Kim
CS201 lab4
9/9/2020
*/
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	//code for 1st part
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			cout << "Fizz" << endl;
		}
		else
		{
			cout << i << endl;
		}

	}

	//code for 2nd part

	for (int j = 1; j <= 100; j++)
	{
		if (j % 3 == 0)
		{
			cout << "Fizz ";

		}
		if (j % 5 == 0)
		{
			cout << "Buzz";
		}
		else if (j % 3 != 0)
		{
			cout << j;
		}
		cout << endl;
	}

	return 0;
}