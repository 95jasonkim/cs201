/*
Jason Kim
CS201 hw8 main
simulator.hpp
*/

#include "agent.hpp"
#include "environment.hpp"
#include "simulator.hpp"

void Simulator::run()
{
	_env.iteration();
	_agent.perceive(_env);
	_agent.act(_env);
	_count++;
}

