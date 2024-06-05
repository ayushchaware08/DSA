#include<iostream>
using namespace std;

int factorial(int n){
	// base case
	if(n == 0)
		return 1;

	// Recursive Function
	return n * factorial(n-1);

	// cout<<n<<endl; // not get executed 

	// int chotti = factorial(n-1);
	// int baddi  = n * chotti;
	// return baddi;

}

int power(int n){
	// base case

	if(n == 0)
	return 1;
	// RF
	return 2 * power(n-1);
}

int counting(int n){
	//base case
	if(n == 0)
		return 0;
	
	// M1 : 1 - n
	// counting(n-1);
	// cout<< n << endl;

	//M2 : n - 1
	cout<< n << endl;
	counting(n-1);
}

int main(){
	// Recursion : Fnunction calling Itself
	int n;
	cin >> n;
	cout<<endl;

	cout<<"Factorial of "<< n << " is "<< factorial(n) <<endl;

	cout<<"2 having power "<<n<< " is "<< power(n) <<endl;

	cout<<"Printing Counting"<< counting(n)<< endl;

	return 0;
}