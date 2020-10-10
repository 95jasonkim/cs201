/*
Jason Kim
CS201 hw4 fifo-lifo.cpp
10/9/2020
*/
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#include<string>
using std::string;
using std::getline;
#include<vector>
using std::vector;

//item is pushed to container
void FifoPush(vector<string>& container, const string& item)
{
	container.push_back(item);
}

//saves the first item
//then it pops that item from container
void FifoPop(vector<string>& container, string& item)
{
	item = container[0];
	container.erase(container.begin() + 1);
}

//item is pushed to container
void LifoPush(vector<string>& container, const string& item)
{
	container.push_back(item);
}


int main()
{


}