// output as + for n=5;

// *****
// ****
// ***
// **
// *

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter The number : ";
	cin>>n;

	int row = 1;
	while(row<=n)
	{
		
		// to print Stars
		int col = 1;
		while(col<=row)
		{ 	int count = n-row;
			cout << count;
			col = col + 1;
		}
		cout << endl;
		row = row + 1;
	}
}