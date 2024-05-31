#include<iostream>
using namespace std;

int *func(){
	int x = 10;
	return &x;
}
int main(){
	/*cam
	// ---------Null ptr---------
	int *i = NULL;
	int *i =0;
	// --------- Double pointer -------
	int a = 10;
    int * p = & a; //pointer
    int ** q = & p; //pointer-to-pointer
    // address of a 
    cout << & a <<endl << p <<endl << * q <<endl;
    //address of p
    cout << & p <<endl << q <<endl;
    // value of a
    cout << a <<endl << * p <<endl << ** q <<endl;

	// -------Void Pointer-------
	void *p1;
	int a = 10;
	p1 = &a; // int address assign to void 

	// ------- wild ptr ---------
	int *ptr; //wild
	ptr = &a; //not wild now

	// --------Dangling ptr----------
	// ptr point to many
	*/

	// (a) function call
	// let any func() is called outside the main
	int *p2 = func(); //pothing to something which is not valid anymore
	cout<< *p2 <<endl;

	// (b) Memory Deallocation
	//dynamic memory allocation.
    int * p = (int * ) malloc(sizeof(int));
    //after calling free() p becomes a dangling pointer
    free(p);
    //now p no more a dangling pointer.
    p = NULL;

	// (c) Variable go out of scope
	int * ptr;
    //any code statements
    {   int ch;
        ptr = & ch;
    }



	return 0;
}