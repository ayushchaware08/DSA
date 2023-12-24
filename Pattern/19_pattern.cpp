// // output as + for n=5;
// E
// DE
// CDE
// BCDE
// ABCDE

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
		int col = 1;
		char start = 'A' + n - row;
		while(col<=row)
		{
			cout<< start;
			start = start + 1;
			col = col + 1;
		}
		cout << endl;
		row = row + 1;
	}
}