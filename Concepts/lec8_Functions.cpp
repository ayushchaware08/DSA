// making  a function

#include <iostream>
using namespace std;

// (1) Defining a function power(a, b) which gives answer a^b.
int power(int a, int b) //---------(Function Signature)
{
	//-----(function body)
	int ans = 1;
	for (int i = 1; i <= b; i++)
	{
		ans = ans * a;
	}
	return ans;
}

// (2) Defining Function to check number is odd or Even.
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
// another way to iseven function
//  bool iseven(int a)
//  {
//  	if(a&1)
//  	{
//  		// odd -> 0
//  		return 0;
//  	}
//  	else
//  	{
//  		// Even -> 1
//  		return 1;
//  	}
//  }

// (3) Function To check Prime or not
bool isprime(int n)
{
	for (int i = 2; i < n; i++)
	{
		// if completely divided ; not prime
		if (n % i == 0)
		{
			cout << n << " is not a prime Number";
			return 0;
			break;
		}
		else
		{
			cout << n << " is a Prime Number";
			return 1;
		}
	}
}

// (4) Febonachi Series
int fibb(int n)
{
	int a = 0, b = 1, ans = 0;
	for (int i = 0; i <= n ; i++)
	{
		ans = a + b;
		a = b;
		b = ans;
		cout<< ans<< " ";
	}
	return ans;
}

// (Main) Program firstly allways executes with int main;
int main()
{
	int a;
	cout << "Enter the Value of a : ";
	cin >> a;
	int b;
	cout << "Enter the value of b : ";
	cin >> b;

	int ans = power(a, b); //(1)-------(Function Calling)
	cout << a << " to power " << b << " is : " << ans << endl;

	int ans1 = iseven(a); //(2)

	int ans2 = isprime(a); //(3)

	int ans3 = fibb(a); //(4)

	return 0;
}
