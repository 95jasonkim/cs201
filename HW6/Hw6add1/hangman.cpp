/*
Jason Kim
CS201 Hw6 hangman
11/11/2020
*/
#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<vector>
#include<iterator>
using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::map;

char getGuess()
{
	cout << "Type in your letter guess!" << endl;
	string guess;
	std::getline(std::cin, guess);
	return std::toupper(guess[0]);
}

vector<int> tryGuess(const string& answer, char guess)
{
	vector<int> ind;
	for (int i =0;i<answer.size();i++)
	{
		if (answer[i] == guess)
		{
			ind.push_back(i);
		}
	}
	return ind;
}

int main()
{
	string answer = "ALASKA";
	string guess;
	for (auto c : answer)
	{
		guess += "-";
	}
	map<char, int> abc;
	vector<string> chances{ "head","body","right arm","left arm",
		"right leg","left leg","right hand","left hand","right foot","left foot" };
	cout << "Play Hangman! You have 10 guesses." << '\n'<<endl;
	cout << guess << endl;
	while (true)
	{
		char g = getGuess();
		if (abc[g] == 1)
		{
			cout << "You have already tried this letter! Try again." << endl;
			continue;
		}
		abc[g] = 1;
		auto ind = tryGuess(answer, g);
		if (ind.empty())
		{

		}
	}
}