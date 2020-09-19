/*
Jason Kim
CS201 lab8
9/18
*/
#include"lab8.hpp"
#include"intio.hpp"


int doInput()
{
	return getInt();
}

int compute(int n)
{
	//return n * n; returns the square of n
	
	//returns the number of divisors n has that is less than n
	if (n <= 0) return 0;
	vector<int> div;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			if(n/i==i) div.push_back(i);
			else
			{
				div.push_back(i);
				div.push_back(n / i);
			}
		}
	}
	return div.size() - 1;
}

