/*
Jason Kim
CS201 lab15main.cpp
10/5/2020
*/
#include"lab15.hpp"
#include<vector>
using std::vector;

int main()
{
	vector<string> words{ "69", "69a","a69","abc","  68","\t11","68 69","0xA" };
	for (auto num:words)
	{
		partOne(num);
	}

	for (auto num : words)
	{
		int n=0;
		if (partTwo(num, n))
		{
			cout << "Error: no integer found." << endl;
		}
		else
		{
			cout << n * n << endl;
		}
	}
}
