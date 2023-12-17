// for output:
// *
// * *
// * * *
// * * * *  ----- for n = 4;

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number : ";
	cin >> n;
	int row = 1;
	while (row <= n)
	{
		int col = 1;
		while (col <= row) //
		{
			cout <<col<< " ";

			col = col + 1;
		}
		cout << endl;
		row = row + 1;
	}
}

// tryfor 1 2 3....