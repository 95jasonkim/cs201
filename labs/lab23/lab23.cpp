/*
Jason Kim
CS201 lab23
10/28/2020
*/
#include<iostream>
#include<map>
#include<string>
using std::pair;
using std::map;
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::getline;

int main()
{
	map<string, int> m;
	m["Apple"] = 30;
	m["Peach"] = 222;
	m["Kiwi"] = 123;
	m["Grape"] = 44;
	m["Berry"] = 1;
	m.erase("Berry");
	for (const auto& [k,v] : m)
	{
		cout << "Key = " << k << ", Value = " << v << endl;
	}
	cout << endl;
	cout << "Enter a Key to search for: ";
	string mykey;
	getline(cin, mykey);
	if (m.count(mykey) == 0)
	{
		cout << "Key does not exist." << endl;
	}
	else
	{
		cout << "Value for " << mykey << " = " << m.at(mykey) << endl;
	}
}