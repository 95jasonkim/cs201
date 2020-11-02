/*
lifo-fifo.hpp
*/
#ifndef LIFO_FIFO_HPP
#define LIFO_FIFO_HPP
#include<string>
using std::stoi;
using std::string;
using std::getline;
#include<vector>
using std::vector;

//item is pushed to container
void FifoPush(vector<string>& container, const string& item);

//saves the first item
//also pops that item from container
void FifoPop(vector<string>& container, string& item);

//item is pushed to container
void LifoPush(vector<string>& container, const string& item);

//saves the last item
//then pops that item from container
void LifoPop(vector<string>& container, string& item);

//returns true if container is empty
bool isContainerEmpty(const vector<string>& container);

#endif