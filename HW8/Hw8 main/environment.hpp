/*
Jason Kim
CS201 hw8 main
environment.hpp
*/
#ifndef ENVIRONMENT_HPP
#define ENVIRONMENT_HPP

class Environment
{
public:
	Environment(int temperature = 20.0, bool heater=true): _temperature{temperature}, _heater{heater}
	{}

	void iteration();


	int _temperature;
	bool _heater;
};




#endif