#include<iostream>
using namespace std;


// using while loop
int insertionsort2(int arr[], int n){
	
}


// using For loop
int insertionsort1(int arr[],int n){
	for(int i =1; i <n; i++){
		//targeted element
		int temp = arr[i];
		int j = i-1;
		for(;j>=0 ;j--){

			// Shift
			if(arr[j]>temp){
				arr[j+1]=arr[j];
			}
			else{ //stop
				break;
			}
		}
		arr[j+1]=temp;
	}
	for(int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[10] = {10, 20, 90, 4, 87, 43, 54, 25, 18, 30};
	int n = 10;
	insertionsort1(arr, n);
}