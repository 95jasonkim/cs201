/*
Jason Kim
CS201 lab10
9/23/2020
*/
#include"lab10.hpp"

bool isDiv3(int n)
{
	if (n % 3 == 0) return true;
	else return false;
}

int main()
{
	for (int i = 1; i <= 40; i++)
	{
		if (isDiv3(i))
		{
			cout << i << " is divisble by 3." << endl;
		}
	}
	return 0;
}