#include <iostream>
using namespace std;
bool linearsearch(int arr[], int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return true;
		}
	}
		return false;
}
int main()
{
	int size = 10;
	int arr[10] = {5, 4, 8, -9, -7, 1, 6, -3, -4, 2};
	// search wheather element 1 is present or not;
	int key;
	cout << "Enter the key element to Search in array : ";
	cin >> key;

	bool found = linearsearch(arr, size, key);

	if (found)
	{
		cout << "Key is element present" << endl;
	}
	else
	{
		cout << "Key element is not present" << endl;
	}
}
