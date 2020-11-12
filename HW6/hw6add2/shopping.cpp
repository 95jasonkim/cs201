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
#include<iterator>
#include<algorithm>
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
		{"Pepsi",{2.49,110}},
		{"Giftcard",{50.00,11}},
		{"Calculator",{99.99,5}},
		{"Notebook",{1.99,50}},
		{"Pen",{0.99,44}}
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

void printMap(const map<string, Record>& list)
{
	for (auto [k, v] : list)
	{
		cout << k << "($" << v.unitPrice << "): " << v.units << endl;
	}
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
				printMap(cart);
				cout << "The total is: $" << std::fixed<< std::setprecision(2)<< priceTotal(cart) << endl;
			}
		}
		else if (input == "add")
		{
			cout << "This is our current stock: " << endl;
			printMap(stock);
			cout << "What would you like to buy?" << endl;
			string item = getInput();
			auto it = stock.find(item);
			if (it == stock.end())
			{
				cout << "We could not find what you are looking for." << endl;
			}
			else
			{
				if (it->second.units == 0)
				{
					cout << "That item is out of stock." << endl;
				}
				else
				{
					cout << "How many would you like to add?" << endl;
					string n = getInput();
					int num = std::stoi(n);
					if (it->second.units < num)
					{
						cout << "There are not that many items available." << endl;
					}
					else
					{
						cart[item].units += num;
						stock[item].units -= num;
						cart[item].unitPrice = stock[item].unitPrice;
						cout << "Item successfully added!" << endl;
					}
				}
			}
		}
		else if (input == "remove")
		{
			if (cart.empty())
			{
				cout << "Your cart is empty." << endl;
			}
			else
			{
				cout << "Your cart has: " << endl;
				printMap(cart);
				cout << "The total is: $" << std::fixed << std::setprecision(2) << priceTotal(cart) << endl;
				cout << "What would you like to remove?" << endl;
				string item = getInput();
				auto it = cart.find(item);
				if (it == cart.end())
				{
					cout << "We could not find what you are looking for." << endl;
				}
				else
				{
					cout << "How many would you like to remove?" << endl;
					string n = getInput();
					int num = std::stoi(n);
					if (it->second.units <= num)
					{
						cout << "All of those items have been removed." << endl;
						cart.erase(item);
					}
					else
					{
						cout << n << " of " << item << " have been removed." << endl;
						cout << "You have " << it->second.units - num << " of " << item<<" left." << endl;
						cart[item].units -= num;
					}
				}

			}

		}
		else if (input == "buy")
		{
			if (cart.empty())
			{
				cout << "Your cart is empty." << endl;
			}
			else
			{
				cout << "Your cart has: " << endl;
				printMap(cart);
				cout << "The total is: $" << std::fixed << std::setprecision(2) << priceTotal(cart) << endl;
				cout << "Would you like to finish and pay?(yes or no)" << endl;
				input = getInput();
				if (input == "yes")
				{
					cout << "Thank you for your service!" << endl;
					break;
				}
			}
		}
		else
		{
			cout<<"Error: could not find corresponding command." << endl;
		}
		cout << endl;
	}
}