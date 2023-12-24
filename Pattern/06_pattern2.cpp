// Output------(1)
// 1 1 1 1 1 
// 2 2 2 2
// 3 3 3
// 4 4
// 5

// Output-----(2)
// 1 2 3 4 5
// 2 3 4 5 
// 3 4 5
// 4 5
// 5


#include<iostream>
using namespace std;
int main ()
{
	int n;
	cout<< "Enter then Number " << endl;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		int j=i; // here j=i for triangle
		while(j<=n)
		{
			cout<<i<<" ";  //------(1)
			// cout<<j<<" ";  //------(2)
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
}