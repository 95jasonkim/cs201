/*
Jason Kim
CS201 hw2 money.cpp
9/18/2020
*/
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
using std::cout;
using std::endl;
using std::cin;
using std::string;


int main()
{
	cout << "How many pennies do you have? ";
	int penny;
	cin >> penny;
	cout << "How many nickels do you have? ";
	int nickel;
	cin >> nickel;
	cout << "How many dimes do you have? ";
	int dime;
	cin >> dime;
	cout << "How many quarters do you have? ";
	int quarter;
	cin >> quarter;
	cout << "How many one-dollar coins do you have? ";
	int one;
	cin >> one;
	int money = penny + 5 * nickel + 10 * dime + 25 * quarter + 100 * one;

	if (penny == 1) cout << "You have 1 penny." << endl;
	else cout << "You have " << penny << " pennies." << endl;
	if (nickel == 1) cout << "You have 1 nickel." << endl;
	else cout << "You have " << nickel << " nickels." << endl;
	if (dime == 1) cout << "You have 1 dime." << endl;
	else cout << "You have " << dime << " dimes." << endl;
	if (quarter == 1) cout << "You have 1 quarter." << endl;
	else cout << "You have " << quarter << " quarters." << endl;
	if (one == 1) cout << "You have 1 one-dollar coin." << endl;
	else cout << "You have " << one << " one-dollar coins." << endl;
	cout << "Your total amount is $" << money / 100 << ".";
	cout <<std::setfill('0')<<std::setw(2)<<money % 100;

	return 0;
}
