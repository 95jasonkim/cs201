/*
Jason Kim
CS201 lab 35 student.cpp
*/
#include "student.hpp"
#include<iostream>
using std::cout;
using std::endl;

void Student::printInfo() const
{
	cout << "{" << _name << ", " << _id << "}" << endl;
}