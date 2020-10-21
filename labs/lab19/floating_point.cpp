/**
 * @file     floating_point.cpp
 * @author   Student Name
 * @version  Mar 1, 2019
 * John Quan 
 *
 * Useful trigonometric functions.
 */

// using M_PI for pi
#define _USE_MATH_DEFINES
#include <cmath>

#include <vector>
#include<iostream>
using std::cout;
using std::endl;

std::vector<double> degreesToRadians(int degrees) {

	std::vector<double> radians;

	// for each degree, fill the vector with its radian
	for (int degree = 0; degree <= degrees; ++degree) {
		// TODO: calculate a radian and add it to the vector****************
		double radian = degree * M_PI / 180;
		radians.push_back(radian);

		// *****************************************************************
	}
	return radians;
}

void print(const std::vector<double>& radians)
{
	cout << "degree, cos, sin" << endl;
	for (size_t degree = 0; degree < radians.size(); degree++)
	{
		double cosv;
		double sinv;
		cosv = cos(radians[degree]);
		if (cosv<0.0000001 && cosv>-0.0000001)
		{
			cosv = 0;
		}
		sinv = sin(radians[degree]);
		if (sinv<0.0000001 && sinv>-0.0000001)
		{
			sinv = 0;
		}
		cout << degree << ", " << cosv << ", " << sinv << endl;
	}
}



