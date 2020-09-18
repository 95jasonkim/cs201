/*
Jason Kim
CS201 HW2 names.cpp
9/18/2020
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::find;

//Inputs 10 names from the user and stores in a string vector
void InputNames(vector<string>& names)
{
	
	for (int i = 0; i < 10; i++)
	{
		string name;
		cout << "Please enter a name: ";
		getline(cin, name);
		names.push_back(name);
	}

	cout << endl;
}

//Searches vector for a name and returns true or false
bool DoesNameExist(const string& nameToFind, const vector<string>& names)
{
	if (find(names.begin(), names.end(), nameToFind) != names.end())
	{
		return true;
	}
	else return false;
}

//Prints the names in the vector
void PrintNames(const vector<string>& names)
{
	for (int i = 0; i < names.size(); i++)
	{
		cout << names[i] << endl;
	}
}

//Makes all the names in the vector backwards
void BackwardNames(vector<string>& names)
{
	for (int i = 0; i < names.size(); i++)
	{
		reverse(names[i].begin(), names[i].end());
	}
	cout << "All the names in the list are now backwards." << endl;
}

int main(int argc, char **argv)
{
	vector<string> names;
	string nameToFind;
	InputNames(names);
	//BackwardNames(names);
	//PrintNames(names);
	
	return 0;
}