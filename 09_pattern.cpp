// output as:
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15     ----- for n=5;

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	int count = 1;
	int row = 1;
	while(row <= n)
	{
		int col = 1;
		while(col<=row)
		{
			cout<<count<<" ";   //
			count=count+1;      //
			col = col + 1;
		}
		cout<<endl;
		row = row + 1;
	}
}