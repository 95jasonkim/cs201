/*
Jason Kim
CS201 HW6 random-map
11/11/2020
*/
#include<iostream>
#include<iomanip>
#include<random>
#include<string>
#include<cmath>
#include<map>
using std::mt19937;
using std::uniform_int_distribution;
using std::normal_distribution;
using std::random_device;

random_device ran;
mt19937 gen(ran());

int RandomBetween(int first, int last)
{
	uniform_int_distribution<int> dist(first, last);
	return dist(gen);
}



int main()
{

}

