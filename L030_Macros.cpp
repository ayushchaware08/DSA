#include<iostream>
using namespace std;
// Define Macros
#define PI 3.14
int main(){
	int r = 5;

	// double pi = 3.14; // solution 1 

	//macros is not updatable 
	// PI = PI +1;  //error
	double area = PI * r* r;
	cout<<area<<endl;

	// ---------_TYPES_--------

	return 0;
}