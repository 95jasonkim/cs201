/*
Jason Kim
CS201 hw8 main
environment.cpp
*/
#include "environment.hpp"

void Environment::iteration()
{
	if (_heater) _temperature++;
	else _temperature--;
}