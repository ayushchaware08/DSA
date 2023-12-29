#include<iostream>
using namespace std;

// pass ny value : creates a copy of variable perform operations by keeping org as it is.
int dummy(int n)
{
	n++;
	cout<< "Value of n is : "<< n << endl;
}

// Call by Reference


int main()
{
	int n;
	cin>> n;

	dummy(n);  //16
	cout<< "Value of n is : " << n <<endl;  //15

}