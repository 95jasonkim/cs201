/*
Jason Kim
CS201 hw6 shopping
11/11/2020
*/
#include<iostream>
#include<map>
#include<numeric>
#include<string>
using std::string;
using std::map;

struct Record {
	double unitPrice;
	int units;
};

map<Record, string> stock{
		{{2.49,13},"Pepsi"},
		{{50.00,13},"Giftcard"},
		{{99.99,13},"Calculator"},
		{{1.99,13},"Notebook"},
		{{0.99,13},"Pen"}
};

int main()
{
	

}