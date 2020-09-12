/*
Jason Kim
CS201 HW1 dotcross.cpp
9/11/2020
*/
#include<iostream>
#include<iomanip>
using std::cout;
using std::endl;
using std::cin;


int main()
{
	cout << "Enter the x value for Vector A: ";
	float ax;
	cin >> ax;
	cout << "Enter the y value for Vector A: ";
	float ay;
	cin >> ay;
	cout << "Enter the z value for Vector A: ";
	float az;
	cin >> az;

	cout << "Enter the x value for Vector B: ";
	float bx;
	cin >> bx;
	cout << "Enter the y value for Vector B: ";
	float by;
	cin >> by;
	cout << "Enter the z value for Vector B: ";
	float bz;
	cin >> bz;
	cout << std::setprecision(5) << std::fixed;
	float dot = ax * bx + ay * by + az * bz;
	float cx = ay * bz - az * by;
	float cy = az * bx - ax * bz;
	float cz = ax * by - ay * bx;
	cout << "A dot B = " << dot << endl;
	cout << "A cross B = (" << cx << ", " << cy << ", " << cz << ")";


	return 0;
}