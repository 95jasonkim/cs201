/*
Jason Kim
CS201 hw7 main
asciiart.cpp
*/

#include "Color3.hpp"
#include "Image3.hpp"

int main()
{
	string path = "parrot.ppm";
	auto p = openPPM(path);
	Image3 pic(p.first, p.second);
	pic.loadPPM(path);
	pic.printASCII();
}