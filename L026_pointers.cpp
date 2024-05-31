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
	// arr[i] = *(arr+i)

	// diffrence array and pointer 
	// 1. Size
	int temp[10] = {1,3};
	cout<< sizeof(temp) <<endl;
	cout<<"1st"<<sizeof(*temp) <<endl;
	cout<<"1st"<<sizeof(&temp) <<endl<<endl;

	int *ptr = &temp[0];
	cout<< sizeof(ptr) << endl;
	cout<< sizeof(*ptr) << endl;
	cout<< sizeof(&ptr) << endl <<endl;

	// 2. & and

	int a[20] = {1,2, 3 ,4};
	cout<< &a[0] <<endl; // Add of 0th Index
	cout<< &a <<endl; // Add of 0th Index
	cout<< a <<endl<<endl; // Add of 0th Index

	int *p1 = &a[0];
	cout<< p1 <<endl;
	cout<< *p1 <<endl;
	cout<< &p1 <<endl <<endl;  // add diffrence

	// 3. symbol table cant be changed

	int arr1[10] = {1,4,7,9,0};
	for(int i =0; i<10;i++ ){
		cout<<arr1[i]<<" ";
	}cout<<endl;

	// arr = arr +1; //errorr
	int *t = &arr[0];
	t = t +1; // but executable
	cout<< t <<endl;
	cout<< *t <<endl;

	//------------CHaractearray--------
	int ar[5] = {1,2,3,4,5}; //int array
	cout<<"Add:"<<ar<<endl; //address of 0th index
	char ch[6] = "abde"; //char array
	cout<<"value:"<<ch<<endl; //value 

	int *i = &ar[0];
	cout<<"i: "<<i<<endl; //print add of 0th index
	char *c = &ch[0];
	cout<<"c: "<<c<<endl; //print char

	char tempo[4] = "zdf";
	// char *p8 = &tempo[0];
	char *p8 = "abcde";
	cout<<p8 << endl;





	return 0;


}
	