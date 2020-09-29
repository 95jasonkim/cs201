/*
Jason Kim
CS 201 boxprint.cpp
9/28/2020
*/
#include"boxer.hpp"

int main()
{
	cout << "The word you type will be boxed in layers of asterisks." << endl;
	while (true)
	{
		string word;
		cout << "Enter your word(enter end to finish): ";
		getline(cin, word);
		if (word == "end")break;
		int box=0;
		while (box < 1)
		{
			cout << "Enter the size of the box: ";
			string boxs;
			getline(cin, boxs);
			box = stoi(boxs);
			if (box < 1)
			{
				cout << "Please enter a positive integer." << endl;
			}
		}
		boxer(word, box);
	}
	return 0;
}