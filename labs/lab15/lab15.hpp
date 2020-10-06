/*
Jason Kim
CS201 lab15.hpp
10/5/2020
*/
#ifndef LAB15_HPP
#define LAB15_HPP
#include<sstream>
using std::istringstream;
#include<string>
using std::string;
#include<iostream>
using std::cout;
using std::endl;

/*
prints the square of an integer inside the string
if no integer is found prints error message
*/
void partOne(string num);

/*
finds integer in the string and puts it in @param n
returns true if no integer can be found
*/
bool partTwo(string num, int& n);


#endif
