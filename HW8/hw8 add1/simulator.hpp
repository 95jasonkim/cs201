/*
Jason Kim
CS201 hw8 add1
simulator.hpp
*/

#ifndef SIMULATOR_HPP
#define SIMULATOR_HPP

#include "agent.hpp"
#include "environment.hpp"
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;

class Simulator
{
public:
	Simulator() : _en(), _agent(), _count{ 0 }
	{}

	void run();
	
	int _count;
	Environment _en;
	Agent _agent;
};


#endif