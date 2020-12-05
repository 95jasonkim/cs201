/*
Jason Kim
CS201 hw8 add1
agent.cpp
*/

#include "agent.hpp"


//gets information about environment dirtyness
void Agent::perceive(Environment& en)
{
	_room = en._rooms;
}

//if current room is dirty cleans, otherwise checks the other room and moves there if it is dirty
void Agent::think()
{
	
		if (_room[_pos] == 1)
		{
			_clean = true;
		}
		else if (std::find(_room.begin(),_room.end(),1)!=_room.end())
		{
			auto it = std::find(_room.begin(), _room.end(), 1);
			_pos = it - _room.begin();
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