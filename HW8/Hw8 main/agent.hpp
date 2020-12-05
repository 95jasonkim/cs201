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

	int perceive(const Environment en);


	pair<int, int> _temprange;
};


#endif