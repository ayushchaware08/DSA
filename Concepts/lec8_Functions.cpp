// making  a function power(a, b) which gives answer a^b.

#include<iostream>
using namespace std;

// Defining a function
int power(int a, int b)
{
	int ans = 1;
	for( int i = 1; i<= b; i++)
	{
		ans = ans * a;
	}
	return ans;
}

// Program firstly allways executes with int main;
int main()
{
	int a,b;
	cout<< "Enter value of a and b: ";
	cin>> a>>b;

	int ans = power(a,b);
	cout<< "answer is : "<<ans;

	return 0;
}
