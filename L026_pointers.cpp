#include<iostream>
using namespace std;
int main(){
	// pointers array
	int arr [10] = {7,2,5,4};
	cout<<"Address of 1st block is (0th index): "<<arr<<endl;
	cout<<"Address of 1st block is (0th index): "<<&arr[0] <<endl;
	cout<<"value at 0th index: "<<*arr<<endl;
	cout<<"value at 0th index: "<<*arr+1<<endl; //perform sum with 0th
	cout<<"value at 1st index: "<<*(arr+1)<<endl; // acces val pointed by arr+1
	cout<<"value at 0th index: "<<*(arr)+1<<endl; //perform sum with 0th


	cout<< arr[2] <<endl << *(arr+2) <<endl;
	cout<< 2[arr] <<endl << *(2+arr) <<endl; // still execute

	// diffrence array and pointer 
	// 1. Size
	int temp[10] = {1,3};
	cout<< sizeof(temp) <<endl;
	cout<<"1st"<<sizeof(*temp) <<endl;
	cout<<"1st"<<sizeof(&temp) <<endl;

	int *ptr = &temp[0];
	cout<< sizeof(ptr) << endl;
	cout<< sizeof(*ptr) << endl;
	cout<< sizeof(&ptr) << endl <<endl;

	// & and

	int a[20] = {1,2, 3 ,4};
	cout<< &a[0] <<endl;
	// cout<< &a <<endl;
	// cout<< a <<endl<<endl;

	int *p1 = &a[0];
	// cout<< p1 <<endl;
	// cout<< *p1 <<endl;
	cout<< &p1 <<endl <<endl;  
	// add diffrence



	// symbol table cant be changed
	int arr1[10];
	// arr = arr +1; //errorr
	int *t = &arr[0];
	t = t +1; // executable


	//------------CHaractearray--------
	int ar[5] = {1,2,3,4,5}; //int array
	cout<<"Add:"<<ar<<endl; //address
	char ch[6] = "abde"; //char array
	cout<<"value:"<<ch<<endl; //value

	int *i = &arr[0];
	cout<<"i: "<<i<<endl; //print add
	char *c = &ch[0];
	cout<<"c: "<<c<<endl; //print char

	char tempo[4] = "zdf";
	// char *p8 = &tempo[0];
	char *p8 = "abcde";
	cout<<p8 << endl;


	//--------function pointers---------






	return 0;


}
	