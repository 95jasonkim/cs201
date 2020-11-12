/*
Jason Kim
CS201 hw6 shopping
11/11/2020
*/
#include<iostream>
#include<map>
#include<numeric>
#include<string>
using std::string;
using std::map;
using std::cout;
using std::endl;
using std::cin;
using std::getline;

struct Record {
	double unitPrice;
	int units;
};

map<Record, string> stock{
		{{2.49,13},"Pepsi"},
		{{50.00,13},"Giftcard"},
		{{99.99,13},"Calculator"},
		{{1.99,13},"Notebook"},
		{{0.99,13},"Pen"}
};

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


int main()
{
	string input;
	cout << "Welcome to our store! Type in \"\help\"\ to find the list of commands." << endl;
	while (true)
	{
		cout << "Type in a command!";
		input = getInput();
		if (input == "help")
		{
			//printHelp();
		}
	}
}