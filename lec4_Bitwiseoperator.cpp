#include<iostream>
using namespace std;
int main()
{
	int a = 4;
	int b = 6;
	cout <<" a & b : "<< (a&b) << endl;   //AND
	cout <<" a | b : "<< (a|b) << endl;	//Or
	cout <<" ~a : "<< ~a << endl;		//NOT
	cout <<" a ^ b : "<< (a^b) << endl;	//XOR

	//---------- LEFT Shift --------
		// 	Example :
		// 	 0 0 0 0 0 0 1 0 1
		// 0 0 0 0 0 0 1 0 1 0  ----(after Left shift)
		int i = 5<<2;
		cout<< i << endl;

	//---------- RIGHT Shift --------
		// 	Example :
		// 0 0 0 0 0 0 1 0 1
		// 0 0 0 0 0 0 0 1 0   ----(after Left shift)
		int j = 5>>2;
		cout<< j << endl;

}