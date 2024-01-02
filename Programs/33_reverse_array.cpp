#include <iostream>
using namespace std;

// Reverze an Array
void reverse(int arr[], int n)
{
	int start = 0;
	int end = n - 1;

	while (start <= end)
	{
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
}

// Print an array
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
	int arr[6] = {1, 2, 3, 4, 5, 6};

	printarray(arr, 6);
	reverse(arr, 6);

	return 0;
}
