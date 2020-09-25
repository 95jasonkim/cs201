/*
Jason Kim
CS201 lab10
9/23/2020
*/
#include"lab10.hpp"

bool isDiv3(int n)
{
	return n % 3 == 0;
	//if (n % 3 == 0) return true;
	//else return false;
}

bool isADivB(int a, int b)
{
	return a % b == 0;
	//if (a % b == 0)return true;
	//else return false;
}

void printDiv(int a, int b)
{
	for (int i = 1; i <= a; i++)
	{
		if (isADivB(i,b))
		{
			cout << i << " is divisble by " << b << "." << endl;
		}
	}
}

int main()
{
	/*for loop for part one 
	for (int i = 1; i <= 40; i++)
	{
		if (isDiv3(i))
		{
			cout << i << " is divisble by 3." << endl;
		}
	}
	*/

	printDiv(40, 3);

	return 0;
}