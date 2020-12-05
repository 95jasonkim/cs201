/*
Jason Kim
CS201 hw8 main
agent.cpp
*/

#include "agent.hpp"
#include "environment.hpp"
#include "simulator.hpp"

void Agent::perceive(Environment en)
{
	_envtemp = en._temperature;
}

bool Agent::think()
{
	int midtemp = (_temprange.second + _temprange.first) / 2;
	if (_envtemp < midtemp) return true;
	else return false;
}

void Agent::act(Environment& en)
{
	en._heater = think();
}
