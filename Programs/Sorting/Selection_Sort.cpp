#include<iostream>
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

// Selection Sort Function
void selectionsort(int arr[], int n)
{
	for(int i = 0; i<= n-1; i++)
	{
		int minindex = i;
		for(int j = i+1; j<n; j++)
		{
			if(arr[j]<arr[minindex])
			{
				minindex = j;
			}
		}
		swap(arr[minindex],arr[i]);
	}
	printarray(arr,n);
}

int main()
{
	int arr[10] = {74, 54, 91, 21, 15, 48, 91, 34, 51, 64};
	printarray(arr,10);
	cout<< "Sorted Array : ";
	selectionsort(arr, 10);

}