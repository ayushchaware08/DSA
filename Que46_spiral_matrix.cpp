#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	vector<int> spiralOrder(vector<vector<int>> &matrix)
	{
		vector<int> ans;

		int row = matrix.size();	// no of rows
		int col = matrix[0].size(); // no of cols

		int count = 0;		   // no of ele
		int total = row * col; // total ele

		int startingrow = 0;
		int startingcol = 0;
		int endingrow = row - 1;
		int endingcol = col - 1;

		while (count < total)
		{
			// print starting row
			for (int index = startingcol; count < total && index <= endingcol; index++)
			{
				ans.push_back(matrix[startingrow][index]);
				count++;
			}
			startingrow++;

			// print ending col
			for (int index = startingrow; count < total && index <= endingrow; index++)
			{
				ans.push_back(matrix[index][endingcol]);
				count++;
			}
			endingcol--;

			// ending row
			for (int index = endingcol; count < total && index >= startingcol; index--)
			{
				ans.push_back(matrix[endingrow][index]);
				count++;
			}
			endingrow--;

			// sarting column
			for (int index = endingrow; count < total && index >= startingrow; index--)
			{
				ans.push_back(matrix[index][startingcol]);
				count++;
			}
			startingcol++;
		}
		for (int i = 0; i < ans.size(); i++)
		{
			cout << ans[i] << " ";
		}
	}
};

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

	Solution array;
	vector<vector<int>> matrix(3, vector<int>(3));
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix[i][j] = arr[i][j];
		}
	}
	array.spiralOrder(matrix);
}