// output as + for n=5;
//     *
//    **
//   ***
//  ****
// *****

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
		// to Print space
		int space = n - row;
		while(space)
		{
			cout<<" ";
			space = space -1;
		}
		
		// to print Stars
		int col = 1;
		while(col<=row)
		{
			cout << "*";
			col = col + 1;
		}
		cout << endl;
		row = row + 1;
	}
}