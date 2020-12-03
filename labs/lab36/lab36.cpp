/*
Jason Kim
CS201 lab36
12/3/2020
*/
#include<iostream>
using std::cout;
using std::endl;

int english = 1;
int physics = 2;
int biology = 4;

void classSearch(int classes)
{
	cout << "I am taking ";
	if (classes & english) cout << "english ";
	if (classes & physics) cout << "physics ";
	if (classes & biology) cout << "biology ";
	if (classes&(biology | physics)) cout << '\n'<<"I am taking at least one science class";
	if (classes == 0) cout << "nothing";
	cout << endl;
}

int main()
{
	classSearch(english);
	classSearch(biology | physics);
	classSearch(biology | english | physics);
	classSearch(0);
	double test = 0.55;
	cout << sizeof(test) <<" bytes and "<< sizeof(test)*8<< " bits for a double."<< endl;

}