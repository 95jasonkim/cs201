/*
Jason Kim
CS201 hw8 main
environment.cpp
*/

#include "agent.hpp"
#include "environment.hpp"
#include "simulator.hpp"

void Environment::iteration()
{
	if (_heater) _temperature++;
	else _temperature--;
}