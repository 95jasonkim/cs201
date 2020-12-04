/*
Jason Kim
CS201 hw8 main
agent.cpp
*/

#include "agent.hpp"
#include "environment.hpp"
#include "simulator.hpp"

double Agent::perceive(const Environment en)
{
	return en._temperature;
}