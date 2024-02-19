// Binary Search

#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
	int start = 0;
	int end = size - 1;
	
	// optimized way of (start + end) / 2; 
	// makes the end in int range below 2^31 - 1;
	int mid = start + (end - start) / 2;

	while (start <= end)
	{
		if (arr[mid] == key)
		{
			return mid;
		}
		if (key > arr[mid])
		{
			start = mid + 1;
		}
		else
		{
			end = mid -1;
		}
		mid = start + (end - start) / 2;
	}
	return -1;
}

int main()
{
	int evenarray[6] = {4, 5, 6, 7, 8, 9};
	int oddarray[5] = {2, 4, 5, 9, 10};

	int key;
	cout<< "Enter the Key element : ";
	cin>>key;

	int index1 = binarysearch(evenarray, 6, key);
	cout<< "Element is in "<< index1 << " index position." <<endl;

	int index2 = binarysearch(oddarray, 5, key);
	cout<< "Element is in "<< index2 << " index position." <<endl;

	return 0;
}