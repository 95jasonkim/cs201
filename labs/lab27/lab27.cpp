/*
Jason Kim
CS 201 lab 27
11/6/2020
*/
#include<iostream>
using std::cout;
using std::endl;
#include<random>
using std::mt19937;
using std::random_device;
using std::uniform_int_distribution;
#include<vector>
#include<iterator>

int main()
{
	//part1 
	uniform_int_distribution<int> coin(0, 1);
	random_device ran;
	mt19937 rangen(ran());
	mt19937 coingen(777);
	int head=0;
	int tail=0;
	for (int i = 0; i < 1000; i++)
	{
		int toss = coin(coingen);
		// int toss = coin(rangen);
		if (toss == 0)
		{
			head++;
		}
		else
		{
			tail++;
		}
	}
	cout << "Of one thousand coin flips there were " << head << " heads and " << tail << "tails." << '\n'<<endl;

	//part2
	std::vector<int> num;
	for (int i = 1; i <= 100; i++)
	{
		num.push_back(i);
	}
	std::shuffle(num.begin(), num.end(), rangen);
	cout << "Numbers from 1 to 100 shuffled:" << endl;
	for (auto item : num)
	{
		cout << item << endl;
	}
}