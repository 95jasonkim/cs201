/*
Jason Kim
CS201 lab 35 student.hpp
*/

#ifndef STUDENT_HPP
#define STUDENT_HPP
#include<string>
using std::string;

class Student {
public:
	//constructors
	Student() : _name{"John Doe"}, _id{0}
	{}
	Student(string name) : _name{ name }, _id{ 0 } 
	{}
	Student(string name, int id): _name{name}, _id{id}
	{}
	void printInfo() const;
private:
	string _name;
	int _id;
};


#endif