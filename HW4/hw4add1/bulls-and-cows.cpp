/*
Jason Kim
CS201 hw4 bulls-and-cows.cpp
10/9/2020
*/
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<vector>
using std::vector;
#include<string>
using std::string;
using std::getline;
#include<sstream>
using std::istringstream;

//returns the number of bulls
int bulls(const vector<int>& answer, const vector<int>& guess)
{
	int bull=0;
	for (int i = 0; i < answer.size(); i++)
	{
		if (guess[i] == answer[i])
		{
			bull++;
		}
	}
	return bull;
}

//returns the number of cows
//does not return a correct value if multiple same intgers are guessed
int cows(const vector<int>& answer, const vector<int>& guess)
{
	int cow=0;
	for (int i = 0; i < guess.size(); i++)
	{
		for (int j = 0; j < answer.size(); j++)
		{
			if (guess[i] == answer[j])
			{
				cow++;
			}
		}
	}
	return cow - bulls(answer, guess);
}

int main()
{
	vector<int> answer {1, 2, 3, 4};
	cout << "Try to guess the 4 digit number! Each digit is a different number. Enter a negative number to give up." << endl;
	while (true)
	{
		cout << "Enter your guess: ";
		string guess;
		getline(cin, guess);
		istringstream in(guess);
		int num;
		in >> num;
		if (num < 0)
		{
			cout << "The answer is ";
			for (auto n : answer)
			{
				cout << n;
			}
			cout << endl;
			break;
		}
		if (num > 9999||num<1000)
		{
			cout << "The answer is a 4 digit number, try again." << endl;
			continue;
		}
		vector<int> guessVec;
		guessVec.push_back(num / 1000);
		guessVec.push_back(num % 1000 / 100);
		guessVec.push_back(num % 100 / 10);
		guessVec.push_back(num % 10);
		cout << bulls(answer, guessVec) << " bulls and " << cows(answer, guessVec) << " cows." << endl;
		if (bulls(answer, guessVec) == 4)
		{
			cout << "That is correct!" << endl;
			break;
		}
	}

}