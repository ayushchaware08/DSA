// making  a function

#include <iostream>
using namespace std;

// Defining a function power(a, b) which gives answer a^b.
int power(int a, int b)
{
	int ans = 1;
	for (int i = 1; i <= b; i++)
	{
		ans = ans * a;
	}
	return ans;
}

// Defining Function to check number is odd or Even.
int iseven(int num1)
{
	if (num1 % 2 == 0)
	{
		cout << num1 << " is a Even Number" << endl;
	}
	else
	{
		cout << num1 << " is Odd Number" << endl;
	}
}
//another way to iseven function
// bool iseven(int a)
// {
// 	if(a&1)
// 	{
// 		// odd -> 0
// 		return 0;
// 	}
// 	else
// 	{
// 		// Even -> 1
// 		return 1;
// 	}
// }

// Program firstly allways executes with int main;
int main()
{
	int a, b;
	cout << "Enter value of a and b: " << endl;
	cin >> a >> b;

	int ans = power(a, b);
	cout << a << " to power " << b << " is : " << ans << endl;

	int ans1 = iseven(a);

	return 0;
}
