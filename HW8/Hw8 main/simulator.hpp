/*
Jason Kim
CS201 hw8 main
simulator.hpp
*/

#ifndef SIMULATOR_HPP
#define SIMULATOR_HPP

#include "agent.hpp"
#include "environment.hpp"
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<string>
using std::string;
using std::stoi;

class Simulator
{
public:
	Simulator() : _env(), _agent(), _count{0}
	{}

	void run();

	void askOwner();

	int _count;
	Environment _env;
	Agent _agent;
};


#endif