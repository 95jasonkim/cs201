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
	Environment(double temperature = 20.0, bool heater=true): _temperature{temperature}, _heater{heater}
	{}

private:
	double _temperature;
	bool _heater;
};




#endif