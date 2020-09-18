/*
Jason Kim
CS201 HW2 scores.cpp
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

bool SearchName(const string& nameToFind, const vector<string>& names)
{
	if (find(names.begin(), names.end(), nameToFind) != names.end())
	{
		return true;
	}
	else return false;
}


int main()
{
	vector<string> names;
	vector<int> scores;

	return 0;
}