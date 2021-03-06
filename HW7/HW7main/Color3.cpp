// Color3.cpp
// Implementation for Color3 class
// Original Author: Jonathan Metzgar
// CS 201 course
#include <iomanip>
#include "Color3.hpp"

using std::setw;

// Ensure values are in the range 0 to maxvalue
constexpr int saturate(int x, int maxvalue) {
	return x < 0 ? 0 : x > maxvalue ? maxvalue : x;
}

Color3::Color3()
	: r(0), g(0), b(0)
{ }

Color3::Color3(int R, int G, int B) {
	r = (unsigned char)saturate(R, 255);
	g = (unsigned char)saturate(G, 255);
	b = (unsigned char)saturate(B, 255);
}

int Color3::weightedSum() const {
	// Implement Y = 0.2126R + 0.7152G + 0.0722B
	int Y = round(0.2126 * r + 0.7152 * g + 0.0722 * b);
	// Ensure values are inside the range 0 to 255
	return saturate(Y,255);
}

char Color3::asciiValue() const {
	// Use at least 16 characters, sort these from dark to light
	// or light to dark and then map the weightedSum() to the range
	// 0 to 15. Please pick your own characters
	const char values[] = " .,~:;roe=xkRQK#";
	unsigned darkness = floor(weightedSum()/16);
	return values[darkness];
}

