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
		int x = 5<<2;
		cout<< x << endl;

	//---------- RIGHT Shift --------
		// 	Example :
		// 0 0 0 0 0 0 1 0 1

		// 0 0 0 0 0 0 0 1 0   ----(after Left shift)
		int y = 5>>2;
		cout<< y << endl;
	
	//----------Right / Left Shift -------------
		// Bin no. are shifted by bits 

		cout<< (5>>2) <<endl;
		cout<< (6>>2) <<endl;
		cout<< (5<<2) <<endl;
		cout<< (6<<2) <<endl;

	cout<<endl;
	//------- Increment/ Decrement ------------
		int i = 2;
		cout << (i++) <<endl;
		int j = 2;
		cout << (++j) <<endl;
		int k = 2;
		cout << (k--) <<endl;
		int l = 2;
		cout << (--l) <<endl;

}