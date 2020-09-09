/*
Jason Kim
9/4/2020
CS201 Lab3
*/

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	//1st program
	
	int i = 1;
	while (i <= 20) 
		{
			cout << i << endl;
			i++;

	}

	cout << endl;

	//2nd program
	
	int j = 1;
	int k = 1;
		while (j <= 10)
		{
			while (k <= 60)
			{
				cout << "@";
				k++;
			}
			cout << endl;
			j++;
			k = 1;
		}
	

	cout << endl;
	
	//3rd program

	int b = 1;
	int n = 1;
	int m = 1;
		while (b <= 5)
		{
			while (n <= 30)
			{
				cout << "#$";
				n++;
			}
			cout << endl;
			while (m <= 30)
			{
				cout << "$#";
				m++;
			}
			cout << endl;
			b++;
			n = m = 1;

		}
	return 0;
}