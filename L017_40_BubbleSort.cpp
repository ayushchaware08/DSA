// https://www.geeksforgeeks.org/top-mcqs-on-bubblesort-algorithm-with-answers/
// https://www.naukri.com/code360/problems/bubble-sort_980524

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

int bubblesort(int arr[], int n)
{
	bool swaped ;
	// for 0->n-1
	for (int i = 0; i < n-1; i++) 
	{ 	swaped = false;
		// precess till n-ith index
		for (int j = 0; j < n -i- 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				swaped = true;
			}
		}
		if (swaped == false)
		{
			// allready sorted
			break;
		}
	}
	printarray(arr, n);
}

int main()
{
	int arr[10] = {10, 20, 90, 4, 87, 43, 54, 25, 18, 30};
	int n = 10;
	bubblesort(arr, n);
	return 0;
}