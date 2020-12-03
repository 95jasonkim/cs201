// Image3.hpp
// Implementation for Image3 class
// Original Author: Jonathan Metzgar
// CS 201 course
#include "Image3.hpp"

// Image3 Constructor
Image3::Image3(int width, int height) {
	// TODO: resize the pixels array
	pixels.resize(width*height);
	// TODO: initialize the internal w and h members
	w = width;
	h = height;
}

// Return a pixel from the image


bool Image3::loadPPM(const std::string& path) {
	// TODO: Load an image from the disk
	ifstream stream(path);
	if (!stream) cout << "Cannot open file." << endl;
	else
	{
		while (true)
		{
			string filler;
			getline(stream, filler);
			if (!stream) cout << "Cannot open file." << endl;
			if (filler=="255")break;
		}
		int pixel = 0;
		while (true)
		{
			
			string r;
			string g;
			string b;
			getline(stream, r);
			if (!stream)break;
			getline(stream, g);
			getline(stream, b);
			pixels[pixel] = Color3(stoi(r), stoi(g), stoi(b));
			pixel++;
		}
	}
	// REQUIREMENT: Use the STREAM operators for the file contents
	return false;
}

void Image3::printASCII() const {
	// TODO: Print an ASCII version of this image
	int count = 0;
	for (auto pix : pixels)
	{
		cout << pix.asciiValue();
		count++;
		if (count == w)
		{
			cout << endl;
			count = 0;
		}
	}
}



std::pair<int,int> openPPM(string path) {
	// TODO: Read in PPM image format from stream
	ifstream stream(path);
	if (!stream) cout << "Cannot open file." << endl;
	else
	{
		while (true)
		{
			string filler;
			getline(stream, filler);
			if (!stream)
			{
				cout << "Cannot open file." << endl;
				break;
			}
			if (isdigit(filler[0]))
			{
				istringstream sstream(filler);
				int width;
				int height;
				sstream >> width;
				sstream >> height;
				return { width,height };
				break;
			}
		}
	}
}
