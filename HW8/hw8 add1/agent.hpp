/*
Jason Kim
CS201 hw8 add1
agent.hpp
*/

#ifndef AGENT_HPP
#define AGENT_HPP
#include "environment.hpp"

class Agent
{
public:
	Agent() :_pos{0}, _rooms{{0,0}}
	{}
	void perceive(Environment en);



	vector<int> _rooms;
	int _pos;
};

#endif