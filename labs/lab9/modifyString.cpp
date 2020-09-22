/*
Jason Kim
CS201 lab9
9/22/2020
*/
#include "modifyString.hpp"

int modifyString(string& ref, int n)
{
	ref = ref + to_string(n % 10);
	return ref.size();
}

string modifyStringTwo(string ref, int& n)
{
	n = n * n;
	return ref + to_string(n);
}

int main()
{
	string example = "Example";
	//For part 1
	/*
	cout << "Length: " << modifyString(example, 11) << endl;
	cout << "String: " << example << endl;
	cout << "Length: " << modifyString(example, 50) << endl;
	cout << "String: " << example << endl;
	cout << "Length: " << modifyString(example, 9) << endl;
	cout << "String: " << example << endl;
	*/

	//For part 2
	int n = 2;
	for (int i = 1; i <= 3; i++)
	{
		cout << "String: " << modifyStringTwo(example, n) << endl;
		cout << "Current number squared: " << sqrt(n) << endl;
	}

	return 0;
}