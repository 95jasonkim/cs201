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

bool SearchScore(const int& scoreToFind, const vector<int>& scores)
{
	if (find(scores.begin(), scores.end(), scoreToFind) != scores.end())
	{
		return true;
	}
	else return false;
}

void InputScores(vector<string>& names, vector<int>& scores)
{
	cout << "Enter names and the corresponding scores(Enter noname and 0 to finish)" << endl;
	while (true)
	{
		string name;
		int score;
		cout << "Enter the name: ";
		getline(cin, name);
		if (SearchName(name, names) == 0)
		{
			cout << "ERROR: name already exists." << endl;
			break;
		}
		cout << "Enter the score: ";
		cin >> score;
		if (name == "noname" && score == 0)break;
		names.push_back(name);
		scores.push_back(score);

	}
}


int main()
{
	vector<string> names;
	vector<int> scores;
	InputScores(names,scores);

	return 0;
}