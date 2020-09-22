/*
Jason Kim
CS201 lab9hpp
9/22/2020
*/
#ifndef MODIFY_STRING
#define MODIFY_STRING
#include<string>
using std::string;
using std::to_string;
#include<iostream>
using std::cout;
using std::endl;

/*
* For part one string passed by reference and int returned
* Append an integer to a string
* @param ref string to append integer to
* @param n append (n%10) to ref
* @return length of resulting string
*/
int modifyString(string& ref, int n);

/*
* For part two int passed by reference and string returned
* Append an integer to a string
* @param ref string to append integer to
* @param n int squared and append to ref
* return the resutling string
*/
string modifyStringTwo(string ref, int& n);


#endif