// Output as : 
// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9

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
		int count = row; //
		while(col <= row)

		{
			cout<< count <<" ";  //
			count = count + 1;
			col = col+1;
		}
		cout<<endl;
		row = row+1;
	}
	

}