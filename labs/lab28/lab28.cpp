/*
Jason Kim
CS201 lab28
11/9/2020
*/

#include<fstream>
using std::ofstream;
#include<iostream>
using std::cout;
using std::endl;
#include<iomanip>
using std::setw;
#include<random>
using std::shuffle;
using std::mt19937;
using std::random_device;
#include<vector>
using std::vector;

void partone(ofstream& file)
{
	for (int i = 0; i < 10; i++)
	{
		file << "Hello World!" << endl;
	}

}

void parttwo(ofstream& file)
{
	for (int i = 1; i <= 100; i++)
	{
		file << setw(2) << i << " ";
		if (i % 10 == 0)
		{
			file << endl;
		}
	}
}

void partthree(ofstream& file,const vector<int>& num)
{
	int count = 0;
	for (int n : num)
	{
		file << setw(3) << n << " ";
		count++;
		if (count == 10)
		{
			file << endl;
			count = 0;
		}
	}

}
int main()
{
	ofstream file("lab28.txt");
	//part one
	partone(file);

	//part two
	parttwo(file);

	//part three
	random_device ran;
	mt19937 gen(ran());
	vector<int> num;
	for (int i = 1; i <= 100; i++)
	{
		num.push_back(i);
	}
	shuffle(num.begin(), num.end(), gen);
	partthree(file,num);

	if (!file)
	{
		cout << "Error file not found." << endl;
	}
}