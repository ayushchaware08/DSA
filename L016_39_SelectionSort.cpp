// https://www.naukri.com/code360/problems/selection-sort_981162

#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int selectionsort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++) // n-1 as last wala to allready sorted hoga
	{
		int minindex = i; // locking the sorted array
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[minindex])
			{
				minindex = j; //smallest ele in array
			}
		}
		std::swap(arr[minindex], arr[i]);
	}
	printarray(arr, n);
}
int main()
{
	int arr[10] = {10, 20, 90, 4, 87, 43, 54, 25, 18, 30};
	int n = 10;
	selectionsort(arr, n);
}
