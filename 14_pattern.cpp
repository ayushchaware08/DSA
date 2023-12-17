// Output as : for N=5
// A B C D E 
// F G H I J
// K L M N O
// P Q R S T
// U V W X Y

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"ENter the number : ";
	cin >>n;
	
	char count = 'A';
	int row = 1;
	while(row <= n)
	{
		int col = 1;
		while(col<=n)
		{
			cout<< count<< " ";
			count = count + 1;
			col = col + 1;
		}
		cout<<endl;
		row = row + 1;
	}
}