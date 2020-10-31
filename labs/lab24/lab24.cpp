/*
Jason Kim
CS201 lab 24
10/30/2020
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<string>
using std::getline;
using std::string;
using std::vector;
using std::pair;
using std::begin;
using std::end;
using std::sort;
using std::cout;
using std::endl;
using std::cin;

void printV(const vector<int>& v)
{
	cout << endl;
	for (auto item : v)
	{
		cout << item << " ";
	}
	cout <<'\n'<< endl;
}

pair<int, int> getInts(string s)
{
	cout << "Enter indices to " << s << " the vector." << endl;
	cout << "Enter the starting indice number: ";
	string place;
	getline(cin, place);
	int one = std::stoi(place);
	cout << "Enter the ending indice number: ";
	getline(cin, place);
	int two = std::stoi(place);
	return { one, two };
}

int main()
{
	vector<int> v{ 43,8,21,7,77,899,100,11,30,303030,500 };
	cout << "Vector items: " << endl;
	printV(v);
	auto p = getInts("sort");
	sort(v.begin()+p.first, v.begin()+p.second);
	cout << "Vector is now sorted." << endl;
	printV(v);
	auto p2 = getInts("reverse");
	std::reverse(v.begin() + p2.first, v.begin() + p2.second);
	cout << "Vector is now reversed." << endl;
	printV(v);
	auto p3 = getInts("fill");
	std::fill(v.begin() + p3.first, v.begin() + p3.second,0);
	cout << "Vector is filled with 0." << endl;
	printV(v);
	auto p4 = getInts("rotate");
	std::rotate(v.begin() + p4.first,v.begin()+p4.first+1, v.begin() + p4.second);
	cout << "Vector is now rotated by one." << endl;
	printV(v);
}