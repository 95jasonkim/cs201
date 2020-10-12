/**
 * @file     insertion_sort.cpp
 * @author   Student Name
 * @version  Feb 17, 2019
 * John Quan
 * @brief
 */

#include <iostream>
#include <vector>

void insertionSort(std::vector<int> & data) {
	// TODO Write the code for insertionSort

	for (int i=1;i<data.size();i++)
	{
		int temp;
		if (data[i] < data[i - 1])
		{
			temp = data[i];
			for (int j = i; j > 0; j--)
			{
				if (data[j-1] > temp)
				{
					data[j] = data[j - 1];
				}
				else
				{
					data[j] = temp;
					break;
				}
			}
			if (data[0] == data[1])
			{
				data[0] = temp;
			}
		}
		
	}
//	1. For each element, with the second element as the current element
//	2. If the previous element is bigger than the current element
//	3. Temporarily save the current element

	// Now, we need to move each element that is bigger than the temporary.

//	4. Make a new index j for decrementing equal to the current index
//	5. While j isn't zero and the previous element is greater than the
//        temporarily saved element
//	6. Move the previous element into the current element
//	7. Decrement j

	// We found where temp goes.

//	8. Move it into the element at j
}

bool isEqual(const std::vector<int> & v1, const std::vector<int> & v2) {
	// compare lengths
	if (v1.size() != v2.size()) {
		return false;
	}
	// compare elements
	for (unsigned long i = 0; i < v1.size(); ++i) {
		if (v1[i] != v2[i]) {
			return false;
		}
	}
	// must be the same
	return true;
}

void printVector(const std::vector<int>& vec) {
	for (const auto& element : vec) {
		std::cout << element << ' ';
	}
}
