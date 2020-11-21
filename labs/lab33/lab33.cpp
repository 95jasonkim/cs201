/*
Jason Kim
CS201 lab33
11/20/2020
*/
#include<iostream>
using std::cout;
using std::endl;
#include<string>
using std::string;


class Monster {
public:
	void hello()
	{
		cout << "I am " << _name << " with " << _eyes << " "<<eye()<<"!" << endl;
	}
	void setEyes(int eyes)
	{
		_eyes = eyes;
	}
	int Eyes()
	{
		return _eyes;
	}
	void setName(string name)
	{
		_name = name;
	}
	string Name()
	{
		return _name;
	}
	string toString()
	{
		return "(" + _name + ", " + std::to_string(_eyes) +" "+eye()+ ")";
	}

private:
	int _eyes;
	string _name;
	string eye()
	{
		string eye;
		if (_eyes == 1)eye = "eye";
		else eye = "eyes";
		return eye;
	}
};


int main()
{
	Monster Larry, Bob;
	Larry.setEyes(3);
	Larry.setName("Larry");
	Bob.setEyes(1);
	Bob.setName("Bob");
	Monster Sal = Bob;
	Larry.hello();
	cout << Larry.toString() << endl;
	cout << Bob.toString() << endl;
	cout << Sal.toString() << endl;
}
