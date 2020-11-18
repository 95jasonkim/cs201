/*
Jason Kim
CS201 Lab29
*/
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <random>
using std::random_device;
using std::mt19937;
using std::uniform_int_distribution;
#include <fstream>
using std::ofstream;
using std::ifstream;
#include <string>
using std::string;
using std::getline;
#include <sstream>
using std::istringstream;

// Set the following to true to create formatting errors in the file.
const bool MAKE_FILE_ERRORS = true;

/**
 * Read a file and print it to the console.
 * @param filename name of the file
 * @return True if the file can be read, otherwise false.
 */
bool readFile(const string & filename) {
	// REQUIRED 1 ****************************************************
	// TODO: If you can read the file,
	//       While not at the end-of-file
	//       Print each line of the file.
	ifstream in(filename);
	if (!in) return false;
	while (true) 
	{
		string num;
		getline(in, num);
		if (!in)
		{
			if (in.eof())
			{
				cout << "Finished reading file" << endl;
			}
			else
			{
				cout << "Error during read" << endl;
			}
			break;
		}
		else
		{
			cout << num << endl;
		}
	}
	// ***************************************************************
}

/**
 * Read a file of integers and print it to the console.
 * Print ERROR: if it finds a string.
 * @param filename name of the file
 * @return True if the file can be read, otherwise false.
 */
bool readFile1(const string & filename) {
	// REQUIRED 2 ****************************************************
	// TODO: Set MAKE_FILE_ERRORS to true.
	//       If you can read the file,
	//       While not at the end-of-file
	//       Print each line of the file,
	//         but print ERROR: in front of
	//         lines with strings.
	ifstream in(filename);
	if (!in) return false;
	while (true)
	{
		string num;
		getline(in, num);
		if (!in)
		{
			if (in.eof())
			{
				cout << "Finished reading file" << endl;
			}
			else
			{
				cout << "Error during read" << endl;
			}
			break;
		}
		else
		{
			istringstream is(num);
			int n;
			is >> n;
			if (!is)
			{
				cout << "Error: ";
			}
			cout << num << endl;
		}
	}
	// ***************************************************************
}

/**
 * Read a file of integers and ONLY print integers to the console.
 * @param filename name of the file
 * @return True if the file can be read, otherwise false.
 */
bool readFile2(const string & filename) {
	// ADDITIONAL ****************************************************
	// TODO: Set MAKE_FILE_ERRORS to true.
	//       If you can read the file,
	//       While not at the end-of-file
	//       Only print each integer in the file
	//       These tests will help:
	//         while(iStringStreamOnLine >> str)
	//         if(iStringStreamOnStr >> num)
	ifstream in(filename);
	if (!in) return false;
	while (true)
	{
		string num;
		getline(in, num);
		if (!in)
		{
			if (in.eof())
			{
				cout << "Finished reading file" << endl;
			}
			else
			{
				cout << "Error during read" << endl;
			}
			break;
		}
		else
		{
			istringstream is(num);
			string part;
			int n;
			while (is)
			{
				is >> part;
				istringstream iss(part);
				iss >> n;
				if (!iss)
					{
						continue;
					}
				else
				{
					break;
				}
			}
			cout << n << endl;
		}
	}
	return true;  // DUMMY return

	// ***************************************************************
}

// writeFile
// Write data to file with given filename. If MAKE_FILE_ERRORS is false,
// writes one integer per line. Otherwise, writes something else.
// Returns true on success, false on I/O error.
bool writeFile(const string & filename) {
	random_device rd;
	mt19937 gen(rd());  // PRNG, randomly seeded

	// Open file
	ofstream fout(filename);
	if (!fout)
		return false;

	// Figure line count
	uniform_int_distribution<int> dist1(5, 10);
	int numlines = dist1(gen);

	// Print file contents
	uniform_int_distribution<int> dist2(1, 100);
	for (int i = 0; i < numlines; ++i) {
		if (i == 4 && MAKE_FILE_ERRORS) {
			fout << "qwerty 99999 99.999" << endl;
			if (!fout)
				return false;
		} else {
			fout << dist2(gen) << endl;
			if (!fout)
				return false;
		}
	}
	fout << 200 + dist2(gen);
	if (!fout)
		return false;

	// Done
	return true;
}

// Main program
// Call writeFile, then readFile, printing appropriate error messsages.
int main() {  // added "src/" to filename for Eclipse IDE.
	const string fname = "data_2019.txt";  // File to write & read

	// Write
	cout << "Creating file" << endl;
	bool writesuccess = writeFile(fname);
	if (!writesuccess) {
		cout << "********** ERROR writing file; exiting" << endl;
		cout << endl;
	} else {
		cout << "File successfully written" << endl;
		cout << endl;

		// Read
		cout << "Reading file" << endl;
		cout << endl;

		cout << "REQUIRED ************************************************";
		cout << endl;
		bool readsuccess = readFile(fname);
		cout << endl;

		cout << "REQUIRED 1 **********************************************";
		cout << endl;
		readsuccess = readFile1(fname);
		cout << endl;

		cout << "ADDITIONAL **********************************************";
		cout << endl;
		readsuccess = readFile2(fname);
		cout << endl;

		if (!readsuccess) {
			cout << "********** ERROR reading file" << endl;
			cout << endl;
		}
	}

	// Wait for user
	cout << "Press ENTER to quit ";
	string dummyline;
	getline(cin, dummyline);
}
