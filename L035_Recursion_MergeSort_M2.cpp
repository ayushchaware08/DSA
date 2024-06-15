#include <iostream>
using namespace std;

void mergearray(int *arr, int s, int e)
{
	// int mid = s + (e - s) / 2;
	int mid =(e + s) / 2;

	int len1 = mid - s + 1;
	int len2 = e - mid;

	// creating two new array (dynamic memory allocation)
	int *first = new int[len1];
	int *second = new int[len2];

	// copying values of the array s->mid to new array;
	int mainarrayindex = s;
	for (int i = 0; i < len1; i++)
	{
		first[i] = arr[mainarrayindex++];
	}

	// copying values of the array mid+1->e to new array;
	mainarrayindex = mid + 1;
	for (int i = 0; i < len2; i++)
	{
		second[i] = arr[mainarrayindex++];
	}

	// merge two sorted array
	int index1 = 0;
	int index2 = 0;
	mainarrayindex = s; 

	while (index1 < len1 && index2 < len2)
	{
		if (first[index1] < second[index2])
		{
			arr[mainarrayindex++] = first[index1++];
		}
		else
		{
			arr[mainarrayindex++] = second[index2++];
		}
	}

	while (index1 < len1)
	{
		arr[mainarrayindex++] = first[index1++];
	}

	while (index2 < len2)
	{
		arr[mainarrayindex++] = second[index2++];
	}

	// deleting memor
	delete []first;
	delete []second;
}

void mergesort(int *arr, int s, int e)
{
	// basecase
	if (s >= e)
	{
		return;
	}
	// int mid = s + (e - s) / 2;
	int mid = (e + s) / 2;
	// left part sort
	mergesort(arr, s, mid);
	// right part sort
	mergesort(arr, mid + 1, e);

	// merge two array
	mergearray(arr, s, e);
}

int main(){

int arr[14] = {3,8,4,78,14,10,85,36,42,15,20,35,4,1};
	int size = 14;
	mergesort(arr, 0, size - 1);

	// print
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;}