/*
Jason Kim
CS201 Lab2
9/2/2020
Code for Lab2 using input and output
*/
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;
using std::setw;
using std::setfill;

int main()
{
	// Code for 1st part
	/*
	int n;
	cout << "Type an integer ";
	cin >> n;
	cout << "The square of the next integer is " << (n + 1)*(n+1) << endl;
	*/

	//Code for 2nd part
	
	/*int m, d, y;
	cout << "Type the month, day, and year of your birthday as integers in that order ";
	cin >> m >> d >> y;

	cout << "Your birthday is " << m << "/" << d << "/" << y << endl;
	*/
	
	//Code for 3rd part
	int m, d, y;
	cout << "Type the month, day, and year of your birthday as integers in that order ";
	cin >> m >> d >> y;
	

	cout << "Your birthday is ";
	cout << y << "-";
	cout << setw(2) << setfill('0') << m << "-";
	cout << setw(2) << setfill('0') << d << endl;
	
	return 0;
}