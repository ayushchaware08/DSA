// Output as : n= 5
// A B C 
// B C D 
// C D E

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<< " Enter the number : ";
	cin>>n;

	int row = 1;
	while( row <= n)
	{
		int col = 1;
		char count = 'A'; //
		while(col <= n)
		{
			// char ch = count + row;
			// cout<< ch <<" ";  //
			// count = count + 1;
			// col = col+1;
			char ch = 'A' + row + col - 2;
			cout<< ch<<" ";
			col = col+1;
		}
		cout<<endl; 
		row = row+1;
	}
	

}