// to check n is Prime number or not
// by BRUTE FORCE METHOD

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << " Enter the Number : ";
	cin>> n;
	bool isprime = 1 ;
	for (int i = 2; i < n; i++)
	{
		// % == 0 Not Prime number
		if (n % i == 0)
		{
			// is loop me tabhi aayega if n%i==0 then bool 1 i.e is prime and break;
			// cout << "This is not a Prime number" << ", ";
			
			// set to nahi hai
			isprime = 0;  
			
			break;
		}
	
	}

	// bool isprime = 0 means prime nahi hai
	// bool isprime = 1 means prime hai
	if ( isprime == 0)
	{
		cout<< "This is not a Prime number";
	}
	else{
		cout<< " This is a Prime number";
	}
}