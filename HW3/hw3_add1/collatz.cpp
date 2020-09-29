/*
Jason Kim
CS201 collatz.cpp
9/29/2020
*/
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<vector>
using std::vector;


int main()
{
	while (true)
	{
		cout << "Enter a positive integer(enter 0 to end): ";
		int n;
		cin >> n;
		if (n == 0)break;
		if (n < 0)
		{
			cout << "Please enter a positive integer." << endl;
			continue;
		}
		vector<int> collatz{ n };
		while (n != 1)
		{
			if (n % 2 == 0)
			{
				n = n / 2;
				collatz.push_back(n);
			}
			else
			{
				n = 3 * n + 1;
				collatz.push_back(n);
			}
		}
		cout << "The collatz sequence is: " << endl;
		for (int i = 0; i < collatz.size(); i++)
		{
			cout << collatz[i] << " ";
		}
		cout << endl;
	}

	return 0;
}
