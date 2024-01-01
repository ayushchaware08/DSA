#include <iostream>
using namespace std;

// if array operations is performed in an function then org Array also get updated 
// As array shares the address of the element. if there is variable operation then it creates a copy of a variable without ffecting orignal one.

// Function to print Array
void printarray(int arr[], int size)
{
	cout << "Printing an Array..." << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "Printing Done" << endl;
}

int main()
{
	// Declaring an Array
	int first[10];

	// Printing indexes values of an empty array
	cout << "value at index 0 is " << first[0] << endl;
	cout << "value at index 1 is " << first[1] << endl;
	cout << "value at index 2 is " << first[2] << endl;

	/*---*/

	// size = 10; elements = 2; else garbage value
	int x = 10;
	int second[10] = {1, 2};
	printarray(second, x);

	/*---*/

	// Initialization
	int n = 5; // size of arr
	int third[5] = {1, 2, 3, 4, 5};

	// accessing values
	cout << "value of 0 index is " << third[0] << endl;
	cout << "value of 1 index is " << third[1] << endl;
	cout << "value of 4 index is " << third[4] << endl;

	// Printing an array;
	printarray(third, n);

	// Calculating the SIZE of array
	int sizeofarray = sizeof(third) / sizeof(int);
	cout << "Size of array is " << sizeofarray << endl;

	/*---*/

	// array having Character element
	int size = 5;
	char ch1[5] = { 'a', 'b', 'c', 'd', 'e'};
	// printarray(ch1,size); // printarray(int, int)



	return 0;
}
