// Image3.hpp
// Interface for Image3 class
// Original Author: Jonathan Metzgar
// CS 201 course
#ifndef IMAGE3_HPP
#define IMAGE3_CPP

#include <iostream>
#include<string>
using std::string;
using std::getline;
using std::cout;
using std::endl;
using std::stoi;
#include <vector>
#include<fstream>
using std::ifstream;
#include "Color3.hpp"
#include<sstream>
using std::istringstream;


class Image3
{
public:
	Image3(int width, int height);
	
	

	bool loadPPM(const std::string& path);

	void printASCII() const;

	std::vector<Color3> pixels;
	int w;
	int h;
};

std::pair<int, int> openPPM(string path);
#endif
