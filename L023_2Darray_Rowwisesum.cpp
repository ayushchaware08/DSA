#include <iostream>
using namespace std;
// to print row wise sum
void printsumrow(int arr[][3], int row, int col)
{
	cout<<"row wise Sum is" <<endl;
	for (int row = 0; row < 3; row++)
	{
		int sum = 0;
		for (int col = 0; col <= 3; col++)
		{
			sum += arr[row][col];
		}
		cout<<sum<<" ";
	}
	cout<<endl;
}


// to print col wise sum
void printsumcol(int arr[][3], int row, int col)
{
	cout<<"Col wise Sum is" <<endl;
	for (int col = 0; col < 3; col++)
	{
		int sum = 0;
		for (int row = 0; row < 3; row++)
		{
			sum += arr[row][col];
		}
		cout<<sum<<" ";
	}
	cout<<endl;
}

// MAximum row sum
void largestrowsum(int arr[][3], int col){
	int maxi = INT8_MIN;
	int rowindex = -1;
	for (int row = 0; row < 3; row++)
	{
		int sum = 0;
		for (int col = 0; col <= 3; col++)
		{
			sum += arr[row][col];
		}
		if(sum > maxi){
			maxi = sum;
			rowindex = row; // to give row number
		}
	}
	cout<<"Row: "<< rowindex<<" having sum " << maxi<<endl;
}



int main()
{
	int arr[3][3];
	cout << "Enter the 2d array element: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{ 
			cin >> arr[i][j];
		}
	}

	// print
	
	cout << "Printing the 2d array element" << endl;
	for (int i = 0; i < 3; i++)
	{ 
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	printsumrow(arr, 3, 3);
	printsumcol(arr, 3, 3);
	largestrowsum(arr, 3);

	return 0;

}