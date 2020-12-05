/*
Jason Kim
CS201 hw8 add1
simulator.hpp
*/

#include "simulator.hpp"



void Simulator::run()
{
	cout << "Simulation running..." << endl;
	_en.iteration();
	cout << "Vacuum is in room " << _agent._pos + 1 << endl;
	_agent.perceive(_en);
	cout << "Room 1 is ";
	if (_en._rooms[0] == 1) cout << "dirty, and ";
	else cout << "clean, and ";
	cout << "Room 2 is ";
	if (_en._rooms[1] == 1) cout << "dirty." << endl;
	else cout << "clean." << endl;
	_agent.think();
	_agent.act(_en);
	if (_agent._clean) cout << "Room " << _agent._pos + 1 << " has been cleaned." << endl;
	_count++;
}