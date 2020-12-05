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

//if current room is dirty cleans, otherwise checks the other room and moves there if it is dirty
void Agent::think()
{
	
		if (_rooms[_pos] == 1)
		{
			_clean = true;
		}
		else if (std::find(_rooms.begin(),_rooms.end(),1)!=_rooms.end())
		{
			auto it = std::find(_rooms.begin(), _rooms.end(), 1);
			_pos = it - _rooms.begin();
			_clean = false;
		}
		else
		{
			_clean = false;
		}
	
}

// if _clean is true acts on the room it is in
void Agent::act(Environment& en)
{
	if (_clean)
	{
		en._rooms[_pos] = 0;
	}
}