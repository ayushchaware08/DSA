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

void swapalt(int arr[], int size)
{
	for (int i = 0; i < size; i +=2)
	{
		if (i + 1 < size)
		{
			swap(arr[i], arr[i + 1]);  // if predefined function is not applicable do it by using a temperory variable
		}
	}
	printarray(arr, size);
	cout << endl;
}
// int main()
// {
// 	int arr[5] = {74, 84, 62, 74, 98};
// 	printarray(arr, 5);
// 	swapalt(arr, 5);

// 	int brr[10]={45,87,51,95,74,5,4,52,75,30};
// 	printarray(brr,10);
// 	swapalt(brr,10);
// }


int main()
{
	int arr[5] = {8, 4, 1, 7, 9};
	int size = 5;
	swapalt( arr, size);
}