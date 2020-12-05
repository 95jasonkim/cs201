/*
Jason Kim
CS201 hw8 main
simulator.hpp
*/

#include "simulator.hpp"

void Simulator::run()
{
	cout << "Simulation running..." << endl;
	_env.iteration();
	cout << "Heater is ";
	if (_env._heater) cout << "on..." << endl;
	else cout << "off..." << endl;
	_agent.perceive(_env);
	cout << "Environment temperature is " << _env._temperature << endl;
	_agent.act(_env); 
	cout << "Heater is now ";
	if (_env._heater) cout << "on..." << endl;
	else cout << "off..." << endl;
	_count++;
}

void Simulator::askOwner()
{
	cout << "What range of temperature would you like?(enter same numbers to terminate)" << endl;
	cout << "From: ";
	string temp;
	getline(cin, temp);
	cout << "to: ";
	string temp2;
	getline(cin, temp2);
	_agent._temprange = { stoi(temp),stoi(temp2) };
	cout << endl;
	_count = 0;
}

