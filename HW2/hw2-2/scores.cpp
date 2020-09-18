/*
Jason Kim
CS201 HW2 scores.cpp
9/18/2020
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::find;
using std::stoi;
using std::distance;

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
		cout << "Enter the score: ";
		getline(cin, s);
		int score = stoi(s);
		if (name == "noname" && score == 0)break;
		if (SearchName(name, names) == 1)
		{
			cout << "ERROR: name already exists." << endl;
			break;
		}
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
	cout << endl;
}

void Prompt(vector<string>& names, vector<int>& scores)
{
	cout << "Would you like to: " << endl;
	cout << "1) Add more scores" << endl;
	cout << "2) Print the scores" << endl;
	cout << "3) Search for a name" << endl;
	cout << "4) Search for a score" << endl;
	cout << "Enter the number: ";
	string n;
	getline(cin, n);
	int x = stoi(n);
	string name;
	string score;
	switch (x)
	{
	case 1:
		InputScores(names, scores);
		break;
	case 2:
		Print(names, scores);
		break;
	case 3:
		cout << "Enter a name to search: ";
		getline(cin, name);
		if (SearchName(name, names) == 1)
		{
			int index = distance(names.begin(), find(names.begin(), names.end(), name));
			cout << "The score for " << name << " is " << scores[index] << endl;
		}
		else
		{
			cout << "ERROR: name not found." << endl;
		}

		break;
	case 4:
		
		break;
	default:
		cout << "ERROR: no corresponding action" << endl;
		break;
	}
	cout << endl;
}

int main()
{
	vector<string> names;
	vector<int> scores;
	InputScores(names,scores);
	Print(names, scores);
	while (true)
	{
		Prompt(names, scores);
	}
	return 0;
}