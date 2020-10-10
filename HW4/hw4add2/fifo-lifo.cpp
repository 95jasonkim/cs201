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
using std::stoi;
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
	container.erase(container.begin());
}

//item is pushed to container
void LifoPush(vector<string>& container, const string& item)
{
	container.push_back(item);
}

//saves the last item
//then it pops that item from container
void LifoPop(vector<string>& container, string& item)
{
	item = container[container.size()-1];
	container.pop_back();
}

//returns true if container is empty
bool isContainerEmpty(const vector<string>& container)
{
	return container.empty();
}

//prints the items in the container
void PrintContainer(const vector<string>& container)
{
	for (auto word : container)
	{
		cout << word << endl;
	}
}


int main()
{
	vector<string> Fifo;
	vector<string> Lifo;
	while (true)
	{
		string input;
		cout << "Enter \"1\" to try Fifo or enter \"2\" to try Lifo." << endl;
		getline(cin, input);
		int choice = stoi(input);
		if (choice == 1)
		{
			while (true)
			{
				cout << "Type in \"push\" or \"pop\"(type in \"end\" to go back): ";
				getline(cin, input);
				if (input == "push")
				{
					cout << "Type in the word to push: ";
					getline(cin, input);
					FifoPush(Fifo, input);
					cout << endl;
				}
				else if (input == "pop")
				{
					string popped;
					if (isContainerEmpty(Fifo))
					{
						cout << "Fifo is already empty." << endl;
					}
					else
					{
						FifoPop(Fifo, popped);
						cout << popped << " has been popped." << endl;
					}
				}
				else if (input == "end")break;
			}
			cout << "The items in Fifo are: " << endl;
			PrintContainer(Fifo);
		}
		else if (choice == 2)
		{
			while (true)
			{
				cout << "Type in \"push\" or \"pop\"(type in \"end\" to go back): ";
				getline(cin, input);
				if (input == "push")
				{
					cout << "Type in the word to push: ";
					getline(cin, input);
					LifoPush(Lifo, input);
					cout << endl;
				}
				else if (input == "pop")
				{
					string popped;
					if (isContainerEmpty(Lifo))
					{
						cout << "Lifo is already empty." << endl;
					}
					else
					{
						LifoPop(Lifo, popped);
						cout << popped << " has been popped." << endl;
					}
				}
				else if (input == "end")break;
			}
			cout << "The items in Lifo are: " << endl;
			PrintContainer(Lifo);
		}
	}
}