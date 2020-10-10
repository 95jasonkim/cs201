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
	return 0;
}

//returns the number of cows
int cows(const vector<int>& answer, const vector<int>& guess)
{
	return 0;
}

int main()
{
	vector<int> answer {1, 2, 3, 4};
	cout << "Try to guess the 4 digit number! Enter a negative number to give up." << endl;
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