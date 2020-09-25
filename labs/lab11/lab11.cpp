/*
Jason Kim
CS201 lab11
9/25/2020
*/
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::getline;
using std::string;


int main()
{
	while (true)
	{
		string val;
		cout << "Enter a word: ";
		getline(cin, val);
		string lower;
		string upper;
		string other;
		for (int i = 0; i < val.size(); i++)
		{
			if (val[i] >= 'a' && val[i] <= 'z')
			{
				lower += val[i];
			}
			else if (val[i] >= 'A' && val[i] <= 'Z')
			{
				upper += val[i];
			}
			else
			{
				other += val[i];
			}
		}
		cout << "The lower case letters in the word is: " << lower << endl;
		cout << "The upper case letters in the word is: " << upper << endl;
		cout << "The remaining letters in the word is: " << other << endl;
	}
	return 0;
}