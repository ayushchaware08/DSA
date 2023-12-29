// Form this function
// nCr = n! / (r! * (n-1)!)

#include<iostream>
using namespace std;

	// factorial function : n! = n * n-1 * n-2 *-----* 1.
	int factorial(int n)
	{
		int fact = 1;
		for(int i = 1; i<=n; i++)
		{
			fact = fact * i;
		}
		return fact;
	}

	//nCr function
	int ncr(int n, int r)
	{
		int numerator = factorial(n);
		int denominator = factorial(r) * factorial(n-r); 
		return numerator / denominator;
	}

	// main body
	int main()
	{
		int n;
		cout<< "Enter the Value of n : ";
		cin>>n;
		int r;
		cout<< "Enter the value of r : ";
		cin>>r;
		cout<< "nCr = "<< ncr(n, r);

	}
