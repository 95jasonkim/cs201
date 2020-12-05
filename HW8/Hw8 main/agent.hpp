/*
Jason Kim
CS201 hw8 main
agent.hpp
*/
#ifndef AGENT_HPP
#define AGENT_HPP
#include<iostream>
using std::pair;

class Agent
{
public:
	Agent(pair<int, int> temprange = { 20, 25 }) :_temprange{temprange}
	{}

	void perceive(const Environment en);

	bool think();

	pair<int, int> _temprange;
	int _envtemp;
};


#endif