#include <iostream>
using namespace std;
int main()
{
	//------- Increment/ Decrement ------------
		int i = 2;
		cout << (i++) <<endl;
		int j = 2;
		cout << (++j) <<endl;
		int k = 2;
		cout << (k--) <<endl;
		int l = 2;
		cout << (--l) <<endl;
	
	cout<< endl;
	// Guess the Output
		//------------ Sample 1 ------------
		// int a, b = 1;
		// a = 10;
		// if (++a)
		// 	cout<< b << "inside If";
		// else
		// 	cout<< ++b << "inside Else";

		//---------- Sample 2 -------------
		int a = 1, b = 2;
		if ( a-- > 0 && ++b >2)
			cout<<"Insise If" << endl;
		else
			cout<< " inside else"<<endl;
		cout<< a << " " << b << endl;

		//--------- Sample 3 -------------
		int num = 3;
		cout<< (25 * (++num));
}

// Output 
// S1 : insideif
// S2 : 0 3
// S3 : 100
