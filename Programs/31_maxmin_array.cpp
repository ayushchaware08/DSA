#include <iostream>
using namespace std;

// Maximum value in array
void maxival(int arr[], int size)
{
	int maxi = INT32_MIN;
	// compare each value
	for (int i = 0; i < size; i++)
	{
		maxi = max(maxi,arr[i]);
		// if (arr[i] > maxi)
		// {
		// 	maxi = arr[i];
		// }
	}
	cout << "the maximum value in an array : " << maxi << endl;
}

// minmum value in array
void minival(int arr[], int size)
{
	int mini = INT32_MAX;
	// compare each value
	for (int i = 0; i < size; i++)
	{
		mini = min( mini, arr[i]);    // below if loop is same as this line
		// if (arr[i] < mini)
		// {
		// 	mini = arr[i];
		// }
	}
	cout << "The Minimum value in an array : " << mini << endl;
}

int main()
{
	int size;
	cout << "Enter the size of Array : ";
	cin >> size;

	int num[100];

	// taking input
	for (int i = 0; i < size; i++)
	{
		cin >> num[i];
	}

	minival(num, size);
	maxival(num, size);
}