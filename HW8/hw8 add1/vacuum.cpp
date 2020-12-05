/*
Jason Kim
CS201 hw8 add1
vacuum.cpp
*/
#include "agent.hpp"
#include "environment.hpp"
#include "simulator.hpp"
using std::cin;

int main()
{
	Simulator sim;
	while (true)
	{
		sim.run();
		if (sim._count == 10)
		{
			cout << "Ten simulations run. " << endl;
			cout << "Press ENTER to continue ";
			while (cin.get() != '\n');
			sim._count = 0;
		}
	}
}