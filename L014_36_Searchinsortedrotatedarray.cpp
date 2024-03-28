#include <iostream>
using namespace std;

// Pivot Function
int getpivot(int arr[], int n)
{
	int s = 0, e = n - 1;
	int mid = s + (e - s) / 2;
	while (s < e)
	{
		if (arr[mid] >= arr[0])
		{ // line 1
			s = mid + 1;
		}
		else
		{ // Line 2
			e = mid;
		}
		mid = s + (e - s) / 2;
	}
	cout << s << e;
	return s;
}

// Binary Search Function
int binsearch(int arr[], int size, int key)
{
	int s = 0;
	int e = size - 1;
	int mid = s + (e - s) / 2;
	while (s <= e)
	{
		if (arr[mid] == key)
		{
			return mid;
		}
		else if (arr[mid] < key)
		{ // Shift Left
			e = mid - 1;
		}
		else if (arr[mid] > key)
		{ // Shift Right
			s = mid + 1;
		}
	}
}

int main()
{
	int arr[7] = {7, 9, 10, 1, 2, 3, 4};
	int n = 7;
	int key = 10;
	cout << "Pivot is " << getpivot(arr, n);
	cout << "key element is at index " << binsearch(arr,n,key);
	
}