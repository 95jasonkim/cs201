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
		if (isdigit(line[0])) return std::stoi(line);
		else
		{
			cout << "Please enter an integer: ";
		}
	}
}

string caesar(string line, int shift)
{

}


int main(int argc, char** argv)
{
	cout << "Caesar Cypher" <<'\n'<< endl;
	string line="text";
	while (!line.empty())
	{
		line = getLine();
		int shift = getShift();
		cout << endl;
		
	}
}