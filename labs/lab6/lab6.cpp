/*
Jason Kim
CS201 lab6
9/14/2020
*/
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

//function for 1st part; prints the string and the length of the string
void stringlength(string s)
{
	cout << "The string is: " << s << endl;
	cout << "The length of the string is: " << s.size() << endl;

}

//function for 2nd part; instead of the length it prints out # the same length
void stringsharp(string s)
{
	cout << "The string is: " << s << endl;
	int z = s.size();
	for (int i = 1; i <= z; i++)
	{
		cout << "#";
	}
	cout << endl;
}

void backwards(string s)
{

}

int main()
{
	string a = "This is a string";
	string b = "This is also a string";
	string c = "This may or may not be a string";
	string d = "Is this a string? We may never know";
	//stringlength(a); stringlength(b); stringlength(c); stringlength(d);
	//stringsharp(a); stringsharp(b); stringsharp(c); stringsharp(d);


	return 0;
}