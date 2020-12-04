/*
Jason Kim
CS201 hw7
caesar.cpp
*/
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include<string>
using std::string;
using std::getline;
using std::stoi;
#include<sstream>
using std::istringstream;

string getLine()
{
	cout << "Enter a message to cypher(blank input to end): ";
	string line;
	getline(cin, line);
	return line;
}

int getShift()
{
	cout << "Enter an integer to use as the shift: ";
	while(true)
	{
		string line;
		getline(cin, line);
		istringstream os(line);
		int value;
		os >> value;
		if(!os)
		{
			cout << "Please enter an integer: ";
		}
		else return value;
	}
}

string caesar(string line, int shift)
{
	string result="";
	for (const auto c : line)
	{
		if (isupper(c))
		{
			result += (c + shift - 65) % 26 + 65;
		}
		else if(islower(c))
		{
			result += (c + shift - 97) % 26 + 97;
		}
		else
		{
			result += c;
		}
	}
	return result;
}


int main(int argc, char** argv)
{
	cout << "Caesar Cypher" <<'\n'<< endl;
	string line="text";
	while (true)
	{
		line = getLine();
		if (line == "")break;
		int shift = getShift();
		cout << endl;
		cout << "Result: " << caesar(line, shift) << endl;
	}
}