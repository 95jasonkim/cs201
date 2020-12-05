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

int Agent::think()
{
	if (_envtemp < _temprange.first) return 1;
	else if (_envtemp > _temprange.second) return -1;
	else return 0;
}

void Agent::act(Environment& en)
{
	switch (think()) {
	case 1:
		en._heater = true;
		break;
	case -1:
		en._heater = false;
		break;
	}
}
