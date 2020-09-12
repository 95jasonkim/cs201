/*
Jason Kim
CS201 HW1 grid.cpp
9/11/2020
*/
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int chess[8][8];
void drawgrid()
{
	for (int i =0; i<8;i++)
	{
		for (int l = 1; l <= 17; l++)
		{
			cout << "-";
		}
		cout << endl;
		for (int j = 0; j < 8; j++)
		{
			if (chess[i][j] == 1)
			{
				cout << "|X";
			}
			else if (chess[i][j] == 0)
			{
				cout << "|.";
			}
		}
		cout << "|" << endl;
	}

	for (int l = 1; l <= 17; l++)
	{
		cout << "-";
	}
	cout << endl;
}
int main()
{
	int x, y;
	while (true)
	{
		drawgrid();
		cout << "Enter a negative number to end." << endl;
		cout << "Enter the column(0-7): ";
		cin >> x;
		if (x < 0)break;
		cout << "Enter the row(0-7): ";
		cin >> y;
		if (y < 0)break;
		chess[y][x] = 1;
	}
	return 0;
}