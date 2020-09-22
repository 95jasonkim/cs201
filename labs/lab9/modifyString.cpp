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

int main()
{
	//For part 1
	string example = "Example";
	cout << "Length: " << modifyString(example, 11) << endl;
	cout << "String: " << example << endl;
	cout << "Length: " << modifyString(example, 50) << endl;
	cout << "String: " << example << endl;
	cout << "Length: " << modifyString(example, 9) << endl;
	cout << "String: " << example << endl;



	return 0;
}