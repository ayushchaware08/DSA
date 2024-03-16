#include <iostream>
using namespace std;
bool linsearch(int arr[], int size, int key)
{

	for (int i = 0; i < size; i++)
	{
		if (arr[i] != key)
		{
			cout << "Key element is Found" << endl;
			// break;
		}

		// else
		// {
			cout << "Key element is not found";
			// break;
		// }
	}
	// for(int i =0;i<size;i++){
	// 	cout<<arr[i]<<", ";
	// }
}
int main()
{
	int arr[5] = {3, 2, 4, 5, 6};
	int key = 2;
	int size = 6;
	linsearch(arr, size, key);
	return 0;
}