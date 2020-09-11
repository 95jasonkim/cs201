/*
Jason Kim
CS201 HW1
9/11/2020
*/
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;


int main()
{
	cout << "Type in a positive integer. " << endl;
	int x;
	cin >> x;
	if (x > 0)
	{
		for (int i = 1; i <= x; i++)
		{
			for (int l = x-i; l > 0; l--)
			{
				cout << " ";
			}
			for (int j = 1; j < i * 2; j++)
			{
				cout << "#";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "ERROR - That is not a positive integer." << endl;
	}

	return 0;
}