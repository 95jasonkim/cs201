/*
Jason Kim
CS201 hw8 add1
environment.hpp
*/
#ifndef ENVIRONMENT_HPP
#define ENVIRONMENT_HPP
#include<vector>
using std::vector;
#include<random>
using std::mt19937;
using std::random_device;
using std::uniform_int_distribution;

class Environment
{
public:
	Environment():_rooms{{0,0}}
	{
		num = uniform_int_distribution<int>(0, 1);
		_gen = mt19937(ran());
	}
	void iteration();

	uniform_int_distribution<int> num;
	random_device ran;
	mt19937 _gen;
	vector<int> _rooms;
};

#endif