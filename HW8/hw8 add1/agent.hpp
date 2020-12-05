/*
Jason Kim
CS201 hw8 add1
agent.hpp
*/

#ifndef AGENT_HPP
#define AGENT_HPP
#include "environment.hpp"
#include<algorithm>
#include<iterator>

class Agent
{
public:
	Agent() :_pos{0}, _rooms{{0,0}}, _clean{false}
	{}
	void perceive(Environment en);

	void think();

	vector<int> _rooms;
	int _pos;
	bool _clean;
};

#endif