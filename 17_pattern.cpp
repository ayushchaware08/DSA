// output as + for n=5;
// A 
// B B
// C C C
// D D D D
// E E E E E
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
		while(col<=row)
		{
			char ch  =  'A' + row - 1;
			cout << ch << " ";
			col = col + 1;
		}
		cout << endl;
		row = row + 1;
	}
}