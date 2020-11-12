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
#include<cstdlib>
#include<ctime>
using std::cout;
using std::endl;
using std::map;
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

int RandomBetweenN(int first, int last)
{
	int mean = (first + last) / 2; 
	//the mean for the normal deviation is the average of the two ints
	double deviation = (mean - first) / 3; 
	// the standard deviation is one third the distance from the mean to the edge
	// so only 0.1% on both sides would be outside the boundary
	normal_distribution<> ndist(mean,deviation);
	return ndist(gen);
}

int RandBetween(int first, int last)
{
	int range = last - first +1;
	//range is the number of possible outcomes
	int result = rand() % range +first;
	// gets a random number from 0 to range -1 and adds to first
	return result;
}

int main()
{
	std::srand(std::time(nullptr));

}

