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
using std::stoi;

bool SearchName(const string& name, const vector<string>& names)
{
	if (find(names.begin(), names.end(), name) != names.end())
	{
		return true;
	}
	else return false;
}

bool SearchScore(const int& score, const vector<int>& scores)
{
	if (find(scores.begin(), scores.end(), score) != scores.end())
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
		string s;
		cout << "Enter the name: ";
		getline(cin, name);
		/*if (SearchName(name, names) == 0)
		{
			cout << "ERROR: name already exists." << endl;
			break;
		}*/
		cout << "Enter the score: ";
		getline(cin, s);
		int score = stoi(s);
		if (name == "noname" && score == 0)break;
		names.push_back(name);
		scores.push_back(score);
	}
	cout << endl;
}

void Print(const vector<string>& names, const vector<int>& scores)
{
	for (int i = 0; i < names.size(); i++)
	{
		cout << "Name: " << names[i] << " Score: " << scores[i] << endl;
	}
}

int main()
{
	vector<string> names;
	vector<int> scores;
	InputScores(names,scores);
	Print(names, scores);

	return 0;
}