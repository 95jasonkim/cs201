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
	return guess[0];
}

int main()
{
	string answer = "ALASKA";
	vector<string> chances{ "head","body","right arm","left arm",
		"right leg","left leg","right hand","left hand","right foot","left foot" };
	cout << "Play Hangman! You have 10 guesses." << endl;
	
}