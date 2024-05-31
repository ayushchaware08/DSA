	// Pointers are said to "point to" the variable whose address they store

#include<iostream>
using namespace std;
int main(){
	int num  = 5;
	cout<<"num = "<<num<<endl;
	// to see the address of the variable
	// adress operator - &
	cout<< "Value of num is (num): "<< num <<endl; //Value
	cout<< "Address of num is (& num): "<< &num <<endl;  // address we get a hexadec no.

	// Initilization of pointer
	int *p = &num;
	cout<< "Value pointed by p is (*p): "<< *p <<endl;  //Value at address pointed by p
	cout<< "Address of pointer p is &(*p): "<< &(*p) <<endl;  // Address of num 
	cout<< "Address of p (&p): "<< &p <<endl;  // Address of p
	cout<< "Address to which p is pointing (p): "<< p <<endl<<endl;  // Address of num
	// *p -> Value, p-> address

	double d = 4.3;
	double *p2 = &d;
	cout<<"Address (p2): "<< p2 << "  (&d): " << &d <<endl;
	cout<<"Value (*p2): "<< *p2 << "  (d): " << d <<endl<<endl;

	// Size of int Pointer
	cout<< "Size: "<< sizeof(num)<<endl;  // Value
	cout<< "Size: "<< sizeof(p)<<endl;  // add
	cout<< "Size: "<< sizeof(*p)<<endl<<endl;  // Value  *****gives 4******** as 32 bit system in 64bit->8

	//--------------------
	// Size of Double Pointer
	cout<< "Size: "<< sizeof(d)<<endl;  // Value
	cout<< "Size: "<< sizeof(p2)<<endl;  // add  *****gives 4******** as 32 bit system
	cout<< "Size: "<< sizeof(*p2)<<endl;  // value


	// pointer to int is created and pointing to some garbage value
	// int *ptr = 0; //means null value
	int *ptr;  //bad Practice
	cout<<"garbage: "<<*ptr<<endl; // garbage

	//-----------------------

	int i = 5;
	int *p3 = 0;
	p3 = &i; //now p3 is not null
	cout<<"address: "<<p3<<endl<<"Value: "<<*p3 <<endl;
	int *q = &i;
	cout<<"address: "<<q<<endl<<"Value: "<<*q <<endl<<endl;
	// both give same output

	// ----------------------

	int num1 =  5;
	int a = num1;
	cout<<"Num Before: " << num1 << endl;
	a++; 
	cout<<"Num After: " << num1 <<endl; // not any updation to num (a updated)


	int *p4 = &num1;
	cout<<"Num Before: " << num1 << endl;
	(*p4)++;
	cout<<"Num After: " << num1 <<endl;  // num get upadted

	// Copying a Pointer
	int *q1 = p4;
	cout<<p4<<" - "<<q1<<endl;  //same
	cout<<*p4<<" - "<<*q1<<endl<<endl; //same

	// -----------imp concept-------------
	int a1 = 3; 
	int *t = &a1;
	*t = *t + 1;
	// cout<< (*t)++ << endl;   // value get updated
	cout<< *t << endl;   
	cout<<"before t : "<< t <<endl;
	t = t +1; // address get updated by 4byte as int
	cout<<"After t : "<< t <<endl;
	 
	// -----------------------------

	int firstvalue = 5, secondvalue = 15;
    char thirdvalue = 'a';
    int * d1, * d2;
    char * d3;
    d1 = & firstvalue; 
    d2 = & secondvalue;
    d3 = & thirdvalue; 
    * d1 = 10; // value pointed to by d1 = 10
    cout << "firstvalue is " << firstvalue << endl;
    * d2 = * d1; // value pointed to by d2 = value pointed to by d1
    d1 = d2; // d1 = d2 (value of pointer is copied) (d1 address updated)
    * d1 = 20; 
    * d3 = 'b'; 
    cout << "firstvalue is " << firstvalue << endl;
    cout << "secondvalue is " << secondvalue << endl;
    cout << "thirdvalue is " << thirdvalue << endl;

	return 0;
}