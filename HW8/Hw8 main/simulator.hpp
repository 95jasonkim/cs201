/*
Jason Kim
CS201 hw8 main
simulator.hpp
*/

#ifndef SIMULATOR_HPP
#define SIMULATOR_HPP

class Simulator
{
public:
	Simulator() : _env(), _agent(), _count{0}
	{}

	void run();

	int _count;
	Environment _env;
	Agent _agent;
};


#endif