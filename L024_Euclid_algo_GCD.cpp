// Iterative Mehthod (can be solved using recursion also)
// https://www.naukri.com/code360/library/gcd-euclidean-algorithm
#include<iostream>
using namespace std;
int gcd(int a , int b){

	if(a == 0){
		return b;
	}
	if(b==0){
		return a;
	}
	while(a!= b){
		// jo bada hai usko minus kro
		if(a>b){
			a = a-b;
		}
		else{
			b = b-a;
		}
	}
	return a;
}

int lcm(int a , int b){
	// LCM * HCF = a*b
	int ab = a*b;
	return ab/gcd(a,b);

}

int main(){
	int a, b;
	cout<< "ENter the a and b: ";
	cin>> a>> b;

	cout<< "multiplication "<< a*b <<endl;
	cout<< "GCD is "<< gcd(a, b) <<endl;
	cout<< "LCM is "<< lcm(a,b) <<endl;
	cout<< "Multiplication is "<< lcm(a,b) * gcd(a, b)<<endl;

}