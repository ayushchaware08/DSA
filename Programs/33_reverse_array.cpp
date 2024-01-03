// Reverse an array

#include <iostream>
using namespace std;

// Print an array
void printarray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl
		 << "Printing Done" << endl;
}

// Reverze an Array
void reverse(int arr[], int n)
{
	cout << "Reversing an array..." << endl;
	int start = 0;
	int end = n - 1;

	while (start <= end)
	{
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
	printarray(arr,n);
}

int main()
{
	int arr[6] = {1, 2, 3, 4, 5, 6};

	printarray(arr, 6);
	reverse(arr, 6);
	printarray(arr,6); // array elements get permanatly updated.

	return 0;
}
