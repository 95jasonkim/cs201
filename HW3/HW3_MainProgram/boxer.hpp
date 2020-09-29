/*
Jason Kim
CS 201 boxer.hpp
9/28/2020
*/
#ifndef BOXER_HPP
#define BOXER_HPP
#include<iostream>
using std::endl;
using std::cout;
using std::cin;
#include<string>
using std::string;
using std::stoi;

/*
prints string inside box of asterisks
@param word string to be placed in the box
@param box int for number of layers of asterisks
*/
void boxer(string word, int box);


/*
returns a string with a certain number of asterisks
@param n number of asterisks inside returned string
*/
string ast(int n);

#endif