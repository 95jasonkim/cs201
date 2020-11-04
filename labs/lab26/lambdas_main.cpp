/**
 * @file     lambdas.hpp
 * @author   Student Name
 * @date     Mar 21, 2019
 * John Quan
 *
 * Practice using lambda functions
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <utility>
#include <vector>
using std::vector;
#include <string>
using std::string;
#include "lambdas.hpp"
using std::pair;

int main() {

	// TODO: REQUIRED
	//       Create a vector<pair<size_t, string>> to enumerate
	//       each string in the WIKIPEDIA_CPP string vector.
	vector<pair<size_t, string>> v;
	for (string s : WIKIPEDIA_CPP)
	{
		v.push_back({ s.size(),s });
	}
	
	
	// TODO: REQUIRED
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the first member in descending order.

	std::sort(v.begin(), v.end(),
		[](auto a, auto b)
		{
			return a.first > b.first;
		});
	

		// TODO: REQUIRED
		//       Use printVectorPairs() to print the vector

	//std::cout << printVectorPairs(v.begin(), v.end()) << std::endl;

	// TODO: ADDITIONAL 1
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the second member in ascending order.

	std::sort(v.begin(), v.end(),
		[](auto a, auto b)
		{
			return a.second < b.second;
		});


	// TODO: ADDITIONAL 1
	//Use printVectorPairs() to print the vector

	//std::cout << printVectorPairs(v.begin(), v.end()) << std::endl;


	// TODO: ADDITIONAL 2
	//       Use std::find_if with a comparison lambda function that prints
	//       the vector pairs where the pair's second.length() > 15.
	//       Print the vector as described in the lab.


	auto it = v.begin();
	while (true)
	{
		it = std::find_if(it, v.end(),
			[](auto a)
			{
				return a.second.size() > 15;
			});
		
		if (it == v.end())break;
		std::cout << "{ " << it->first << ", " << it->second << " }" << std::endl;
	it++;
	}

	return 0;
}
