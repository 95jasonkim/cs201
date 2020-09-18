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


void InputNames(vector<string>& names)
{
	
	for (int i = 0; i < 10; i++)
	{
		string name;
		cout << "Please enter a name: ";
		getline(cin, name);
		names.push_back(name);
	}
}

bool DoesNameExist(const string& nameToFind, const vector<string>& names)
{
	if (find(names.begin(), names.end(), nameToFind) != names.end())
	{
		return true;
	}
	else return false;
}

void PrintNames(const vector<string>& names)
{

}

int main(int argc, char **argv)
{
	vector<string> names;
	string nameToFind;
	InputNames(names);
	


	return 0;
}