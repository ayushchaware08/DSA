// i/p: 412
// o/p: four one two

#include<iostream>
using namespace std;

void saynumber(int n){


	// base case
	if(n == 0)
		return ;

	// processing
	string arr[10] = {"zero", "one", "two","three","four","five","six","seven","eight","nine"};
	int digit = n%10;
	n = n/10;


	// recursive call
	saynumber(n);
	// tail Ricurssion
	cout<<arr[digit]<<" ";
}

int main(){
	int n ;
	cout<< "Enter the Number: ";
	cin>> n ;

	saynumber(n);


}