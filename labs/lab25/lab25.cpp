/*
Jason Kim
CS201 lab25
11/2/2020
*/
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using std::pair;
using std::vector;
using std::cout;
using std::endl;
using std::mismatch;

//prints whether the two vectors are mismatched
void partone(const vector<int>& v, const vector<int>& vv)
{
	auto p = mismatch(v.begin(), v.end(), vv.begin());
	if (p.first == v.end())
	{
		cout << "There is no mismatch between the datasets." << endl;
	}
	else
	{
		cout << "A mismatch has been found: " << *p.first << " and " << *p.second << endl;
	}
	cout << endl;
}

//uses mismatch to set the second vector equal to the first vector
void parttwo(vector<int>& v, vector<int>& vv) 
{
	auto p = mismatch(v.begin(), v.end(), vv.begin());
	while (p.first != v.end())
	{
		*p.second = *p.first;
		p = mismatch(v.begin(), v.end(), vv.begin());
	}
	cout << "The two datasets are now equal." << '\n'<< endl;
}

int main()
{
	vector<int> one{ 1,2,3,4,5,6,7,8,9,10 };
	vector<int> two{ 1,2,3,4,5,6,7,8,9,10 };
	vector<int> three{ 1,2,3,4,5,5,6,7,8,9 };


	partone(one, two);
	partone(one, three);

	parttwo(one, two);
	parttwo(one, three);

	partone(one, two);
	partone(one, three);

}
