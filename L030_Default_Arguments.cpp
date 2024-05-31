#include<iostream>
using namespace std;
// deafult arg must be from rightmost
// void print(int arr[], int n = 0, int start ){ //Invalid
void print(int arr[], int n, int start = 0){// now start is default argument
// void print(int arr[], int n, int start ){
	for (int i =start; i<n; i++ ){
		cout<<arr[i]<<endl;
	}
}

int main(){
	int arr[5] ={ 1,4,7,8,9};
	int size =5;
	print(arr,size,3);
 cout<<endl;
	// i want to make start argument optional (pass kiya to uske hisab sse print karo ya pura krva do)
	// initilize value of that arg as 0 (here i want to make start as default arg)
	print(arr,size);
	return 0;
}