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
	if (_envtemp < _temprange.first) return true;
	else if(_envtemp>_temprange.second) return false;
}

void Agent::act(Environment& en)
{
	en._heater = think();
}
