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

void Simulator::askOwner()
{
	cout << "What range of temperature would you like?" << endl;
	cout << "From: ";
	string temp;
	getline(cin, temp);
	cout << "to: ";
	string temp2;
	getline(cin, temp2);
	_agent._temprange = { stoi(temp),stoi(temp2) };
	cout << endl;
}

