/*
Jason Kim
CS201 project
quicksort.cpp
*/
#include<iostream>
using std::cout;
using std::endl;
#include <stdio.h>
#include <time.h>
#include<random>
using std::mt19937;
using std::random_device;
using std::uniform_int_distribution;

//swaps values of two pointers in array
void swap(int* first, int* second)
{
	int n = *first;
	*first = *second;
	*second = n;
}

//sets the last element as the pivot and goes through all elements, 
//placing elements smaller than the pivot before it
//and placing elements larger after it
int partition(int arr[], int begin, int end)
{
	//sets last element of range as pivot
	int pivot = arr[end];
	int i = begin; // i keeps track of where to swap pivot into at the end
	for (int j = begin; j <= end - 1; j++)
	{
		if (arr[j] < pivot)
		{
			swap(&arr[i], &arr[j]);
			i++;
		}
	}
	swap(&arr[i], &arr[end]);
	return i;
}

void quicksort(int arr[], int begin, int end)
{
	if (begin < end)
	{
		//divide array into two with partition,
		//piv is the location where the pivot ends up
		int piv = partition(arr, begin, end);

		//sort both sides of pivot using quicksort recursively
		quicksort(arr, begin, piv - 1);
		quicksort(arr, piv + 1, end);
	}
}

//global variables to allow an array of a larger size
const int bsize = 1000000; // size of 1 million
int barr[bsize];

int main()
{
	int arr[] = { 3,1,5,4,7,8,4,2,10,6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	quicksort(arr, 0, size-1);
	cout << "Test quicksort with small array of size 10." << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	uniform_int_distribution<int> num(1, bsize);
	random_device ran;
	mt19937 gen(ran());

	cout << "Creating array of size " << bsize << "..." << endl;
	for (int i = 0; i < bsize; i++)
	{
		//barr[i] = i;
		//barr[i] = bsize-i;
		// for these two extreme cases where the array is already sorted, or is reversed, than the quicksort takes very long.
		barr[i] = num(gen); // takes about 0.35 seconds with 1 million random numbers
	}
	// start timer
	std::cout << "Vector Sorting..." << std::endl;
	clock_t timer = clock();

	// call sort function
	quicksort(barr, 0, bsize-1);

	// stop timer
	timer = clock() - timer;

	printf("Sorted in approximately %f seconds",
		(float)timer / CLOCKS_PER_SEC);
	cout << endl;
	//for printing out the big array to see if sorted(change bsize to something resonable beforehand)
	/*
	for (int i = 0; i < bsize; i++)
	{
		cout << barr[i] << " ";
	}
	cout << endl;
	*/
}