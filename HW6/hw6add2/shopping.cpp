/*
Jason Kim
CS201 hw6 shopping
11/11/2020
*/
#include<iostream>
#include<map>
#include<numeric>
#include<iomanip>
#include<string> 
using std::pair;
using std::string;
using std::map;
using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::accumulate;

struct Record {
	double unitPrice;
	int units;
};

map<string, Record> stock{
		{"Pepsi",{2.49,13}},
		{"Giftcard",{50.00,13}},
		{"Calculator",{99.99,13}},
		{"Notebook",{1.99,13}},
		{"Pen",{0.99,13}}
};

map<string, Record> cart;

string getInput()
{
	string input;
	getline(cin, input);
	return input;
}

void printHelp()
{
	cout << "help // lists available commands" << endl;
	cout << "cart // brings up your cart" << endl;
	cout << "add // choose an item to add to the cart" << endl;
	cout << "remove // choose an item to remove from your cart" << endl;
	cout << "buy // finish shopping and go to purchase" << endl;
}

double priceTotal(const map<string, Record>& list)
{
	double total=0.0;
	for (auto [k, v] : list)
	{
		total += v.units * v.unitPrice;
	}
	return total;
}


int main()
{
	string input;
	cout << "Welcome to our store! Type in \"\help\"\ to find the list of commands." << endl;
	while (true)
	{
		cout << "Type in a command!" << endl;
		input = getInput();
		cout << endl;
		if (input == "help")
		{
			printHelp();
		}
		else if (input == "cart")
		{
			if (cart.empty())
			{
				cout << "Your cart is empty." << endl;
			}
			else
			{
				cout << "Your cart has: " << endl;
				for (auto [k,v] : cart)
				{
					cout << k << "($"<<v.unitPrice<<"): " << v.units << endl;
				}
				cout << "The total is: $" << std::fixed<< std::setprecision(2)<< priceTotal(cart) << endl;
			}
		}
		else
		{
			cout<<"Error: could not find corresponding command." << endl;
		}
		cout << endl;
	}
}