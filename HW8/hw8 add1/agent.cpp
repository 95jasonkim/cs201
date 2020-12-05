/*
Jason Kim
CS201 hw8 add1
agent.cpp
*/

#include "agent.hpp"


//gets information about environment dirtyness
void Agent::perceive(Environment en)
{
	_rooms = en._rooms;
}