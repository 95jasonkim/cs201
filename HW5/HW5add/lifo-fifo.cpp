/*
lifo-fifo.cpp
*/
#include"lifo-fifo.hpp"


void FifoPush(vector<string>& container, const string& item)
{
	container.push_back(item);
}

void FifoPop(vector<string>& container, string& item)
{
	item = container[0];
	container.erase(container.begin());
}

void LifoPush(vector<string>& container, const string& item)
{
	container.push_back(item);
}

void LifoPop(vector<string>& container, string& item)
{
	item = container[container.size() - 1];
	container.pop_back();
}

bool isContainerEmpty(const vector<string>& container)
{
	return container.empty();
}


