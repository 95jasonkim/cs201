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
	Agent() :_pos{0}, _room{{0,0}}, _clean{false}
	{}


	void perceive(Environment& en);

	void think();

	void act(Environment& en);

	vector<int> _room;
	int _pos;
	bool _clean;
};

#endif