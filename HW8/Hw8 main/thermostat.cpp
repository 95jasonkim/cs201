/*
Jason Kim
CS201 hw8 main
thermostat.cpp
*/

#include "agent.hpp"
#include "environment.hpp"
#include "simulator.hpp"

int main()
{
	Simulator sim;
	while (true)
	{
		sim.run();
		if (sim._count == 10)
		{
			sim.askOwner();
			sim._count = 0;
		}
	}
}