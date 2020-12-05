/*
Jason Kim
CS201 hw8 add1
environment.cpp
*/
#include "environment.hpp"

//each iteration gives each room 50% to become dirty
void Environment::iteration()
	{
	for (auto &i : _rooms)
	{
		int n = _num(gen);
		if (n == 1) i = n;
	}
	}
